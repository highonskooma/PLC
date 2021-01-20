%{
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
int yylex();
void yyerror(char *s);
int intORchar(char* str);
int error=0;
int TabId[26]; //Tabela de Identificadores = Mapping(ID->Valor)i
FILE *txt;
%}

%union{ char valN; char valC; char *string; }
%token QUAD
%token <valN>NUM
%token <valC>ID
%token E OU
%token EQ NE LT LE GT GE
%token TRUE FALSE

%type <string> Termo Fator Cmds Cmd Atrib ExprR Expr quad

%%

Cmds  : Cmd             { fprintf(txt,"%s",$1); } 
      | Cmds Cmd        { fprintf(txt,"%s",$2); }             
      ;

Cmd   : Atrib 
      | quad 
//      | array                  { if (!error) {printf(" >> %f\n",$1);};error=0; }
      | ExprR '\n'               { if (!error) {asprintf(&$$,"%s",$1);};error=0; }
      ;   

quad : QUAD '(' ID ')' { asprintf(&$$,"pushi %d \njz ELSE0 \npushs \"pode ser quadrado\\n\" \nwrites \njump ENDIF0 \nELSE0: \npushs \"nao pode ser quadrado\\n\" \nwrites \nENDIF0: \nstop",TabId[$3-'A']); }  
     ;

Atrib : ID '=' ExprR '\n'        { if(!error) { TabId[$1-'A'] = asciiTOint($3[6]); 
				   asprintf(&$$,"%s\n",$3); } 
                                   error=0; }  
      ;
/*
array : ID '[' NUM ']' '=' '[' list ']' '\n'     { $$ = $7; }
      ;

list : NUM                     { $$ = $1; }
     | '-' NUM                 { $$ = (-1) * $2; }
     | list ',' NUM            { $$ = $1 + $3; }
     ;
*/
ExprR : Expr                     { asprintf(&$$,"%s",$1); }      
      | Expr EQ Expr             { asprintf(&$$,"%s\n%s\nequal", $1, $3); }
      ;

Expr  : Termo                    { asprintf(&$$,"%s",$1); }
      | Expr '+' Termo           { asprintf(&$$, "%s\n%s\nadd", $1, $3);}
      | Expr '-' Termo           { asprintf(&$$, "%s\n%s\nsub", $1, $3); }
      | Expr OU Termo            { asprintf(&$$, "%snot\n%snot\nmul\nnot\n", $1, $3); } 
      ;

Termo : Fator                    { asprintf(&$$,"%s",$1); }
      | Termo '*' Fator          { asprintf(&$$, "%s\n%s\nmul", $1, $3); }
      | Termo '/' Fator          { if ($3) { asprintf(&$$, "%s\n%s\ndiv", $1, $3); } 
                                   else { printf("ERRO - divisão por zero >:( \n"); 
                                   $$=0; error=1;} }
      | Termo  E  Fator          { asprintf(&$$, "%s\nnot\nnot\n%s\nnot\nnot\nmul", $1, $3); } 
      ;

Fator : NUM                      { asprintf(&$$,"pushi %d", $1); }
      | '-' NUM                  { asprintf(&$$,"pushi -%d",$2); }
      | ID                       { if ( TabId[ $1-'A' ] != INT_MAX ) { asprintf(&$$,"pushi %d",TabId[$1-'A']); }       
                                   else {  printf("ERRO Semantico - ID de Variável Desconhecido :(\n"); }}   
      | TRUE                     { asprintf(&$$,"pushi %d",1); }
      | FALSE                    { asprintf(&$$,"pushi %d",0); }
      | '(' ExprR ')'            { asprintf(&$$,"%s", $2); }
      ;

%%

#include "lex.yy.c"

void yyerror(char *s){
    printf("%s \n", s);
}

//return 1 se for int
//return 0 se for char
int intORchar(char* str) {
	if (48<=str[0]&&str[0]<=57) {return 1;}
	else {return 0;}
}

int asciiTOint(int a){
	return a-48;
}

int main(){
    txt = fopen("output.vm","w");
    fprintf(txt,"start\n");
    int i;
    for (i=0;i<26;i++) {TabId[i]=INT_MAX;}
    yyparse();
    fclose(txt);
    //printf("%d\n%d\n%d\n",TabId[0],TabId[1],TabId[2]);
    return(0);
}







