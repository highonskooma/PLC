/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

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

#line 85 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 198 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_OPEN = 4,                       /* OPEN  */
  YYSYMBOL_CLOSE = 5,                      /* CLOSE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_QUAD = 8,                       /* QUAD  */
  YYSYMBOL_DIF = 9,                        /* DIF  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_PROD = 12,                      /* PROD  */
  YYSYMBOL_SCAN = 13,                      /* SCAN  */
  YYSYMBOL_SCANE = 14,                     /* SCANE  */
  YYSYMBOL_SCANB = 15,                     /* SCANB  */
  YYSYMBOL_POTENCIA = 16,                  /* POTENCIA  */
  YYSYMBOL_PRINT = 17,                     /* PRINT  */
  YYSYMBOL_PRINTM = 18,                    /* PRINTM  */
  YYSYMBOL_NUM = 19,                       /* NUM  */
  YYSYMBOL_ID = 20,                        /* ID  */
  YYSYMBOL_E = 21,                         /* E  */
  YYSYMBOL_OU = 22,                        /* OU  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_GE = 25,                        /* GE  */
  YYSYMBOL_TRUE = 26,                      /* TRUE  */
  YYSYMBOL_FALSE = 27,                     /* FALSE  */
  YYSYMBOL_DIV = 28,                       /* DIV  */
  YYSYMBOL_END = 29,                       /* END  */
  YYSYMBOL_30_n_ = 30,                     /* '\n'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* ','  */
  YYSYMBOL_34_ = 34,                       /* '='  */
  YYSYMBOL_35_ = 35,                       /* '<'  */
  YYSYMBOL_36_ = 36,                       /* '>'  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Cmds = 42,                      /* Cmds  */
  YYSYMBOL_Cmd = 43,                       /* Cmd  */
  YYSYMBOL_print = 44,                     /* print  */
  YYSYMBOL_printM = 45,                    /* printM  */
  YYSYMBOL_potencia = 46,                  /* potencia  */
  YYSYMBOL_scan = 47,                      /* scan  */
  YYSYMBOL_scanbase = 48,                  /* scanbase  */
  YYSYMBOL_scanexp = 49,                   /* scanexp  */
  YYSYMBOL_prod = 50,                      /* prod  */
  YYSYMBOL_while = 51,                     /* while  */
  YYSYMBOL_ifelse = 52,                    /* ifelse  */
  YYSYMBOL_quad = 53,                      /* quad  */
  YYSYMBOL_decl = 54,                      /* decl  */
  YYSYMBOL_atribs = 55,                    /* atribs  */
  YYSYMBOL_atrib = 56,                     /* atrib  */
  YYSYMBOL_ExprR = 57,                     /* ExprR  */
  YYSYMBOL_Expr = 58,                      /* Expr  */
  YYSYMBOL_Termo = 59,                     /* Termo  */
  YYSYMBOL_Fator = 60                      /* Fator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      31,    32,    39,    37,    33,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    34,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    74,    77,    80,    83,    86,    89,    92,
      94,    95,    96,    97,   101,   102,   105,   108,   109,   112,
     113,   114,   115,   116,   117,   118,   121,   124,   125,   126,
     127,   128,   129,   130,   133,   134,   135,   136,   139,   140,
     141,   144,   145,   146,   147,   148,   151,   152,   153,   155,
     156,   157
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "OPEN", "CLOSE",
  "IF", "ELSE", "QUAD", "DIF", "WHILE", "DO", "PROD", "SCAN", "SCANE",
  "SCANB", "POTENCIA", "PRINT", "PRINTM", "NUM", "ID", "E", "OU", "EQ",
  "LE", "GE", "TRUE", "FALSE", "DIV", "END", "'\\n'", "'('", "')'", "','",
  "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "$accept", "Cmds",
  "Cmd", "print", "printM", "potencia", "scan", "scanbase", "scanexp",
  "prod", "while", "ifelse", "quad", "decl", "atribs", "atrib", "ExprR",
  "Expr", "Termo", "Fator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      10,    40,    41,    44,    61,    60,    62,    43,    45,    42,
      47
};
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      48,    29,   -25,    22,    40,    56,    63,    68,    77,    82,
      87,    99,    53,    16,  -108,  -108,   -15,   114,    21,  -108,
    -108,  -108,  -108,    95,   111,   112,  -108,   113,   115,  -108,
    -108,   116,   119,    60,   -14,  -108,   120,   -15,   124,   -15,
     131,   132,   133,   142,   134,   135,   136,    26,   117,   -15,
     137,   138,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,    90,    90,    90,  -108,   139,   130,   140,   141,   143,
     144,   145,   148,  -108,  -108,  -108,  -108,  -108,  -108,   150,
    -108,    35,   -14,    35,    35,    35,    35,    35,   -14,   -14,
    -108,  -108,  -108,  -108,  -108,   153,   149,   163,   176,  -108,
    -108,  -108,  -108,  -108,   177,   151,   178,   155,   109,   166,
      94,   173,   154,   157,  -108,  -108,    50,  -108,   156,   109,
      71,   160,   185,   186,    -3,  -108,   172,    72,  -108,   100,
     189,  -108,   191,  -108,  -108,   164,  -108,   106,  -108,  -108,
     109,   193,  -108,    73,   168,  -108,   185,   169,   195,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    68,    69,    70,     0,     0,     0,     2,
      20,    21,    19,     9,    13,    11,     7,    15,    17,     8,
       4,     5,     0,    47,    54,    58,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,    67,     1,     3,    10,    14,    12,    16,    18,
       6,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    61,    62,    63,    64,     0,
      71,    53,    57,    52,    49,    51,    48,    50,    55,    56,
      66,    68,    65,    59,    60,     0,     0,     0,     0,    26,
      28,    27,    25,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,     0,    43,     0,     0,
       0,     0,     0,    35,     0,    39,     0,     0,    30,     0,
       0,    42,     0,    41,    40,     0,    31,     0,    32,    29,
       0,     0,    33,     0,     0,    34,     0,     0,     0,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,   183,  -108,  -108,  -108,    10,  -108,  -108,  -108,
       2,     0,  -108,  -108,  -107,     1,    -7,    93,   -55,    17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,   123,    24,    25,    26,
     124,   125,    29,    30,   126,   127,    32,    33,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    31,    27,     2,    12,    50,    37,    71,    92,    51,
      23,    14,    15,   130,    98,    99,    16,   122,    28,    31,
      27,    53,   137,    17,     1,    72,    73,     2,    23,     3,
      75,     4,    77,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    89,   153,    48,    85,    86,    14,    15,    36,
      49,     1,    16,    38,     2,   133,     3,    63,     4,    17,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    62,
     122,    39,    69,    70,    14,    15,   138,   146,   155,    16,
     134,    47,    63,    64,    65,    66,    17,    40,   102,   103,
     104,   122,   122,   122,    41,    67,    68,    69,    70,    42,
       2,   139,   147,   134,     4,   148,     2,     6,    43,   100,
     101,   152,     2,    44,   122,     2,    14,    15,    45,     4,
     122,    16,     6,   131,   129,    55,   122,   135,    17,   122,
      46,   135,   141,    52,   143,   144,    87,    88,   135,   143,
     144,    56,    57,    58,    76,    59,    60,   143,   144,    61,
      74,    78,    79,    80,   135,    91,   157,    93,    94,    95,
      96,    97,    81,   106,   114,    48,    82,    83,    84,   115,
      90,   105,   107,   108,   116,   109,   110,   111,   112,   113,
     117,   118,   120,     4,   119,   121,   128,   132,    49,   136,
     140,     2,   145,   142,   149,   150,   151,   154,   156,   158,
     159,    54
};

static const yytype_uint8 yycheck[] =
{
       0,     0,     0,     6,    19,    20,    31,    21,    63,    16,
       0,    26,    27,   120,    69,    70,    31,    20,    18,    18,
      18,     0,   129,    38,     3,    39,    40,     6,    18,     8,
      37,    10,    39,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    49,   150,    28,    19,    20,    26,    27,    20,
      34,     3,    31,    31,     6,     5,     8,    22,    10,    38,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     9,
      20,    31,    37,    38,    26,    27,     5,     5,     5,    31,
      30,    28,    22,    23,    24,    25,    38,    31,    71,    72,
      73,    20,    20,    20,    31,    35,    36,    37,    38,    31,
       6,    30,    30,    30,    10,     5,     6,    13,    31,    19,
      20,     5,     6,    31,    20,     6,    26,    27,    31,    10,
      20,    31,    13,   121,    30,    30,    20,   126,    38,    20,
      31,   130,   132,    19,   134,   134,    19,    20,   137,   139,
     139,    30,    30,    30,    20,    30,    30,   147,   147,    30,
      30,    20,    20,    20,   153,    62,   156,    64,    65,    66,
      67,    68,    20,    33,    11,    28,    32,    32,    32,    20,
      32,    32,    32,    32,    11,    32,    32,    32,    30,    29,
       4,     4,     4,    10,    33,    30,    20,    30,    34,    33,
      30,     6,    20,     7,     5,     4,    32,     4,    30,    30,
       5,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     8,    10,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    26,    27,    31,    38,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    56,    57,    58,    59,    60,    20,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    28,    28,    34,
      20,    57,    19,     0,    43,    30,    30,    30,    30,    30,
      30,    30,     9,    22,    23,    24,    25,    35,    36,    37,
      38,    21,    39,    40,    30,    57,    20,    57,    20,    20,
      20,    20,    32,    32,    32,    19,    20,    19,    20,    57,
      32,    58,    59,    58,    58,    58,    58,    58,    59,    59,
      19,    20,    60,    60,    60,    32,    33,    32,    32,    32,
      32,    32,    30,    29,    11,    20,    11,     4,     4,    33,
       4,    30,    20,    47,    51,    52,    55,    56,    20,    30,
      55,    51,    30,     5,    30,    56,    33,    55,     5,    30,
      30,    52,     7,    52,    56,    20,     5,    30,     5,     5,
       4,    32,     5,    55,     4,     5,    30,    52,    30,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    51,    51,    51,    52,    52,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     1,     1,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     2,     3,     3,     4,     4,     4,     4,     9,
       8,     9,     9,    10,    12,     8,    15,     3,     2,     2,
       3,     3,     3,     1,     1,     1,     4,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     1,     1,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Cmds: Cmd  */
