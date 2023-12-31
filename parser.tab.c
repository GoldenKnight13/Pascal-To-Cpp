
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */



#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>
#pragma warning(disable: 4996 4013 4244 4267)

#include"unistd.h"
#include"getopt.h"

extern FILE* yyin;
extern int yylex();


void yyerror(char* code) {
   printf("Error %s\n", code);
   exit(1); /* Sale del programa */
}

int line = 1;




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     FUNCTION = 259,
     PROCEDURE = 260,
     BEGIN_TOKEN = 261,
     END = 262,
     VAR = 263,
     TOKEN_CONST = 264,
     TOKEN_INTEGER = 265,
     REAL = 266,
     TOKEN_CHAR = 267,
     TOKEN_STRING = 268,
     TOKEN_BOOLEAN = 269,
     ARRAY = 270,
     OF = 271,
     AND = 272,
     OR = 273,
     NOT = 274,
     PLUS = 275,
     MINUS = 276,
     MULTIPLICATION = 277,
     DIVISION = 278,
     DIV = 279,
     MOD = 280,
     EXP = 281,
     WHILE = 282,
     DO = 283,
     FOR = 284,
     TO = 285,
     DOWNTO = 286,
     READ = 287,
     WRITE = 288,
     READLN = 289,
     WRITELN = 290,
     IF = 291,
     THEN = 292,
     ELSE = 293,
     ASSIGN = 294,
     L_PARENT = 295,
     R_PARENT = 296,
     L_S_BRACKET = 297,
     R_S_BRACKET = 298,
     SEMICOLON = 299,
     DOT = 300,
     COMMA = 301,
     COLON = 302,
     EQUAL = 303,
     MONEY_SIGN = 304,
     AMPERSAND = 305,
     PERCENTAGE = 306,
     L_BRACKET = 307,
     R_BRACKET = 308,
     LESS = 309,
     GREATER = 310,
     GATITO = 311,
     QUOTATION_MARK = 312,
     NOT_EQUAL = 313,
     DOUBLE_DOT = 314,
     OPEN_COMMENT = 315,
     CLOSE_COMMENT = 316,
     LETRA = 317,
     DIGITO_NO_CERO = 318,
     CERO = 319
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


	char* str;
	int num;



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    15,    17,    20,    23,    26,    27,    29,
      31,    33,    35,    37,    39,    41,    43,    45,    47,    49,
      51,    53,    57,    59,    61,    62,    70,    71,    72,    80,
      81,    89,    90,    98,    99,   101,   110,   112,   114,   116,
     118,   120,   124,   125,   130,   131,   139,   140,   146,   150,
     151,   155,   161,   165,   167,   168,   170,   174,   176,   178,
     180,   182,   184,   186,   188,   193,   200,   207,   212,   217,
     224,   231,   236,   241,   248,   255,   260,   265,   269,   272,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   320,   327,   331,   333,   335,   337,   342,   344,
     349,   353,   355,   359,   361,   364,   366,   370,   372,   376,
     378,   380,   384,   386,   390,   392,   396,   401,   403,   408,
     410,   412,   414,   417,   421,   423,   425,   426,   429,   432,
     435,   436,   441,   447,   451,   455,   456,   459,   461,   462,
     465,   467,   469,   471,   473,   475,   477,   479,   481,   483,
     485,   487,   489,   491,   493,   495,   497,   499,   501,   503,
     505,   507,   509,   511,   513,   515,   517,   519,   521,   523,
     525,   527,   529,   533,   537,   541,   545,   550,   555,   557
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,   122,     3,    67,    40,    74,    41,   124,
      75,    84,    91,    45,    -1,    69,    -1,    69,    68,    -1,
      69,    68,    -1,    70,    68,    -1,    -1,    62,    -1,    26,
      -1,    63,    -1,    64,    -1,    17,    -1,    18,    -1,    20,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    67,    -1,    74,    46,    67,    -1,    76,    -1,    78,
      -1,    -1,    76,     8,    74,    47,    82,    77,   124,    -1,
      -1,    -1,    78,     9,    67,    48,   117,    79,   124,    -1,
      -1,    78,     9,    67,    48,   120,    80,   124,    -1,    -1,
      78,     9,    67,    48,    98,    81,   124,    -1,    -1,    83,
      -1,    15,    42,   118,    59,   118,    43,    16,    83,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      84,    85,   124,    -1,    -1,    86,    75,    84,    91,    -1,
      -1,     4,    67,    89,    47,    83,    87,   124,    -1,    -1,
       5,    67,    89,    88,   124,    -1,    40,    90,    41,    -1,
      -1,    74,    47,    82,    -1,    90,    44,    74,    47,    82,
      -1,     6,    92,     7,    -1,    93,    -1,    -1,    94,    -1,
      93,   124,    94,    -1,   102,    -1,   105,    -1,    91,    -1,
     101,    -1,    95,    -1,    96,    -1,    97,    -1,    27,   106,
      28,    94,    -1,    29,   103,    30,   112,    28,    94,    -1,
      29,   103,    31,   112,    28,    94,    -1,    32,    40,    67,
      41,    -1,    34,    40,    67,    41,    -1,    33,    40,    98,
      46,    67,    41,    -1,    35,    40,    98,    46,    67,    41,
      -1,    33,    40,    98,    41,    -1,    35,    40,    98,    41,
      -1,    33,    40,    98,    46,   112,    41,    -1,    35,    40,
      98,    46,   112,    41,    -1,    33,    40,    67,    41,    -1,
      35,    40,    67,    41,    -1,    57,    99,    57,    -1,    99,
     100,    -1,    -1,    69,    -1,    70,    -1,    49,    -1,    50,
      -1,    23,    -1,    20,    -1,    21,    -1,    22,    -1,    51,
      -1,    48,    -1,    47,    -1,    52,    -1,    53,    -1,    55,
      -1,    54,    -1,   124,    -1,    42,    -1,    43,    -1,    46,
      -1,    45,    -1,    56,    -1,    36,   106,    37,    94,    -1,
      36,   106,    37,    94,    38,    94,    -1,   104,    39,   112,
      -1,   102,    -1,   104,    -1,    67,    -1,    67,    42,   112,
      43,    -1,    67,    -1,    67,    40,   111,    41,    -1,   106,
      18,   107,    -1,   107,    -1,   107,    17,   108,    -1,   108,
      -1,    19,   108,    -1,   109,    -1,    40,   106,    41,    -1,
     110,    -1,   112,    71,   112,    -1,   126,    -1,   112,    -1,
     111,    46,   112,    -1,   113,    -1,   112,    72,   113,    -1,
     115,    -1,   113,    73,   115,    -1,    67,    40,   111,    41,
      -1,    67,    -1,    67,    42,   112,    43,    -1,   114,    -1,
     117,    -1,   120,    -1,   116,   115,    -1,    40,   112,    41,
      -1,    20,    -1,    21,    -1,    -1,   116,   118,    -1,    63,
     119,    -1,   119,    70,    -1,    -1,   116,   118,    45,   118,
      -1,   116,   118,    45,   118,   121,    -1,    26,   116,   118,
      -1,    60,   123,    61,    -1,    -1,   125,   123,    -1,   125,
      -1,    -1,    44,   122,    -1,   100,    -1,     3,    -1,     4,
      -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    24,    -1,    25,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    67,
      48,   127,    -1,    67,    55,   127,    -1,    67,    54,   127,
      -1,    67,    58,   127,    -1,    67,    55,    48,   127,    -1,
      67,    54,    48,   127,    -1,    67,    -1,   116,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    66,    67,    75,    81,    89,    96,   101,
     108,   109,   112,   113,   116,   117,   120,   121,   122,   123,
     126,   127,   136,   137,   140,   140,   143,   146,   146,   149,
     149,   152,   152,   155,   158,   159,   162,   163,   164,   165,
     166,   169,   170,   173,   176,   176,   179,   179,   184,   185,
     188,   189,   192,   195,   196,   199,   200,   203,   204,   205,
     206,   207,   208,   209,   212,   213,   214,   217,   218,   221,
     222,   223,   224,   225,   226,   227,   228,   231,   234,   235,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   261,   262,   265,   268,   269,   272,   273,   276,   277,
     280,   281,   284,   285,   288,   289,   292,   293,   296,   297,
     300,   301,   304,   305,   308,   309,   312,   315,   316,   317,
     318,   319,   320,   321,   324,   325,   326,   329,   332,   335,
     336,   339,   340,   343,   346,   347,   350,   351,   352,   355,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   392,   393,   394,   395,   396,   397,   400,   401
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "FUNCTION", "PROCEDURE",
  "BEGIN_TOKEN", "END", "VAR", "TOKEN_CONST", "TOKEN_INTEGER", "REAL",
  "TOKEN_CHAR", "TOKEN_STRING", "TOKEN_BOOLEAN", "ARRAY", "OF", "AND",
  "OR", "NOT", "PLUS", "MINUS", "MULTIPLICATION", "DIVISION", "DIV", "MOD",
  "EXP", "WHILE", "DO", "FOR", "TO", "DOWNTO", "READ", "WRITE", "READLN",
  "WRITELN", "IF", "THEN", "ELSE", "ASSIGN", "L_PARENT", "R_PARENT",
  "L_S_BRACKET", "R_S_BRACKET", "SEMICOLON", "DOT", "COMMA", "COLON",
  "EQUAL", "MONEY_SIGN", "AMPERSAND", "PERCENTAGE", "L_BRACKET",
  "R_BRACKET", "LESS", "GREATER", "GATITO", "QUOTATION_MARK", "NOT_EQUAL",
  "DOUBLE_DOT", "OPEN_COMMENT", "CLOSE_COMMENT", "LETRA", "DIGITO_NO_CERO",
  "CERO", "$accept", "programa", "identificador",
  "identificador_siguiente", "letra", "digito", "relop", "addop", "mulop",
  "identificador_lista", "declaraciones", "declaraciones_variables", "$@1",
  "declaraciones_constantes", "$@2", "$@3", "$@4", "tipo", "estandar_tipo",
  "subprograma_declaraciones", "subprograma_declaracion",
  "subprograma_encabezado", "$@5", "$@6", "argumentos", "parametros_lista",
  "instruccion_compuesta", "instrucciones_opcionales",
  "instrucciones_lista", "instrucciones", "repeticion_instruccion",
  "lectura_instruccion", "escritura_instruccion", "constante_cadena",
  "cadena", "caracter_alfanumerico", "if_instruccion",
  "variable_asignacion", "for_asignacion", "variable",
  "procedure_instruccion", "relop_expresion", "relop_and", "relop_not",
  "relop_paren", "relop_expresion_simple", "expresion_lista", "expresion",
  "termino", "llamado_funcion", "factor", "signo", "constante_entera",
  "numero_entero", "numero", "constante_real", "exponente", "comentario",
  "contenido", "cambio_linea", "tokens_disponibles", "comparacion",
  "expresion_comparador", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    75,    75,    77,    76,    76,    79,    78,    80,
      78,    81,    78,    78,    82,    82,    83,    83,    83,    83,
      83,    84,    84,    85,    87,    86,    88,    86,    89,    89,
      90,    90,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   101,   101,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   117,   118,   119,
     119,   120,   120,   121,   122,   122,   123,   123,   123,   124,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   126,   126,   126,   126,   126,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     1,     2,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     0,     7,     0,     0,     7,     0,
       7,     0,     7,     0,     1,     8,     1,     1,     1,     1,
       1,     3,     0,     4,     0,     7,     0,     5,     3,     0,
       3,     5,     3,     1,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     6,     4,     4,     6,
       6,     4,     4,     6,     6,     4,     4,     3,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     6,     3,     1,     1,     1,     4,     1,     4,
       3,     1,     3,     1,     2,     1,     3,     1,     3,     1,
       1,     3,     1,     3,     1,     3,     4,     1,     4,     1,
       1,     1,     2,     3,     1,     1,     0,     2,     2,     2,
       0,     4,     5,     3,     3,     0,     2,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     4,     4,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     145,   148,     0,     0,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,    85,    86,    87,    84,   168,   169,     9,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
      96,    97,   145,    99,    98,    90,    89,    82,    83,    88,
      91,    92,    94,    93,   100,     8,    10,    11,    80,    81,
     150,     0,    95,   147,     1,     0,   149,   144,   146,     0,
       3,     0,     4,     7,     7,    20,     0,     5,     6,     0,
       0,    26,    21,    42,    22,    23,     0,     0,     0,     0,
       0,    54,     0,    26,     0,     0,     0,    49,    49,   136,
       0,     0,     0,     0,     0,   136,   108,    59,     0,    53,
      55,    61,    62,    63,    60,    57,     0,    58,    41,    42,
       2,     0,   136,     0,     0,    46,   136,   134,   135,   136,
     127,     0,   111,   113,   115,   117,     0,   122,   129,   124,
       0,   130,   131,   119,   106,   104,     0,   105,     0,     0,
       0,     0,     0,   136,   136,    52,     0,   136,     0,    36,
      37,    38,    39,    40,     0,    24,    34,    79,    31,     0,
      27,    29,     0,     0,     0,     0,   114,     0,     0,   136,
     136,   136,   136,   136,   136,   136,     0,   136,    12,    13,
      14,    15,   136,   136,    16,    17,    18,    19,   136,   136,
     140,   127,   132,   137,   136,   136,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,    56,   103,    43,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    44,    47,
     116,   133,     0,     0,   188,     0,   182,   136,   184,   136,
     183,   185,   110,    64,   112,   118,   123,   125,     0,   138,
       0,     0,     0,    67,    75,    71,   136,    68,    76,    72,
     136,   101,   109,   136,   107,     0,    25,    77,    78,    32,
      28,    30,    50,     0,     0,   126,   128,   189,   187,   186,
     139,   141,     0,     0,   127,     0,   127,     0,     0,   121,
       0,     0,    45,   136,   142,    65,    66,    69,    73,    70,
      74,   102,     0,    51,     0,     0,   143,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   201,    72,    70,    59,   192,   193,   198,    76,
      83,    84,   220,    85,   223,   224,   222,   165,   166,    86,
      92,    93,   274,   175,   124,   173,   107,   108,   109,   110,
     111,   112,   113,   168,   221,    60,   114,   115,   146,   116,
     117,   131,   132,   133,   134,   135,   213,   136,   137,   138,
     139,   140,   141,   203,   249,   142,   294,     3,    61,    62,
      63,   143,   236
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -221
static const yytype_int16 yypact[] =
{
     -46,   237,    21,    44,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,   -46,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,     1,  -221,   237,  -221,    13,  -221,  -221,  -221,    40,
      63,    13,  -221,    63,    63,  -221,   100,  -221,  -221,    50,
      13,    89,  -221,  -221,    98,   160,   210,    13,    13,    13,
      13,   131,    50,    89,   114,   -19,   144,   161,   161,    10,
      13,   171,   191,   193,   197,    10,   280,  -221,   336,    50,
    -221,  -221,  -221,  -221,  -221,  -221,   308,  -221,  -221,  -221,
    -221,   299,    -2,    13,   309,  -221,    10,  -221,  -221,    10,
     180,    86,   340,  -221,  -221,  -221,   209,   293,  -221,  -221,
     150,  -221,  -221,  -221,   316,  -221,   113,   308,    13,    30,
      13,    30,    91,    28,    28,  -221,   131,    28,   210,  -221,
    -221,  -221,  -221,  -221,   317,  -221,  -221,  -221,  -221,   297,
    -221,  -221,   260,    71,   284,    50,  -221,    82,   165,    28,
      28,    31,    76,    87,    31,    10,   131,    10,  -221,  -221,
    -221,  -221,    28,    28,  -221,  -221,  -221,  -221,    28,    28,
    -221,   167,  -221,   318,    28,    28,   320,   321,   138,   323,
     324,   148,   131,   162,   204,    39,  -221,   204,  -221,   297,
      50,   282,    50,    50,    50,   299,  -221,    13,  -221,  -221,
    -221,  -221,   164,   157,  -221,   285,  -221,    31,  -221,    31,
    -221,  -221,   340,  -221,  -221,   204,   293,  -221,    12,   285,
     297,   133,   176,  -221,  -221,  -221,    28,  -221,  -221,  -221,
      28,   328,  -221,    28,  -221,   310,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,   304,    50,  -221,  -221,  -221,  -221,  -221,
    -221,   341,   131,   131,   236,    90,   300,   178,   131,   204,
     297,   299,  -221,   332,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,   325,  -221,   297,   354,  -221,   284,  -221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   -65,   281,     0,   -62,  -221,  -221,  -221,   -85,
     278,  -221,  -221,  -221,  -221,  -221,  -221,  -220,  -171,   253,
    -221,  -221,  -221,  -221,   275,  -221,   -70,  -221,  -221,  -143,
    -221,  -221,  -221,   172,  -221,   153,  -221,   276,  -221,   277,
    -221,   -63,   190,  -122,  -221,  -221,   199,   -24,   186,  -221,
    -131,  -105,   258,  -209,  -221,   259,  -221,   342,   319,   -72,
    -221,  -221,  -138
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -107
static const yytype_int16 yytable[] =
{
      69,    58,    95,   228,   176,   272,    75,    81,    74,   202,
     265,    74,    74,   216,     1,    82,    94,   169,   127,   128,
     118,    64,    75,    96,    97,    98,   106,    80,   121,   126,
     127,   128,   190,   191,   130,   144,    27,   156,   172,    27,
     130,   281,   152,   243,   238,   240,   241,    65,   127,   128,
     129,   127,   128,   231,    27,   167,    27,    27,    75,   190,
     191,   130,    67,    58,   130,   244,   177,   247,   199,   261,
      73,   303,    55,    73,    73,    55,   235,   235,   235,   235,
      71,   302,   264,   206,   207,   209,   210,   167,   218,    27,
      55,   106,    55,    55,    42,   306,   127,   128,   -33,   278,
     185,   279,    27,   229,   185,   178,    87,   127,   128,   185,
     190,   191,   226,    27,   186,   227,   234,   234,   234,   234,
     130,   106,   130,   230,   237,    55,    56,    57,   212,   214,
     215,   298,   235,   217,   235,   239,   308,    91,    55,   295,
     296,    79,   273,   204,   205,   301,    80,   106,   266,    55,
     269,   270,   271,   190,   191,   214,   233,    27,    99,   120,
     100,   282,    75,   101,   102,   103,   104,   105,   245,    88,
     127,   128,   234,   277,   234,   248,    27,   190,   191,   255,
     251,   252,   188,   189,   256,   190,   191,   280,   304,   259,
     199,   284,   122,    55,   260,   286,   190,   191,   190,   191,
     276,   123,   292,   262,   283,   275,   231,   179,   263,   180,
     263,   148,    55,   200,    89,    90,    91,   106,   106,   300,
     179,    58,   180,   106,   190,   191,   188,   189,   181,   190,
     191,   149,   285,   150,   182,   183,   287,   151,   184,   289,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   179,   297,   180,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   159,   160,   161,   162,   163,    55,
      56,    57,    21,    22,    23,    24,    80,   225,    27,   159,
     160,   161,   162,   163,   164,   194,   195,   196,   197,  -106,
     153,   208,   154,   211,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   267,
     179,   299,   180,   155,    55,    56,    57,   157,    56,    57,
      80,   291,   127,   128,    77,    78,   174,   187,   154,   219,
     200,   253,   254,   250,   257,   258,   288,   293,   305,   290,
     307,   119,   158,   125,   268,   242,   145,   147,   232,   246,
     170,   171,    68,     0,    66
};

static const yytype_int16 yycheck[] =
{
      65,     1,    87,   174,   126,   225,    71,    79,    70,   140,
     219,    73,    74,   156,    60,    80,    86,   122,    20,    21,
      92,     0,    87,    88,    89,    90,    91,    46,    47,    19,
      20,    21,    20,    21,    99,   100,    26,   109,   123,    26,
     105,   250,   105,   186,   182,   183,   184,     3,    20,    21,
      40,    20,    21,    41,    26,    57,    26,    26,   123,    20,
      21,   126,    61,    63,   129,   187,   129,   198,    40,   212,
      70,   291,    62,    73,    74,    62,   181,   182,   183,   184,
      40,   290,    43,   148,   149,   150,   151,    57,   158,    26,
      62,   156,    62,    62,    44,   304,    20,    21,     9,   237,
      18,   239,    26,   175,    18,   129,     8,    20,    21,    18,
      20,    21,    41,    26,    28,    44,   181,   182,   183,   184,
     185,   186,   187,    41,    48,    62,    63,    64,    37,   153,
     154,    41,   237,   157,   239,    48,   307,     6,    62,   282,
     283,    41,   227,    30,    31,   288,    46,   212,   220,    62,
     222,   223,   224,    20,    21,   179,   180,    26,    27,    45,
      29,    28,   227,    32,    33,    34,    35,    36,   192,     9,
      20,    21,   237,   235,   239,   199,    26,    20,    21,    41,
     204,   205,    17,    18,    46,    20,    21,   249,   293,    41,
      40,   256,    48,    62,    46,   260,    20,    21,    20,    21,
      43,    40,   274,    41,    28,    41,    41,    40,    46,    42,
      46,    40,    62,    63,     4,     5,     6,   282,   283,    41,
      40,   221,    42,   288,    20,    21,    17,    18,    48,    20,
      21,    40,   256,    40,    54,    55,   260,    40,    58,   263,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    40,    41,    42,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    10,    11,    12,    13,    14,    62,
      63,    64,    20,    21,    22,    23,    46,    47,    26,    10,
      11,    12,    13,    14,    15,    22,    23,    24,    25,    39,
      40,   149,    42,   151,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      40,    41,    42,     7,    62,    63,    64,    39,    63,    64,
      46,    47,    20,    21,    73,    74,    47,    17,    42,    42,
      63,    41,    41,    45,    41,    41,    38,    26,    43,    59,
      16,    93,   119,    98,   221,   185,   100,   100,   179,   193,
     122,   122,    63,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    66,   122,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    62,    63,    64,    69,    70,
     100,   123,   124,   125,     0,     3,   122,    61,   123,    67,
      69,    40,    68,    69,    70,    67,    74,    68,    68,    41,
      46,   124,    67,    75,    76,    78,    84,     8,     9,     4,
       5,     6,    85,    86,    91,    74,    67,    67,    67,    27,
      29,    32,    33,    34,    35,    36,    67,    91,    92,    93,
      94,    95,    96,    97,   101,   102,   104,   105,   124,    75,
      45,    47,    48,    40,    89,    89,    19,    20,    21,    40,
      67,   106,   107,   108,   109,   110,   112,   113,   114,   115,
     116,   117,   120,   126,    67,   102,   103,   104,    40,    40,
      40,    40,   106,    40,    42,     7,   124,    39,    84,    10,
      11,    12,    13,    14,    15,    82,    83,    57,    98,   116,
     117,   120,    74,    90,    47,    88,   108,   106,   112,    40,
      42,    48,    54,    55,    58,    18,    28,    17,    17,    18,
      20,    21,    71,    72,    22,    23,    24,    25,    73,    40,
      63,    67,   115,   118,    30,    31,    67,    67,    98,    67,
      67,    98,    37,   111,   112,   112,    94,   112,    91,    42,
      77,    99,    81,    79,    80,    47,    41,    44,    83,   124,
      41,    41,   111,   112,    67,   116,   127,    48,   127,    48,
     127,   127,   107,    94,   108,   112,   113,   115,   112,   119,
      45,   112,   112,    41,    41,    41,    46,    41,    41,    41,
      46,    94,    41,    46,    43,   118,   124,    57,   100,   124,
     124,   124,    82,    74,    87,    41,    43,    70,   127,   127,
      70,   118,    28,    28,    67,   112,    67,   112,    38,   112,
      59,    47,   124,    26,   121,    94,    94,    41,    41,    41,
      41,    94,   118,    82,   116,    43,   118,    16,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 4:

    {
			char* combine = (char*)malloc( (strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1) * sizeof(char) );
			strcpy(combine, (yyvsp[(1) - (2)].str));
			strcat(combine, (yyvsp[(2) - (2)].str));
			(yyval.str) = combine;
		;}
    break;

  case 5:

    {
					char* combine = (char*)malloc( (strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1) * sizeof(char) );
					strcpy(combine, (yyvsp[(1) - (2)].str));
					strcat(combine, (yyvsp[(2) - (2)].str));
					(yyval.str) = combine;
				;}
    break;

  case 6:

    { 
					char aux [2];
					sprintf(aux, "%d", (yyvsp[(1) - (2)].num));
					char* combine = (char*)malloc( ( strlen(aux) + strlen((yyvsp[(2) - (2)].str)) + 1) * sizeof(char) );
					strcpy(combine, aux);
					strcat(combine, (yyvsp[(2) - (2)].str));
					(yyval.str) = combine; 
				;}
    break;

  case 7:

    { 
					char* combine = (char*)malloc( (strlen("") + 1) * sizeof(char) );
					strcpy(combine, "");
					(yyval.str) = combine;
				;}
    break;

  case 8:

    { 
		char* combine = (char*)malloc( (strlen((yyvsp[(1) - (1)].str)) + 1) * sizeof(char) );
		strcpy(combine, (yyvsp[(1) - (1)].str));
		(yyval.str) = combine;
	;}
    break;

  case 9:

    {
		char* combine = (char*)malloc( (strlen((yyvsp[(1) - (1)].str)) + 1) * sizeof(char) );
		strcpy(combine, (yyvsp[(1) - (1)].str));
		(yyval.str) = combine;
	;}
    break;

  case 10:

    { (yyval.num) = (yyvsp[(1) - (1)].num); ;}
    break;

  case 11:

    { (yyval.num) = (yyvsp[(1) - (1)].num); ;}
    break;

  case 20:

    {(yyval.str) = (yyvsp[(1) - (1)].str);;}
    break;

  case 21:

    {
				char* combine = (char*)malloc( (strlen((yyvsp[(1) - (3)].str)) + strlen(",") + strlen((yyvsp[(3) - (3)].str)) + 1) * sizeof(char) );
				strcpy(combine, (yyvsp[(1) - (3)].str));
				strcat(combine, ",");
				strcat(combine, (yyvsp[(3) - (3)].str));
				(yyval.str) = combine;
			;}
    break;

  case 24:

    {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str), "VAR", line);
				;}
    break;

  case 27:

    {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", (yyvsp[(3) - (5)].str), "INTEGER", "CONST", line);
				;}
    break;

  case 29:

    {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", (yyvsp[(3) - (5)].str), "REAL", "CONST", line);
				;}
    break;

  case 31:

    {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", (yyvsp[(3) - (5)].str), "STRING", "CONST", line);
				;}
    break;

  case 34:

    { (yyval.str) = (yyvsp[(1) - (1)].str) ;}
    break;

  case 35:

    { (yyval.str) = "ARRAY"; ;}
    break;

  case 36:

    { (yyval.str) = "INTEGER"; ;}
    break;

  case 37:

    { (yyval.str) = "REAL"; ;}
    break;

  case 38:

    { (yyval.str) = "CHAR"; ;}
    break;

  case 39:

    { (yyval.str) = "STRING"; ;}
    break;

  case 40:

    { (yyval.str) = "BOOLEAN"; ;}
    break;

  case 44:

    {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", (yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].str), "FUNCTION", line);
				;}
    break;

  case 46:

    {
					printf("Identificador: %s\nTipo: %s\nConcepto: %s\nLinea: %d\n", (yyvsp[(2) - (3)].str), "", "PROCEDURE", line);
				;}
    break;



      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





extern FILE* yyin;
int main(int argc, char* argv[]) {

    FILE* file = fopen("C:/Users/sonic/Documents/UP/Semestre 7/Lenguajes/Proyecto Final/Ejemplo1.pas","r");
    if (!file){
    	yyerror("Archivo no encontrado");
    }
    
    yyin = file;
    yyparse();
    printf("Programa reconocido correctamente\n");
    printf("Lineas: %d\n", line);
    return 0;
}
