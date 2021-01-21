%{
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include "uthash.h"
int yylex();
void yyerror(char *s);
int intORchar(char* str);
void add_user(int user_id, char *name, int user_val, int user_add);
int find_val(int user_id);
void print_users();
int check_ID(int i);
char asciiworkaround(int i);
int error=0;
int pc=0;
int TabId[26]; 
FILE *txt;
%}

%union{ char valN; char valC; char *string; }
%token QUAD
%token WHILE
%token RET
%token <valN>NUM
%token <valC>ID
%token E OU
%token EQ NE LT LE GT GE
%token TRUE FALSE

%type <string> Termo Fator Cmds Cmd Atrib ExprR Expr 
%type <string> Func Corpo Ret

%start Func

%%
Func  : '|' Atrib '|' Corpo '|' Ret '|'    {printf("%s\n",$4);}
      | Cmds
      ;

Corpo : WHILE '(' ExprR ')' Cmds       {printf("%s\n%s\n",$3,$5);}
      ;

Cmds  : Cmd             { fprintf(txt,"%s",$1); } 
      | Cmds Cmd        { fprintf(txt,"%s",$2); }             
      ;

Cmd   : Atrib 
//    | array                  { if (!error) {printf(" >> %f\n",$1);};error=0; }
      | ExprR '\n'               { if (!error) {asprintf(&$$,"%s",$1);};error=0; }
      ;   

Ret   : RET ExprR                           {printf("%s\n",$2);}                   
      ; 

//quad : QUAD '(' ID ')' { asprintf(&$$,"pushi %d \njz ELSE0 \npushs \"pode ser quadrado\\n\" \nwrites \njump ENDIF0 \nELSE0: \npushs \"nao pode ser quadrado\\n\" \nwrites \nENDIF0: \n",TabId[$3-'A']); }  
//     ;

Atrib : ID '=' ExprR '\n'        { if(check_ID($1-'A')==0) { 
				   //printf("%d\n",strlen($1));
				   char nome[1];
				   nome[0]=asciiworkaround($1-'A'); 
				   add_user($1-'A',nome,sumINT($3),pc);	
				   pc++;		   
				   asprintf(&$$,"%s\n",$3); 
				   }  
				   else {
				   char nome[1];
				   nome[0]=asciiworkaround($1-'A'); 		   
				   asprintf(&$$,"%s (atribuição)\n",$3); 
				   add_user($1-'A',nome,sumINT($3),pc);
				   pc++;	
				   }
                                     
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
      | Expr OU Termo            { asprintf(&$$, "%s\nnot\n%s\nnot\nmul\nnot\n", $1, $3); } 
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
      | ID                       { if ( check_ID($1-'A')==1 ) { asprintf(&$$,"pushi %d\n",find_val($1-'A')); }       
                                   else { printf("ERRO Semantico - ID de Variável Desconhecido :(\n"); }}   
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

int sumINT(char* s){
	int i=0;
	int res=0;
	int length;
	while(s[i]!='\0'){
		if(48<=s[i]&&s[i]<=57){
			res+=atoi(&s[i]);	
		}
		i++;	
	}
	return res;	
}



struct my_struct {
    int id;                    //key
    char name[1]; 		//nome
    int val;			//valor da variavel
    int add;			//endereço na stack
    UT_hash_handle hh;         /* makes this structure hashable */
};

struct my_struct *users = NULL;

void add_user(int user_id, char *name, int user_val, int user_add) {
    struct my_struct *s;

    HASH_FIND_INT(users, &user_id, s);  /* id already in the hash? */
    if (s==NULL) {
      s = (struct my_struct *)malloc(sizeof *s);
      s->id = user_id;
      s->val = user_val;
      s->add = user_add;
      HASH_ADD_INT( users, id, s );  /* id: name of key field */
    }
    else {
    s->val=user_val;
    s->id=user_id;
    s->add=user_add;
    }
    strcpy(s->name, name);
}

struct my_struct *find_user(int user_id) {
    struct my_struct *s;
    HASH_FIND_INT( users, &user_id, s );  /* s: output pointer */
    return s;
}

int find_val(int user_id) {
    struct my_struct *s;
    HASH_FIND_INT(users,&user_id,s);
    return s->val;

}

void print_users() {
    struct my_struct *s;

    for(s=users; s != NULL; s=(struct my_struct*)(s->hh.next)) {
        printf("id %d | name %s | value %d | address %d \n", s->id, s->name, s->val, s->add);
    }
}

//1 se estiver na strcut, 0 se não estiver
int check_ID(int i){
    int flag=0;
    struct my_struct *s;
    for(s=users; s != NULL; s=(struct my_struct*)(s->hh.next)) {if(i==s->id){flag=1;}}
    return flag;
}

char asciiworkaround(int i) {
	return 'a' + i;
}


int main(){
    txt = fopen("output.vm","w");
    fprintf(txt,"start\n");
    struct my_struct *s;
    yyparse();
    fprintf(txt,"stop\n");
    fclose(txt);
    //print_users();
    return(0);
}