#line 49 "parse.y"
                        { fprintf(txt,"%s",(yyvsp[0].string)); }
#line 1337 "y.tab.c"
    break;

  case 3: /* Cmds: Cmds Cmd  */
#line 50 "parse.y"
                        { fprintf(txt,"%s",(yyvsp[0].string)); }
#line 1343 "y.tab.c"
    break;

  case 22: /* Cmd: ExprR '\n'  */
#line 71 "parse.y"
                   { if (!error) {asprintf(&(yyval.string),"%s",(yyvsp[-1].string));};error=0; }
#line 1349 "y.tab.c"
    break;

  case 23: /* print: PRINT '(' ')'  */
#line 74 "parse.y"
                                   { asprintf(&(yyval.string),"pushs \"a potência é \"\nwrites\nwritei\npushs \"\\n\"\nwrites\n"); }
#line 1355 "y.tab.c"
    break;

  case 24: /* printM: PRINTM '(' ')'  */
#line 77 "parse.y"
                                   { asprintf(&(yyval.string),"pushs \"o menor inteiro é \"\nwrites\npushg 0\nwritei\npushs \"\\n\"\nwrites\n"); }
#line 1361 "y.tab.c"
    break;

  case 25: /* potencia: POTENCIA '(' ')' '\n'  */
