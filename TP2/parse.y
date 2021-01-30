%{
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include "uthash.h"
#include "functions.c"
#include "lex.yy.c"
int yylex();
void yyerror(char *s);
int intORchar(char* str);
void add_user(int user_id, char *name, int user_val, int user_add);
char *refresh(char* b,int n, int t);
int find_val(int user_id);
void print_users();
int check_ID(int i);
char asciiworkaround(int i);
int error=0;
int pc=0;
int TabId[26]; 
FILE *txt;
%}

%union{ int valN; char valC; char *string; }
%token INT
%token OPEN
%token CLOSE
%token IF
%token ELSE
%token QUAD
%token DIF
%token WHILE
%token DO
%token PROD
%token SCAN 
%token RET
%token <valN>NUM
%token <valC>ID
%token E OU
%token EQ NE LT LE GT GE
%token TRUE FALSE
%token END

%type <string> Termo Fator Cmds Cmd decl atrib ExprR Expr 
%type <string> quad prod while atribs ifelse scan 

%start Cmds

%%


Cmds  : Cmd             { fprintf(txt,"%s",$1); } 
      | Cmds Cmd        { fprintf(txt,"%s",$2); }           
      ;

Cmd   : decl 
      | atrib
      | atrib '\n' 
      | prod
      | quad
      | scan
      | while  
      | ifelse                 
      | ExprR '\n'             { if (!error) {asprintf(&$$,"%s",$1);};error=0; }
      ;   

scan : SCAN '(' ')' '\n'       { asprintf(&$$,"pushs \"escolha um inteiro \"\nwrites\nread\natoi\nstoreg 0\n"); }
;

prod : PROD '(' ID ')' OPEN '\n' while '\n' CLOSE    { asprintf(&$$,"%s\npushs \"o produtório é: \"writes\n\nstri\nwrites\npushs \"\\n\"\nwrites\n",$7); }

while : WHILE '(' ExprR ')' DO OPEN atribs CLOSE            { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$7); }
      | WHILE '(' ExprR ')' DO OPEN '\n' atribs CLOSE       { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$8); }
      | WHILE '(' ExprR ')' DO OPEN atribs '\n' CLOSE       { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$7); }
      | WHILE '(' ExprR ')' DO OPEN '\n' atribs '\n' CLOSE  { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$8); }



ifelse : IF '(' ExprR ')' DO OPEN atribs CLOSE ELSE OPEN atribs CLOSE { asprintf(&$$,"%s \njz ELSE \n%s\n jump FIM \n ELSE:\n %s\n FIM:",$3,$7,$11); }

quad : QUAD '(' ID ',' ID ',' ID ',' ID ')' OPEN '\n' ifelse '\n' CLOSE { asprintf(&$$,"%s \njz ENTAO \npushs \"pode ser quadrado\\n\" \nwrites \njump END \nENTAO: \npushs \"não pode ser quadrado\\n\" \nwrites \nEND: \n",$13);}
     ;

decl  : INT ID  '\n'             { TabId[$2-'A']=pc; pc++; asprintf(&$$,"pushi %d\n",0); } ;

atribs : atribs atrib            { asprintf(&$$,"%s\n%s\n",$1,$2); }
       | atribs '\n' atrib       { asprintf(&$$,"%s\n%s\n",$1,$3); }
       | atrib
       ;

atrib : ID '=' ExprR END        { asprintf(&$$,"%s\nstoreg %d\n",$3,TabId[$1-'A']); }
      ;

ExprR : Expr                     { asprintf(&$$,"%s",$1); }      
      | Expr '<' Expr            { asprintf(&$$,"%s\n%s\ninf",$1,$3); }
      | Expr LE Expr             { asprintf(&$$,"%s\n%s\ninfeq",$1,$3); }
      | Expr '>' Expr            { asprintf(&$$,"%s\n%s\nsup",$1,$3); }
      | Expr GE Expr             { asprintf(&$$,"%s\n%s\nsupeq",$1,$3); }
      | Expr EQ Expr             { asprintf(&$$,"%s\n%s\nequal", $1, $3); }
      | Expr DIF Expr            { asprintf(&$$,"%s\n%s\nequal not",$1,$3); }
      ;

Expr  : Termo                    { asprintf(&$$,"%s",$1); }
      | Expr '+' Termo           { asprintf(&$$, "%s\n%s\nadd", $1, $3); }
      | Expr '-' Termo           { asprintf(&$$, "%s\n%s\nsub", $1, $3); }
      | Expr OU Termo            { asprintf(&$$, "%s\nnot\n%s\nnot\nmul\nnot\n", $1, $3); } 
      ;

Termo : Fator                    { asprintf(&$$,"%s",$1); }
      | Termo '*' Fator          { asprintf(&$$, "%s\n%s\nmul", $1, $3); }
      | Termo '/' Fator          { if ($3) { asprintf(&$$, "%s\n%s\ndiv", $1, $3); } 
                                   else { printf("ERRO - divisão por zero >:( \n"); 
                                   $$=0; error=1;} }
      | Termo  E  Fator          { asprintf(&$$, "%s\n%s\nmul", $1, $3); } 
      ;

Fator : NUM                      { asprintf(&$$,"pushi %d", $1); }
      | '-' NUM                  { asprintf(&$$,"pushi %d",-1*$2); }
      | ID                       { if(!error) { asprintf(&$$,"pushg %d\n", TabId[$1-'A'] ); }       
                                   else { printf("ERRO Semantico - ID de Variável Desconhecido :(\n"); }}   
      | TRUE                     { asprintf(&$$,"pushi %d",1); }
      | FALSE                    { asprintf(&$$,"pushi %d",0); }
      | '(' ExprR ')'            { asprintf(&$$,"%s", $2); }
      ;

%%

struct simple {
	char* name;
	int add;
};



void yyerror(char *s){
    printf("%s \n", s);
}


int main(){
    for(int i=0;i<26;i++){TabId[i]=INT_MAX;}
    txt = fopen("output.vm","w");
    fprintf(txt,"start\n");
    struct my_struct *s;
    yyparse();
    fprintf(txt,"\nstop\n");
    fclose(txt);
    print_users();
    for(int i=0;i<26;i++){if(TabId[i]!=INT_MAX){printf("%d\n",TabId[i]);}};
    return(0);
}






