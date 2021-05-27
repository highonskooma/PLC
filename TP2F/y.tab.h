/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT = 258,                     /* INT  */
    OPEN = 259,                    /* OPEN  */
    CLOSE = 260,                   /* CLOSE  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    QUAD = 263,                    /* QUAD  */
    DIF = 264,                     /* DIF  */
    WHILE = 265,                   /* WHILE  */
    DO = 266,                      /* DO  */
    PROD = 267,                    /* PROD  */
    SCAN = 268,                    /* SCAN  */
    SCANE = 269,                   /* SCANE  */
    SCANB = 270,                   /* SCANB  */
    POTENCIA = 271,                /* POTENCIA  */
    PRINT = 272,                   /* PRINT  */
    PRINTM = 273,                  /* PRINTM  */
    NUM = 274,                     /* NUM  */
    ID = 275,                      /* ID  */
    E = 276,                       /* E  */
    OU = 277,                      /* OU  */
    EQ = 278,                      /* EQ  */
    LE = 279,                      /* LE  */
    GE = 280,                      /* GE  */
    TRUE = 281,                    /* TRUE  */
    FALSE = 282,                   /* FALSE  */
    DIV = 283,                     /* DIV  */
    END = 284                      /* END  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define OPEN 259
#define CLOSE 260
#define IF 261
#define ELSE 262
#define QUAD 263
#define DIF 264
#define WHILE 265
#define DO 266
#define PROD 267
#define SCAN 268
#define SCANE 269
#define SCANB 270
#define POTENCIA 271
#define PRINT 272
#define PRINTM 273
#define NUM 274
#define ID 275
#define E 276
#define OU 277
#define EQ 278
#define LE 279
#define GE 280
#define TRUE 281
#define FALSE 282
#define DIV 283
#define END 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "parse.y"
 int valN; char valC; char *string; 

#line 127 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