#line 80 "parse.y"
                                   { system("./lex < potencia.txt");  }
#line 1367 "y.tab.c"
    break;

  case 26: /* scan: SCAN '(' ID ')'  */
#line 83 "parse.y"
                                   { asprintf(&(yyval.string),"pushs \"escolha um inteiro \"\nwrites\nread\natoi\nstoreg %d\n",TabId[(yyvsp[-1].valC)-'A']); }
#line 1373 "y.tab.c"
    break;

  case 27: /* scanbase: SCANB '(' ID ')'  */
#line 86 "parse.y"
                                   { asprintf(&(yyval.string),"pushs \"escolha um inteiro base \"\nwrites\nread\natoi\nstoreg %d\n",TabId[(yyvsp[-1].valC)-'A']); }
#line 1379 "y.tab.c"
    break;

  case 28: /* scanexp: SCANE '(' ID ')'  */
#line 89 "parse.y"
                                   { asprintf(&(yyval.string),"pushs \"escolha um inteiro expoente \"\nwrites\nread\natoi\nstoreg %d\n",TabId[(yyvsp[-1].valC)-'A']); }
#line 1385 "y.tab.c"
    break;

  case 29: /* prod: PROD '(' ID ')' OPEN '\n' while '\n' CLOSE  */
#line 92 "parse.y"
                                                     { asprintf(&(yyval.string),"%s\npushs \"o produtório é: \"writes\n\nstri\nwrites\npushs \"\\n\"\nwrites\n",(yyvsp[-2].string)); }
