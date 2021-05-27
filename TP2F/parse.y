%{
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include "lex.yy.c"
int yylex();
void yyerror(char *s);
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
%token SCANE
%token SCANB
%token POTENCIA
%token PRINT
%token PRINTM
%token <valN>NUM
%token <valC>ID
%token E OU
%token EQ LE GE
%token TRUE FALSE
%token DIV
%token END

%type <string> Termo Fator Cmds Cmd decl atrib ExprR Expr potencia
%type <string> quad prod while atribs ifelse scan scanbase scanexp
%type <string> print printM

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
      | scan '\n'
      | scanexp
      | scanexp '\n'
      | scanbase
      | scanbase '\n'
      | while  
      | while '\n'
      | ifelse  
      | ifelse '\n'
      | potencia  
      | print
      | printM
      | ExprR '\n' { if (!error) {asprintf(&$$,"%s",$1);};error=0; }
      ;   

print : PRINT '(' ')'              { asprintf(&$$,"pushs \"a potência é \"\nwrites\nwritei\npushs \"\\n\"\nwrites\n"); }
;

printM : PRINTM '(' ')'            { asprintf(&$$,"pushs \"o menor inteiro é \"\nwrites\npushg 0\nwritei\npushs \"\\n\"\nwrites\n"); }
;

potencia : POTENCIA '(' ')' '\n'   { system("./lex < potencia.txt");  }
;

scan : SCAN '(' ID ')'             { asprintf(&$$,"pushs \"escolha um inteiro \"\nwrites\nread\natoi\nstoreg %d\n",TabId[$3-'A']); }
;

scanbase : SCANB '(' ID ')'        { asprintf(&$$,"pushs \"escolha um inteiro base \"\nwrites\nread\natoi\nstoreg %d\n",TabId[$3-'A']); }
;

scanexp : SCANE '(' ID ')'         { asprintf(&$$,"pushs \"escolha um inteiro expoente \"\nwrites\nread\natoi\nstoreg %d\n",TabId[$3-'A']); }
;

prod : PROD '(' ID ')' OPEN '\n' while '\n' CLOSE    { asprintf(&$$,"%s\npushs \"o produtório é: \"writes\n\nstri\nwrites\npushs \"\\n\"\nwrites\n",$7); }

while : WHILE '(' ExprR ')' DO OPEN atribs CLOSE            { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$7); }
      | WHILE '(' ExprR ')' DO OPEN '\n' atribs CLOSE       { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$8); }
      | WHILE '(' ExprR ')' DO OPEN atribs '\n' CLOSE       { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$7); }
      | WHILE '(' ExprR ')' DO OPEN '\n' atribs '\n' CLOSE  { asprintf(&$$,"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",$3,$8); }
;


ifelse : IF '(' ExprR ')' DO OPEN atribs CLOSE ELSE OPEN atribs CLOSE   { asprintf(&$$,"%s \njz ELSE \n%s\n jump FIM \n ELSE:\n %s\n FIM:",$3,$7,$11); }
       | IF '(' ExprR ')' DO OPEN atribs CLOSE                          { asprintf(&$$,"%s \njz FIM \n%s\nFIM:",$3,$7); }
       ;

quad : QUAD '(' ID ',' ID ',' ID ',' ID ')' OPEN '\n' ifelse '\n' CLOSE { asprintf(&$$,"%s \njz ENTAO \npushs \"pode ser quadrado\\n\" \nwrites \njump END \nENTAO: \npushs \"não pode ser quadrado\\n\" \nwrites \nEND: \n",$13);}
     ;

decl  : INT ID  '\n'             { TabId[$2-'A']=pc; pc++; asprintf(&$$,"pushi %d\n",0); } ;
      | INT ID                   { TabId[$2-'A']=pc; pc++; asprintf(&$$,"pushi %d\n",0); } ;


atribs : atribs atrib            { asprintf(&$$,"%s\n%s\n",$1,$2); }
       | atribs '\n' atrib       { asprintf(&$$,"%s\n%s\n",$1,$3); }
       | atribs '\n' ifelse      { asprintf(&$$,"%s\n%s\n",$1,$3); }
       | scan '\n' ifelse        { asprintf(&$$,"%s\n%s\n",$1,$3); }
       | atrib    
       | while      
       | ifelse                
       ;

atrib : ID '=' ExprR END         { asprintf(&$$,"%s\nstoreg %d\n",$3,TabId[$1-'A']); }
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
      | NUM DIV NUM              { asprintf(&$$,"pushi %d\nitof\npushi %d\nitof\nfdiv",$1,$3); }
      | NUM DIV ID               { asprintf(&$$,"pushi %d\nitof\npushg %d\nitof\nfdiv",$1,TabId[$3-'A']); }
      | ID DIV NUM               { asprintf(&$$,"pushg %d\nitof\npushi %d\nitof\nfdiv",TabId[$1-'A'],$3); }
      | ID DIV ID                { asprintf(&$$,"pushg %d\nitof\npushg %d\nitof\nfdiv",TabId[$1-'A'],TabId[$3-'A']); }
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

void yyerror(char *s){
    printf("%s \n", s);
}

int main(){
    for(int i=0;i<26;i++){TabId[i]=INT_MAX;}
    txt = fopen("output.vm","w");
    fprintf(txt,"start\n");
    yyparse();
    fprintf(txt,"\nstop\n");
    fclose(txt);
    return(0);
}

