%{
#include <stdio.h>
#include "y.tab.h"
%}

%option noyywrap

%%
quad                {return QUAD;}
[+\-*/=()\n\r\[\],] {return (yytext[0]);}
"=="                {return EQ;}
(?i:e)              {return (E);}
(?i:true)           {return (TRUE);}
(?i:false)          {return (FALSE);}
(?i:ou)             {return (OU);}
[A-Za-z]            {yylval.valC = toupper (yytext[0]);return ID;}
[0-9]+              {yylval.valN = atoi(yytext); return (NUM); }              
.|\n                {;}
%%