#line 1391 "y.tab.c"
    break;

  case 30: /* while: WHILE '(' ExprR ')' DO OPEN atribs CLOSE  */
#line 94 "parse.y"
                                                            { asprintf(&(yyval.string),"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",(yyvsp[-5].string),(yyvsp[-1].string)); }
#line 1397 "y.tab.c"
    break;

  case 31: /* while: WHILE '(' ExprR ')' DO OPEN '\n' atribs CLOSE  */
#line 95 "parse.y"
                                                            { asprintf(&(yyval.string),"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",(yyvsp[-6].string),(yyvsp[-1].string)); }
#line 1403 "y.tab.c"
    break;

  case 32: /* while: WHILE '(' ExprR ')' DO OPEN atribs '\n' CLOSE  */
#line 96 "parse.y"
                                                            { asprintf(&(yyval.string),"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",(yyvsp[-6].string),(yyvsp[-2].string)); }
#line 1409 "y.tab.c"
    break;

  case 33: /* while: WHILE '(' ExprR ')' DO OPEN '\n' atribs '\n' CLOSE  */
#line 97 "parse.y"
                                                            { asprintf(&(yyval.string),"inicio: \n%s \njz IF0 \n%s \njump inicio \nIF0: \n",(yyvsp[-7].string),(yyvsp[-2].string)); }
#line 1415 "y.tab.c"
    break;

  case 34: /* ifelse: IF '(' ExprR ')' DO OPEN atribs CLOSE ELSE OPEN atribs CLOSE  */
#line 101 "parse.y"
                                                                        { asprintf(&(yyval.string),"%s \njz ELSE \n%s\n jump FIM \n ELSE:\n %s\n FIM:",(yyvsp[-9].string),(yyvsp[-5].string),(yyvsp[-1].string)); }
#line 1421 "y.tab.c"
    break;

  case 35: /* ifelse: IF '(' ExprR ')' DO OPEN atribs CLOSE  */
#line 102 "parse.y"
                                                                        { asprintf(&(yyval.string),"%s \njz FIM \n%s\nFIM:",(yyvsp[-5].string),(yyvsp[-1].string)); }
#line 1427 "y.tab.c"
    break;

  case 36: /* quad: QUAD '(' ID ',' ID ',' ID ',' ID ')' OPEN '\n' ifelse '\n' CLOSE  */
