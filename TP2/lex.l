%{
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap

%%
(?i:int)	          {return INT;}
(?i:while) 	          {return WHILE;}
(?i:do) 	          {return DO;}
"{"                   {return OPEN;}
"}"                   {return CLOSE;}
(?i:if)               {return IF;}
(?i:else)             {return ELSE;}
(?i:prod)             {return PROD;}
(?i:quad)	          {return QUAD;}
(?i:scan)             {return SCAN;}
[+\-*/=()\n\r\[\],<>] {return (yytext[0]);}
"=="                  {return EQ;}
"!="		          {return DIF;}
(?i:ge)		          {return (GE);}
(?i:le)		          {return (LE);}
(?i:e)                {return (E);}
(?i:true)             {return (TRUE);}
(?i:false)            {return (FALSE);}
(?i:ou)               {return (OU);}
\<\=                  { return LE; }
\>\=                  { return GE; }
[A-Za-z]              {yylval.valC = toupper (yytext[0]);return ID;}
[0-9]+                {yylval.valN = atoi(yytext); return (NUM); }    
";"                   {return END;}          
.|\n                  {;}
%%