#line 105 "parse.y"
                                                                        { asprintf(&(yyval.string),"%s \njz ENTAO \npushs \"pode ser quadrado\\n\" \nwrites \njump END \nENTAO: \npushs \"não pode ser quadrado\\n\" \nwrites \nEND: \n",(yyvsp[-2].string));}
#line 1433 "y.tab.c"
    break;

  case 37: /* decl: INT ID '\n'  */
#line 108 "parse.y"
                                 { TabId[(yyvsp[-1].valC)-'A']=pc; pc++; asprintf(&(yyval.string),"pushi %d\n",0); }
#line 1439 "y.tab.c"
    break;

  case 38: /* decl: INT ID  */
#line 109 "parse.y"
                                 { TabId[(yyvsp[0].valC)-'A']=pc; pc++; asprintf(&(yyval.string),"pushi %d\n",0); }
#line 1445 "y.tab.c"
    break;

  case 39: /* atribs: atribs atrib  */
#line 112 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\n",(yyvsp[-1].string),(yyvsp[0].string)); }
#line 1451 "y.tab.c"
    break;

  case 40: /* atribs: atribs '\n' atrib  */
#line 113 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\n",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1457 "y.tab.c"
    break;

  case 41: /* atribs: atribs '\n' ifelse  */
#line 114 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\n",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1463 "y.tab.c"
    break;

  case 42: /* atribs: scan '\n' ifelse  */
#line 115 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\n",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1469 "y.tab.c"
    break;

  case 46: /* atrib: ID '=' ExprR END  */
#line 121 "parse.y"
                                 { asprintf(&(yyval.string),"%s\nstoreg %d\n",(yyvsp[-1].string),TabId[(yyvsp[-3].valC)-'A']); }
#line 1475 "y.tab.c"
    break;

  case 47: /* ExprR: Expr  */
#line 124 "parse.y"
                                 { asprintf(&(yyval.string),"%s",(yyvsp[0].string)); }
#line 1481 "y.tab.c"
    break;

  case 48: /* ExprR: Expr '<' Expr  */
#line 125 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\ninf",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1487 "y.tab.c"
    break;

  case 49: /* ExprR: Expr LE Expr  */
#line 126 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\ninfeq",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1493 "y.tab.c"
    break;

  case 50: /* ExprR: Expr '>' Expr  */
#line 127 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\nsup",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1499 "y.tab.c"
    break;

  case 51: /* ExprR: Expr GE Expr  */
#line 128 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\nsupeq",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1505 "y.tab.c"
    break;

  case 52: /* ExprR: Expr EQ Expr  */
#line 129 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\nequal", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 1511 "y.tab.c"
    break;

  case 53: /* ExprR: Expr DIF Expr  */
#line 130 "parse.y"
                                 { asprintf(&(yyval.string),"%s\n%s\nequal not",(yyvsp[-2].string),(yyvsp[0].string)); }
#line 1517 "y.tab.c"
    break;

  case 54: /* Expr: Termo  */
#line 133 "parse.y"
                                 { asprintf(&(yyval.string),"%s",(yyvsp[0].string)); }
#line 1523 "y.tab.c"
    break;

  case 55: /* Expr: Expr '+' Termo  */
#line 134 "parse.y"
                                 { asprintf(&(yyval.string), "%s\n%s\nadd", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 1529 "y.tab.c"
    break;

  case 56: /* Expr: Expr '-' Termo  */
#line 135 "parse.y"
                                 { asprintf(&(yyval.string), "%s\n%s\nsub", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 1535 "y.tab.c"
    break;

  case 57: /* Expr: Expr OU Termo  */
#line 136 "parse.y"
                                 { asprintf(&(yyval.string), "%s\nnot\n%s\nnot\nmul\nnot\n", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 1541 "y.tab.c"
    break;

  case 58: /* Termo: Fator  */
#line 139 "parse.y"
                                 { asprintf(&(yyval.string),"%s",(yyvsp[0].string)); }
#line 1547 "y.tab.c"
    break;

  case 59: /* Termo: Termo '*' Fator  */
#line 140 "parse.y"
                                 { asprintf(&(yyval.string), "%s\n%s\nmul", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 1553 "y.tab.c"
    break;

  case 60: /* Termo: Termo '/' Fator  */
#line 141 "parse.y"
                                 { if ((yyvsp[0].string)) { asprintf(&(yyval.string), "%s\n%s\ndiv", (yyvsp[-2].string), (yyvsp[0].string)); } 
                                   else { printf("ERRO - divisão por zero >:( \n"); 
                                   (yyval.string)=0; error=1;} }
#line 1561 "y.tab.c"
    break;

  case 61: /* Termo: NUM DIV NUM  */
#line 144 "parse.y"
                                 { asprintf(&(yyval.string),"pushi %d\nitof\npushi %d\nitof\nfdiv",(yyvsp[-2].valN),(yyvsp[0].valN)); }
#line 1567 "y.tab.c"
    break;

  case 62: /* Termo: NUM DIV ID  */
#line 145 "parse.y"
                                 { asprintf(&(yyval.string),"pushi %d\nitof\npushg %d\nitof\nfdiv",(yyvsp[-2].valN),TabId[(yyvsp[0].valC)-'A']); }
#line 1573 "y.tab.c"
    break;

  case 63: /* Termo: ID DIV NUM  */
#line 146 "parse.y"
                                 { asprintf(&(yyval.string),"pushg %d\nitof\npushi %d\nitof\nfdiv",TabId[(yyvsp[-2].valC)-'A'],(yyvsp[0].valN)); }
#line 1579 "y.tab.c"
    break;

  case 64: /* Termo: ID DIV ID  */
#line 147 "parse.y"
                                 { asprintf(&(yyval.string),"pushg %d\nitof\npushg %d\nitof\nfdiv",TabId[(yyvsp[-2].valC)-'A'],TabId[(yyvsp[0].valC)-'A']); }
#line 1585 "y.tab.c"
    break;

  case 65: /* Termo: Termo E Fator  */
#line 148 "parse.y"
                                 { asprintf(&(yyval.string), "%s\n%s\nmul", (yyvsp[-2].string), (yyvsp[0].string)); }
#line 1591 "y.tab.c"
    break;

  case 66: /* Fator: NUM  */
#line 151 "parse.y"
                                 { asprintf(&(yyval.string),"pushi %d", (yyvsp[0].valN)); }
#line 1597 "y.tab.c"
    break;

  case 67: /* Fator: '-' NUM  */
#line 152 "parse.y"
                                 { asprintf(&(yyval.string),"pushi %d",-1*(yyvsp[0].valN)); }
#line 1603 "y.tab.c"
    break;

  case 68: /* Fator: ID  */
#line 153 "parse.y"
                                 { if(!error) { asprintf(&(yyval.string),"pushg %d\n", TabId[(yyvsp[0].valC)-'A'] ); }       
                                   else { printf("ERRO Semantico - ID de Variável Desconhecido :(\n"); }}
#line 1610 "y.tab.c"
    break;

  case 69: /* Fator: TRUE  */
#line 155 "parse.y"
                                 { asprintf(&(yyval.string),"pushi %d",1); }
#line 1616 "y.tab.c"
    break;

  case 70: /* Fator: FALSE  */
#line 156 "parse.y"
                                 { asprintf(&(yyval.string),"pushi %d",0); }
#line 1622 "y.tab.c"
    break;

  case 71: /* Fator: '(' ExprR ')'  */
#line 157 "parse.y"
                                 { asprintf(&(yyval.string),"%s", (yyvsp[-1].string)); }
#line 1628 "y.tab.c"
    break;


#line 1632 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 160 "parse.y"


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

