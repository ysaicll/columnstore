
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         ddlparse
#define yylex           ddllex
#define yyerror         ddlerror
#define yylval          ddllval
#define yychar          ddlchar
#define yydebug         ddldebug
#define yynerrs         ddlnerrs


/* Copy the first part of user declarations.  */


#include "sqlparser.h"

#ifdef _MSC_VER
#include "ddl-gram-win.h"
#else
#include "ddl-gram.h"
#endif

#define scanner x->scanner

using namespace std;
using namespace ddlpackage;	

int ddllex(YYSTYPE* ddllval, void* yyscanner);
void ddlerror(struct pass_to_bison* x, char const *s);
char* copy_string(const char *str);



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
     ACTION = 258,
     ADD = 259,
     ALTER = 260,
     AUTO_INCREMENT = 261,
     BIGINT = 262,
     BIT = 263,
     BLOB = 264,
     IDB_BLOB = 265,
     CASCADE = 266,
     IDB_CHAR = 267,
     CHARACTER = 268,
     CHECK = 269,
     CLOB = 270,
     COLUMN = 271,
     COLUMNS = 272,
     COMMENT = 273,
     CONSTRAINT = 274,
     CONSTRAINTS = 275,
     CREATE = 276,
     CURRENT_USER = 277,
     DATETIME = 278,
     DEC = 279,
     DECIMAL = 280,
     DEFAULT = 281,
     DEFERRABLE = 282,
     DEFERRED = 283,
     IDB_DELETE = 284,
     DROP = 285,
     ENGINE = 286,
     FOREIGN = 287,
     FULL = 288,
     IMMEDIATE = 289,
     INDEX = 290,
     INITIALLY = 291,
     IDB_INT = 292,
     INTEGER = 293,
     KEY = 294,
     LONGBLOB = 295,
     LONGTEXT = 296,
     MATCH = 297,
     MAX_ROWS = 298,
     MEDIUMBLOB = 299,
     MEDIUMTEXT = 300,
     MIN_ROWS = 301,
     MODIFY = 302,
     NO = 303,
     NOT = 304,
     NULL_TOK = 305,
     NUMBER = 306,
     NUMERIC = 307,
     ON = 308,
     PARTIAL = 309,
     PRECISION = 310,
     PRIMARY = 311,
     REFERENCES = 312,
     RENAME = 313,
     RESTRICT = 314,
     SET = 315,
     SMALLINT = 316,
     TABLE = 317,
     TEXT = 318,
     TIME = 319,
     TINYBLOB = 320,
     TINYTEXT = 321,
     TINYINT = 322,
     TO = 323,
     UNIQUE = 324,
     UNSIGNED = 325,
     UPDATE = 326,
     USER = 327,
     SESSION_USER = 328,
     SYSTEM_USER = 329,
     VARCHAR = 330,
     VARBINARY = 331,
     VARYING = 332,
     WITH = 333,
     ZONE = 334,
     DOUBLE = 335,
     IDB_FLOAT = 336,
     REAL = 337,
     CHARSET = 338,
     IDB_IF = 339,
     EXISTS = 340,
     CHANGE = 341,
     TRUNCATE = 342,
     IDENT = 343,
     FCONST = 344,
     SCONST = 345,
     CP_SEARCH_CONDITION_TEXT = 346,
     ICONST = 347,
     DATE = 348
   };
#endif
/* Tokens.  */
#define ACTION 258
#define ADD 259
#define ALTER 260
#define AUTO_INCREMENT 261
#define BIGINT 262
#define BIT 263
#define BLOB 264
#define IDB_BLOB 265
#define CASCADE 266
#define IDB_CHAR 267
#define CHARACTER 268
#define CHECK 269
#define CLOB 270
#define COLUMN 271
#define COLUMNS 272
#define COMMENT 273
#define CONSTRAINT 274
#define CONSTRAINTS 275
#define CREATE 276
#define CURRENT_USER 277
#define DATETIME 278
#define DEC 279
#define DECIMAL 280
#define DEFAULT 281
#define DEFERRABLE 282
#define DEFERRED 283
#define IDB_DELETE 284
#define DROP 285
#define ENGINE 286
#define FOREIGN 287
#define FULL 288
#define IMMEDIATE 289
#define INDEX 290
#define INITIALLY 291
#define IDB_INT 292
#define INTEGER 293
#define KEY 294
#define LONGBLOB 295
#define LONGTEXT 296
#define MATCH 297
#define MAX_ROWS 298
#define MEDIUMBLOB 299
#define MEDIUMTEXT 300
#define MIN_ROWS 301
#define MODIFY 302
#define NO 303
#define NOT 304
#define NULL_TOK 305
#define NUMBER 306
#define NUMERIC 307
#define ON 308
#define PARTIAL 309
#define PRECISION 310
#define PRIMARY 311
#define REFERENCES 312
#define RENAME 313
#define RESTRICT 314
#define SET 315
#define SMALLINT 316
#define TABLE 317
#define TEXT 318
#define TIME 319
#define TINYBLOB 320
#define TINYTEXT 321
#define TINYINT 322
#define TO 323
#define UNIQUE 324
#define UNSIGNED 325
#define UPDATE 326
#define USER 327
#define SESSION_USER 328
#define SYSTEM_USER 329
#define VARCHAR 330
#define VARBINARY 331
#define VARYING 332
#define WITH 333
#define ZONE 334
#define DOUBLE 335
#define IDB_FLOAT 336
#define REAL 337
#define CHARSET 338
#define IDB_IF 339
#define EXISTS 340
#define CHANGE 341
#define TRUNCATE 342
#define IDENT 343
#define FCONST 344
#define SCONST 345
#define CP_SEARCH_CONDITION_TEXT 346
#define ICONST 347
#define DATE 348




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


  ddlpackage::AlterTableStatement *alterTableStmt;
  ddlpackage::AlterTableAction *ata;
  ddlpackage::AlterTableActionList *ataList;
  ddlpackage::DDL_CONSTRAINT_ATTRIBUTES cattr;
  std::pair<std::string, std::string> *tableOption;
  const char *columnOption;
  ddlpackage::ColumnConstraintDef *columnConstraintDef;
  ddlpackage::ColumnNameList *columnNameList;
  ddlpackage::ColumnType* columnType;
  ddlpackage::ConstraintAttributes *constraintAttributes;
  ddlpackage::ColumnConstraintList *constraintList;
  ddlpackage::DDL_CONSTRAINTS constraintType;
  double dval;
  bool flag;
  int ival;
  ddlpackage::QualifiedName *qualifiedName;
  ddlpackage::SchemaObject *schemaObject;
  ddlpackage::SqlStatement *sqlStmt;
  ddlpackage::SqlStatementList *sqlStmtList;
  const char *str;
  ddlpackage::TableConstraintDef *tableConstraint;
  ddlpackage::TableElementList *tableElementList;
  ddlpackage::TableOptionMap *tableOptionMap;
  ddlpackage::ColumnDefaultValue *colDefault;
  ddlpackage::DDL_MATCH_TYPE matchType;
  ddlpackage::DDL_REFERENTIAL_ACTION refActionCode;
  ddlpackage::ReferentialAction *refAction;



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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  247
/* YYNRULES -- Number of states.  */
#define YYNSTATES  419

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   100,
      95,    96,     2,     2,    97,     2,    99,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    94,
       2,    98,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    15,    17,    19,
      21,    23,    24,    29,    36,    39,    40,    44,    54,    65,
      67,    68,    77,    85,    89,    90,    94,    97,    99,   103,
     105,   107,   112,   116,   118,   119,   121,   123,   125,   130,
     132,   136,   139,   141,   154,   156,   157,   160,   162,   164,
     166,   167,   170,   173,   175,   176,   178,   179,   183,   187,
     189,   192,   195,   198,   200,   202,   205,   206,   208,   212,
     216,   220,   224,   227,   231,   236,   242,   247,   249,   253,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   274,
     278,   281,   285,   290,   295,   301,   307,   314,   320,   327,
     334,   342,   348,   355,   362,   370,   377,   385,   392,   400,
     408,   417,   425,   434,   439,   442,   445,   449,   451,   455,
     457,   460,   464,   469,   475,   477,   479,   481,   484,   488,
     493,   499,   504,   509,   515,   522,   528,   535,   541,   542,
     544,   547,   550,   553,   556,   559,   562,   564,   566,   568,
     570,   572,   574,   576,   578,   580,   583,   586,   591,   593,
     594,   597,   600,   602,   603,   605,   608,   611,   614,   616,
     619,   621,   623,   628,   632,   634,   636,   641,   646,   652,
     658,   663,   668,   673,   675,   677,   679,   681,   686,   688,
     690,   692,   694,   696,   698,   701,   705,   708,   712,   715,
     719,   722,   725,   728,   731,   734,   738,   742,   746,   750,
     754,   758,   764,   765,   769,   770,   773,   777,   781,   786,
     789,   793,   796,   800,   804,   810,   811,   813,   815,   817,
     819,   821,   825,   829,   830,   834,   835,   839,   844,   850,
     855,   861,   863,   865,   866,   872,   878,   880
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     102,     0,    -1,   103,    -1,   103,    94,   104,    -1,   104,
      -1,   134,    -1,   110,    -1,   107,    -1,   105,    -1,   108,
      -1,   112,    -1,    -1,    30,    62,   106,   144,    -1,    30,
      62,   106,   144,    11,    20,    -1,    84,    85,    -1,    -1,
      30,    35,   144,    -1,    21,    35,   144,    53,   144,    95,
     119,    96,   109,    -1,    21,    69,    35,   144,    53,   144,
      95,   119,    96,   109,    -1,   131,    -1,    -1,    21,    62,
     111,   143,    95,   113,    96,   131,    -1,    21,    62,   111,
     143,    95,   113,    96,    -1,    84,    49,    85,    -1,    -1,
      87,    62,   144,    -1,    87,   144,    -1,   114,    -1,   113,
      97,   114,    -1,   149,    -1,   115,    -1,    19,   116,   117,
     155,    -1,   116,   117,   155,    -1,   147,    -1,    -1,   118,
      -1,   121,    -1,   161,    -1,   120,    95,   119,    96,    -1,
     146,    -1,   119,    97,   146,    -1,    56,    39,    -1,    69,
      -1,    32,    39,    95,   119,    96,    57,   143,    95,   119,
      96,   122,   124,    -1,   123,    -1,    -1,    42,   123,    -1,
      33,    -1,    54,    -1,   125,    -1,    -1,   128,   126,    -1,
     129,   127,    -1,   129,    -1,    -1,   128,    -1,    -1,    53,
      71,   130,    -1,    53,    29,   130,    -1,    11,    -1,    60,
      50,    -1,    60,    26,    -1,    48,     3,    -1,    59,    -1,
     133,    -1,   131,   133,    -1,    -1,    98,    -1,    31,   132,
      88,    -1,    43,   132,    92,    -1,    46,   132,    92,    -1,
      18,   132,   162,    -1,    18,   162,    -1,     6,   132,    92,
      -1,    26,    83,   132,    88,    -1,    26,    12,    60,   132,
      88,    -1,     5,    62,   143,   135,    -1,   136,    -1,   135,
      97,   136,    -1,   135,   136,    -1,   145,    -1,   177,    -1,
     179,    -1,   141,    -1,   140,    -1,   142,    -1,   138,    -1,
     139,    -1,   137,    -1,    18,   132,   162,    -1,    18,   162,
      -1,    47,   146,   152,    -1,    47,    16,   146,   152,    -1,
      86,   146,   146,   152,    -1,    86,   146,   146,   152,   148,
      -1,    86,    16,   146,   146,   152,    -1,    86,    16,   146,
     146,   152,   148,    -1,    86,   146,   146,   152,   153,    -1,
      86,    16,   146,   146,   152,   153,    -1,    86,   146,   146,
     152,   153,   148,    -1,    86,    16,   146,   146,   152,   153,
     148,    -1,    86,   146,   146,   152,   151,    -1,    86,    16,
     146,   146,   152,   151,    -1,    86,   146,   146,   152,   151,
     148,    -1,    86,    16,   146,   146,   152,   151,   148,    -1,
      86,   146,   146,   152,   153,   151,    -1,    86,    16,   146,
     146,   152,   153,   151,    -1,    86,   146,   146,   152,   151,
     153,    -1,    86,    16,   146,   146,   152,   151,   153,    -1,
      86,   146,   146,   152,   153,   151,   148,    -1,    86,    16,
     146,   146,   152,   153,   151,   148,    -1,    86,   146,   146,
     152,   151,   153,   148,    -1,    86,    16,   146,   146,   152,
     151,   153,   148,    -1,    30,    19,   147,   178,    -1,     4,
     115,    -1,    58,   143,    -1,    58,    68,   143,    -1,   144,
      -1,    88,    99,    88,    -1,    88,    -1,     4,   149,    -1,
       4,    16,   149,    -1,     4,    95,   113,    96,    -1,     4,
      16,    95,   113,    96,    -1,    93,    -1,    88,    -1,    88,
      -1,    18,   162,    -1,   146,   152,   150,    -1,   146,   152,
     150,   153,    -1,   146,   152,   150,   151,   153,    -1,   146,
     152,   150,   151,    -1,   146,   152,   150,   148,    -1,   146,
     152,   150,   153,   148,    -1,   146,   152,   150,   151,   153,
     148,    -1,   146,   152,   150,   153,   151,    -1,   146,   152,
     150,   153,   151,   148,    -1,   146,   152,   150,   151,   148,
      -1,    -1,    50,    -1,    26,   173,    -1,    26,    50,    -1,
      26,    72,    -1,    26,    22,    -1,    26,    73,    -1,    26,
      74,    -1,   163,    -1,   164,    -1,   167,    -1,   174,    -1,
     165,    -1,   166,    -1,    10,    -1,    15,    -1,   154,    -1,
     153,   154,    -1,   160,   155,    -1,    19,   147,   160,   155,
      -1,   156,    -1,    -1,   159,   157,    -1,    27,   159,    -1,
     158,    -1,    -1,    27,    -1,    36,    28,    -1,    36,    34,
      -1,    49,    50,    -1,    69,    -1,    56,    39,    -1,     6,
      -1,   161,    -1,    14,    95,    91,    96,    -1,   100,    90,
     100,    -1,    13,    -1,    12,    -1,    13,    95,    92,    96,
      -1,    12,    95,    92,    96,    -1,    13,    77,    95,    92,
      96,    -1,    12,    77,    95,    92,    96,    -1,    75,    95,
      92,    96,    -1,    76,    95,    92,    96,    -1,     9,    95,
      92,    96,    -1,     9,    -1,    65,    -1,    44,    -1,    40,
      -1,    63,    95,    92,    96,    -1,    63,    -1,    66,    -1,
      45,    -1,    41,    -1,   168,    -1,   171,    -1,    52,   169,
      -1,    52,   169,    70,    -1,    25,   169,    -1,    25,   169,
      70,    -1,    51,   169,    -1,    51,   169,    70,    -1,    38,
     170,    -1,    37,   170,    -1,    61,   170,    -1,    67,   170,
      -1,     7,   170,    -1,    38,   170,    70,    -1,    37,   170,
      70,    -1,    61,   170,    70,    -1,    67,   170,    70,    -1,
       7,   170,    70,    -1,    95,    92,    96,    -1,    95,    92,
      97,    92,    96,    -1,    -1,    95,    92,    96,    -1,    -1,
      80,   172,    -1,    80,   172,    70,    -1,    80,    55,   172,
      -1,    80,    55,   172,    70,    -1,    82,   172,    -1,    82,
     172,    70,    -1,    81,   172,    -1,    81,   172,    70,    -1,
      95,    92,    96,    -1,    95,    92,    97,    92,    96,    -1,
      -1,    92,    -1,   162,    -1,    89,    -1,    23,    -1,    93,
      -1,    64,   175,   176,    -1,    95,    92,    96,    -1,    -1,
      78,    64,    79,    -1,    -1,    30,   146,   178,    -1,    30,
      16,   146,   178,    -1,    30,    16,    95,   119,    96,    -1,
      30,    95,   119,    96,    -1,    30,    17,    95,   119,    96,
      -1,    11,    -1,    59,    -1,    -1,     5,   180,   146,    60,
     151,    -1,     5,   180,   146,    30,    26,    -1,    16,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   210,   210,   215,   225,   240,   241,   242,   243,   244,
     245,   246,   250,   251,   258,   259,   263,   269,   274,   282,
     283,   287,   292,   299,   300,   304,   305,   309,   315,   323,
     324,   328,   334,   342,   343,   347,   348,   349,   353,   363,
     368,   376,   377,   381,   388,   389,   393,   397,   398,   402,
     403,   407,   413,   422,   423,   427,   428,   432,   436,   440,
     441,   442,   443,   444,   448,   454,   463,   463,   467,   469,
     471,   473,   475,   477,   482,   484,   488,   495,   507,   512,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   532,
     535,   542,   545,   551,   553,   555,   557,   559,   561,   563,
     565,   567,   569,   571,   573,   575,   577,   579,   581,   583,
     585,   587,   589,   594,   601,   605,   606,   610,   614,   615,
     627,   628,   629,   630,   634,   635,   639,   643,   646,   650,
     654,   658,   662,   666,   670,   674,   678,   682,   688,   691,
     695,   699,   700,   701,   702,   703,   707,   708,   709,   710,
     711,   712,   713,   718,   727,   732,   740,   751,   766,   767,
     771,   776,   790,   791,   795,   806,   807,   811,   812,   813,
     814,   815,   819,   823,   827,   832,   837,   842,   847,   853,
     859,   867,   875,   880,   885,   890,   895,   903,   908,   913,
     918,   923,   931,   932,   936,   942,   948,   954,   960,   966,
     972,   977,   982,   987,   992,   997,  1002,  1007,  1012,  1017,
    1025,  1026,  1027,  1031,  1032,  1036,  1041,  1046,  1051,  1056,
    1061,  1066,  1071,  1079,  1081,  1082,  1086,  1087,  1088,  1092,
    1098,  1104,  1113,  1114,  1118,  1119,  1123,  1124,  1125,  1126,
    1127,  1131,  1132,  1133,  1137,  1138,  1142,  1143
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACTION", "ADD", "ALTER",
  "AUTO_INCREMENT", "BIGINT", "BIT", "BLOB", "IDB_BLOB", "CASCADE",
  "IDB_CHAR", "CHARACTER", "CHECK", "CLOB", "COLUMN", "COLUMNS", "COMMENT",
  "CONSTRAINT", "CONSTRAINTS", "CREATE", "CURRENT_USER", "DATETIME", "DEC",
  "DECIMAL", "DEFAULT", "DEFERRABLE", "DEFERRED", "IDB_DELETE", "DROP",
  "ENGINE", "FOREIGN", "FULL", "IMMEDIATE", "INDEX", "INITIALLY",
  "IDB_INT", "INTEGER", "KEY", "LONGBLOB", "LONGTEXT", "MATCH", "MAX_ROWS",
  "MEDIUMBLOB", "MEDIUMTEXT", "MIN_ROWS", "MODIFY", "NO", "NOT",
  "NULL_TOK", "NUMBER", "NUMERIC", "ON", "PARTIAL", "PRECISION", "PRIMARY",
  "REFERENCES", "RENAME", "RESTRICT", "SET", "SMALLINT", "TABLE", "TEXT",
  "TIME", "TINYBLOB", "TINYTEXT", "TINYINT", "TO", "UNIQUE", "UNSIGNED",
  "UPDATE", "USER", "SESSION_USER", "SYSTEM_USER", "VARCHAR", "VARBINARY",
  "VARYING", "WITH", "ZONE", "DOUBLE", "IDB_FLOAT", "REAL", "CHARSET",
  "IDB_IF", "EXISTS", "CHANGE", "TRUNCATE", "IDENT", "FCONST", "SCONST",
  "CP_SEARCH_CONDITION_TEXT", "ICONST", "DATE", "';'", "'('", "')'", "','",
  "'='", "'.'", "'\\''", "$accept", "stmtblock", "stmtmulti", "stmt",
  "drop_table_statement", "opt_if_exists", "drop_index_statement",
  "create_index_statement", "opt_table_options", "create_table_statement",
  "opt_if_not_exists", "trunc_table_statement", "table_element_list",
  "table_element", "table_constraint_def", "opt_constraint_name",
  "table_constraint", "unique_constraint_def", "column_name_list",
  "unique_specifier", "referential_constraint_def", "opt_match_type",
  "match_type", "opt_referential_triggered_action",
  "referential_triggered_action", "opt_delete_rule", "opt_update_rule",
  "update_rule", "delete_rule", "referential_action", "table_options",
  "opt_equal", "table_option", "alter_table_statement",
  "alter_table_actions", "alter_table_action", "alter_table_comment",
  "modify_column", "rename_column", "drop_table_constraint_def",
  "add_table_constraint_def", "ata_rename_table", "table_name",
  "qualified_name", "ata_add_column", "column_name", "constraint_name",
  "column_option", "column_def", "opt_null_tok", "default_clause",
  "data_type", "column_qualifier_list", "column_constraint_def",
  "opt_constraint_attributes", "constraint_attributes",
  "opt_deferrability_clause", "deferrability_clause",
  "constraint_check_time", "column_constraint", "check_constraint_def",
  "string_literal", "character_string_type", "binary_string_type",
  "blob_type", "text_type", "numeric_type", "exact_numeric_type",
  "opt_precision_scale", "opt_display_width", "approximate_numeric_type",
  "opt_display_precision_scale_null", "literal", "datetime_type",
  "opt_time_precision", "opt_with_time_zone", "drop_column_def",
  "drop_behavior", "alter_column_def", "opt_column", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,    59,    40,    41,    44,    61,    46,
      39
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   118,   119,
     119,   120,   120,   121,   122,   122,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   129,   130,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   141,   142,   142,   143,   144,   144,
     145,   145,   145,   145,   146,   146,   147,   148,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   150,   150,
     151,   151,   151,   151,   151,   151,   152,   152,   152,   152,
     152,   152,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   159,   159,   160,   160,   160,
     160,   160,   161,   162,   163,   163,   163,   163,   163,   163,
     163,   164,   165,   165,   165,   165,   165,   166,   166,   166,
     166,   166,   167,   167,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   170,   170,   171,   171,   171,   171,   171,
     171,   171,   171,   172,   172,   172,   173,   173,   173,   174,
     174,   174,   175,   175,   176,   176,   177,   177,   177,   177,
     177,   178,   178,   178,   179,   179,   180,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     6,     2,     0,     3,     9,    10,     1,
       0,     8,     7,     3,     0,     3,     2,     1,     3,     1,
       1,     4,     3,     1,     0,     1,     1,     1,     4,     1,
       3,     2,     1,    12,     1,     0,     2,     1,     1,     1,
       0,     2,     2,     1,     0,     1,     0,     3,     3,     1,
       2,     2,     2,     1,     1,     2,     0,     1,     3,     3,
       3,     3,     2,     3,     4,     5,     4,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     4,     4,     5,     5,     6,     5,     6,     6,
       7,     5,     6,     6,     7,     6,     7,     6,     7,     7,
       8,     7,     8,     4,     2,     2,     3,     1,     3,     1,
       2,     3,     4,     5,     1,     1,     1,     2,     3,     4,
       5,     4,     4,     5,     6,     5,     6,     5,     0,     1,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     1,     0,
       2,     2,     1,     0,     1,     2,     2,     2,     1,     2,
       1,     1,     4,     3,     1,     1,     4,     4,     5,     5,
       4,     4,     4,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     3,     2,     3,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     5,     0,     3,     0,     2,     3,     3,     4,     2,
       3,     2,     3,     3,     5,     0,     1,     1,     1,     1,
       1,     3,     3,     0,     3,     0,     3,     4,     5,     4,
       5,     1,     1,     0,     5,     5,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      11,     0,     0,     0,     0,     0,     2,     4,     8,     7,
       9,     6,    10,     5,     0,     0,    24,     0,     0,    15,
       0,   119,    26,     1,    11,     0,   117,     0,     0,     0,
       0,    16,     0,     0,    25,     0,     3,    34,   247,     0,
       0,     0,     0,     0,    76,    77,    88,    86,    87,    84,
      83,    85,    80,    81,    82,     0,     0,     0,     0,    14,
      12,   118,     0,    34,   125,   124,    34,   114,     0,     0,
      33,   120,   246,     0,    67,     0,     0,    90,     0,     0,
       0,   125,     0,   243,     0,     0,     0,   115,     0,     0,
       0,    79,     0,    23,    34,     0,     0,    34,   121,   126,
       0,     0,    27,    30,    29,     0,     0,     0,    42,   159,
      35,     0,    36,    37,   214,   183,   152,   175,   174,   153,
     229,   212,   214,   214,   186,   191,   185,   190,   212,   212,
     214,   188,   233,   184,   189,   214,     0,     0,   225,   225,
     225,   230,   138,   146,   147,   150,   151,   148,   192,   193,
     149,     0,     0,    89,     0,   243,     0,   243,     0,    39,
     241,   242,   236,     0,    91,   116,     0,     0,    78,     0,
       0,     0,    13,     0,   159,   122,    34,     0,     0,    41,
       0,     0,    32,   158,   163,     0,     0,   204,     0,     0,
       0,     0,     0,     0,   196,   201,   200,   198,   194,   202,
       0,     0,   235,   203,     0,     0,   225,     0,   215,   221,
     219,   139,   128,     0,     0,   173,     0,   237,     0,   113,
     239,     0,    92,     0,    93,     0,    22,     0,   123,    31,
      28,     0,     0,   161,   165,   166,   164,   160,   162,     0,
       0,   209,     0,     0,     0,     0,     0,     0,   197,   206,
     205,   199,   195,   207,     0,     0,     0,   231,   208,     0,
       0,   217,     0,   216,   222,   220,   170,     0,     0,     0,
       0,     0,   168,   132,   131,   129,   154,   159,   171,   245,
     244,   238,   240,    40,    95,    94,   101,    97,    20,    66,
       0,     0,    66,    66,    66,    21,    64,     0,   172,     0,
      38,   213,   182,     0,   177,     0,   176,   210,     0,   187,
     232,     0,   180,   181,   218,   223,     0,   127,     0,   143,
     141,   142,   144,   145,   228,   226,   227,   140,   167,   169,
     137,   130,   133,   135,   155,   156,    96,   102,    98,   103,
     107,    99,   105,    17,    19,     0,     0,    72,     0,    66,
       0,     0,     0,    65,    20,     0,   179,   178,     0,   234,
       0,   159,   134,   136,   104,   108,   100,   106,   111,   109,
      73,    71,    66,     0,    68,    69,    70,    18,     0,   211,
     224,   157,   112,   110,     0,    74,     0,    75,     0,     0,
      45,    47,     0,    48,    50,    44,    46,     0,    43,    49,
      54,    56,     0,     0,     0,    51,    53,     0,    52,    55,
      59,     0,    63,     0,    58,    57,    62,    61,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    33,     9,    10,   343,    11,
      29,    12,   101,   102,   103,    68,   109,   110,   158,   111,
     112,   394,   395,   398,   399,   405,   408,   400,   401,   414,
     344,    76,   296,    13,    44,    45,    46,    47,    48,    49,
      50,    51,    25,    26,    52,   159,    70,   273,   104,   212,
     274,   142,   275,   276,   182,   183,   237,   238,   184,   277,
     278,    77,   143,   144,   145,   146,   147,   148,   194,   187,
     149,   208,   327,   150,   202,   257,    53,   162,    54,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -269
static const yytype_int16 yypact[] =
{
       9,   -26,    99,     0,    66,    74,    21,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,    64,    64,    81,   122,    64,    96,
      64,    98,  -269,  -269,     9,    95,  -269,   166,   191,    64,
      64,  -269,   189,    64,  -269,   170,  -269,    91,   266,    78,
      67,    13,   -41,    42,    73,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,    64,   199,   192,   233,  -269,
     282,  -269,   168,   207,    94,  -269,    23,  -269,   126,   162,
    -269,  -269,  -269,   -50,  -269,   209,   194,  -269,   169,   213,
     207,  -269,   -50,    34,   -50,   162,    64,  -269,   -50,   -50,
      95,  -269,   214,  -269,    23,    64,   290,    23,  -269,  -269,
     126,   114,  -269,  -269,  -269,   216,   273,   274,  -269,     4,
    -269,   219,  -269,  -269,   220,   221,  -269,   -49,    52,  -269,
    -269,   222,   220,   220,  -269,  -269,  -269,  -269,   222,   222,
     220,   223,   224,  -269,  -269,   220,   225,   226,   -35,   228,
     228,  -269,   272,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,   113,   229,  -269,   -50,    34,   -50,    34,   138,  -269,
    -269,  -269,  -269,   162,  -269,  -269,   -50,   162,  -269,   -50,
     153,   230,  -269,   173,     4,  -269,    23,   235,   232,  -269,
     288,   190,  -269,  -269,   301,   -50,   238,   261,   240,   239,
     241,   243,   244,   245,   265,   269,   270,   271,   275,   276,
     250,   251,   277,   278,   252,   255,   228,   258,   281,   283,
     284,  -269,   227,   326,   330,  -269,   182,  -269,   184,  -269,
    -269,   -50,  -269,   162,   227,   193,   242,   -50,  -269,  -269,
    -269,   262,   -50,  -269,  -269,  -269,  -269,  -269,  -269,   195,
     263,  -269,   264,   279,   267,   280,   268,   201,  -269,  -269,
    -269,  -269,  -269,  -269,   285,   286,   293,  -269,  -269,   287,
     289,   291,   204,  -269,  -269,  -269,  -269,   194,   207,   116,
     312,   327,  -269,  -269,   203,   227,  -269,     4,  -269,  -269,
    -269,  -269,  -269,  -269,   227,  -269,   203,   227,   242,   292,
      78,    11,   292,   292,   292,   242,  -269,   206,  -269,   208,
    -269,  -269,  -269,   295,  -269,   296,  -269,  -269,   294,  -269,
    -269,   297,  -269,  -269,  -269,  -269,   302,  -269,   198,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,   203,  -269,   347,  -269,  -269,  -269,   203,   227,  -269,
     203,  -269,   347,  -269,   242,   303,   194,  -269,   307,   292,
     299,   304,   305,  -269,   242,   311,  -269,  -269,   306,  -269,
     308,     4,  -269,  -269,  -269,   203,  -269,   347,  -269,  -269,
    -269,  -269,   292,   300,  -269,  -269,  -269,  -269,    64,  -269,
    -269,  -269,  -269,  -269,   310,  -269,   298,  -269,   -50,   210,
     197,  -269,   197,  -269,   316,  -269,  -269,   -19,  -269,  -269,
     317,   320,   172,   172,   345,  -269,  -269,   309,  -269,  -269,
    -269,   372,  -269,   106,  -269,  -269,  -269,  -269,  -269
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,  -269,   353,  -269,  -269,  -269,  -269,    24,  -269,
    -269,  -269,   104,   231,   342,   321,   313,  -269,  -152,  -269,
    -269,  -269,    -3,  -269,  -269,  -269,  -269,    -2,     1,     2,
     174,  -268,  -246,  -269,  -269,   -36,  -269,  -269,  -269,  -269,
    -269,  -269,   -29,    72,  -269,   -25,   -77,  -219,   102,  -269,
    -205,   -78,  -213,  -243,  -168,  -269,  -269,  -269,   234,    85,
     -34,   -75,  -269,  -269,  -269,  -269,  -269,  -269,   137,    14,
    -269,   -89,  -269,  -269,  -269,  -269,  -269,   120,  -269,  -269
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      57,   153,   216,   157,   218,   285,   229,   164,    91,   280,
     402,   287,    69,    87,     1,    83,    85,   225,    89,   286,
     206,   345,   346,   348,   350,   351,   352,    86,   189,    84,
       2,   180,   334,   239,   113,    18,    14,    69,    81,     3,
     181,    69,    63,    65,   334,   160,   190,    21,   151,   353,
     209,   210,   403,   155,   168,   330,   332,   165,    88,   163,
     207,   331,    19,   166,   167,   336,   113,   339,   341,    69,
     333,   338,    69,   340,    23,   297,    22,    37,    38,   337,
     299,   373,   342,    78,    79,   222,    80,    27,   334,   224,
      31,    39,    34,   161,   349,   334,     4,   334,   353,    37,
      38,    81,    58,    40,   384,    60,    65,    62,  -126,   335,
      63,    64,   362,    39,   363,    24,    65,   261,   364,   366,
      41,   368,   334,   369,   365,    40,  -126,    92,    20,   191,
      81,    42,   417,   367,    15,    65,   195,   196,   319,    71,
     105,   223,    41,   213,   199,   284,   382,   192,   383,   203,
    -126,    69,    21,    42,    21,    81,   418,    30,   106,    43,
      65,    16,    82,  -126,    98,    28,   320,   171,    17,   114,
      90,   115,   116,   214,   117,   118,    74,   119,    75,    64,
      32,    43,   107,   410,    65,   120,    66,   121,   321,   322,
     323,   318,   317,   381,   326,   108,   283,    35,   170,   122,
     123,   173,   124,   125,   266,   324,   126,   127,   325,   266,
     175,   176,   105,   128,   129,   347,    75,   105,   234,    55,
     411,   267,   268,   130,   235,   131,   132,   133,   134,   135,
     391,   412,   413,   266,   220,   221,   389,   136,   137,   392,
      56,   105,   138,   139,   140,   267,   268,   270,   289,   226,
     176,   393,   270,   269,   271,   141,    81,    81,    61,   271,
     290,    65,    65,    97,   154,   197,   198,   272,   291,   228,
     176,   371,   272,   292,    59,   217,   270,   219,   281,   221,
     282,   221,    72,   271,    93,   293,    95,    94,   294,   288,
     221,   300,   221,    96,    75,    99,   272,   307,   308,   152,
     315,   316,   354,   221,   355,   221,   390,   221,   156,   169,
     172,   177,   178,   179,   185,   186,   188,   193,   200,   201,
     204,   205,   211,   207,   181,   227,   231,   232,   236,   215,
     240,   241,   242,   244,   243,   248,   246,   247,   245,   249,
     250,   251,   254,   255,   259,   252,   253,   260,   258,   386,
     262,   263,   279,   264,   265,   256,   269,   311,   298,   301,
     302,   314,   328,   304,   306,   267,   329,   372,   378,   397,
     404,   303,   305,   407,   402,   416,   359,    36,   377,    67,
     403,   309,   310,   312,   100,   313,   358,   374,   385,   396,
      74,   356,   357,   388,   360,   370,   375,   376,   387,   409,
     295,   406,   379,   361,   380,   415,     0,   230,     0,     0,
       0,     0,     0,   174,   233
};

static const yytype_int16 yycheck[] =
{
      29,    76,   154,    80,   156,   224,   174,    85,    44,   214,
      29,   224,    37,    42,     5,    40,    41,   169,    43,   224,
      55,   289,   290,    12,   292,   293,   294,    68,    77,    16,
      21,    27,   275,   185,    68,    35,    62,    62,    88,    30,
      36,    66,    19,    93,   287,    11,    95,    88,    73,   295,
     139,   140,    71,    78,    90,   274,   275,    86,    16,    84,
      95,   274,    62,    88,    89,   284,   100,   286,   287,    94,
     275,   284,    97,   286,     0,   227,     4,     4,     5,   284,
     232,   349,   287,    16,    17,   163,    19,    15,   331,   167,
      18,    18,    20,    59,    83,   338,    87,   340,   344,     4,
       5,    88,    30,    30,   372,    33,    93,    16,    14,   277,
      19,    88,   331,    18,   333,    94,    93,   206,   337,   338,
      47,   340,   365,   342,   337,    30,    32,    55,    62,    77,
      88,    58,    26,   338,    35,    93,   122,   123,    22,    37,
      14,   166,    47,    30,   130,   223,   365,    95,   367,   135,
      56,   176,    88,    58,    88,    88,    50,    35,    32,    86,
      93,    62,    95,    69,    62,    84,    50,    95,    69,     7,
      97,     9,    10,    60,    12,    13,    98,    15,   100,    88,
      84,    86,    56,    11,    93,    23,    95,    25,    72,    73,
      74,   268,   267,   361,   269,    69,   221,    99,    94,    37,
      38,    97,    40,    41,     6,    89,    44,    45,    92,     6,
      96,    97,    14,    51,    52,   290,   100,    14,    28,    53,
      48,    18,    19,    61,    34,    63,    64,    65,    66,    67,
      33,    59,    60,     6,    96,    97,   388,    75,    76,    42,
      49,    14,    80,    81,    82,    18,    19,    49,     6,    96,
      97,    54,    49,    26,    56,    93,    88,    88,    88,    56,
      18,    93,    93,    95,    95,   128,   129,    69,    26,    96,
      97,   346,    69,    31,    85,   155,    49,   157,    96,    97,
      96,    97,    16,    56,    85,    43,    53,    95,    46,    96,
      97,    96,    97,    11,   100,    88,    69,    96,    97,    90,
      96,    97,    96,    97,    96,    97,    96,    97,    95,    95,
      20,    95,    39,    39,    95,    95,    95,    95,    95,    95,
      95,    95,    50,    95,    36,    95,    91,    95,    27,   100,
      92,    70,    92,    92,    95,    70,    92,    92,    95,    70,
      70,    70,    92,    92,    92,    70,    70,    92,    70,   378,
      92,    70,    26,    70,    70,    78,    26,    64,    96,    96,
      96,    70,    50,    96,    96,    18,    39,    60,    57,    53,
      53,    92,    92,    53,    29,     3,    79,    24,   354,    37,
      71,    96,    96,    96,    63,    96,    92,    88,    88,   392,
      98,    96,    96,    95,    92,    92,    92,    92,    88,   401,
     226,   400,    96,   318,    96,   403,    -1,   176,    -1,    -1,
      -1,    -1,    -1,   100,   180
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    21,    30,    87,   102,   103,   104,   105,   107,
     108,   110,   112,   134,    62,    35,    62,    69,    35,    62,
      62,    88,   144,     0,    94,   143,   144,   144,    84,   111,
      35,   144,    84,   106,   144,    99,   104,     4,     5,    18,
      30,    47,    58,    86,   135,   136,   137,   138,   139,   140,
     141,   142,   145,   177,   179,    53,    49,   143,   144,    85,
     144,    88,    16,    19,    88,    93,    95,   115,   116,   146,
     147,   149,    16,   180,    98,   100,   132,   162,    16,    17,
      19,    88,    95,   146,    16,   146,    68,   143,    16,   146,
      97,   136,   144,    85,    95,    53,    11,    95,   149,    88,
     116,   113,   114,   115,   149,    14,    32,    56,    69,   117,
     118,   120,   121,   161,     7,     9,    10,    12,    13,    15,
      23,    25,    37,    38,    40,    41,    44,    45,    51,    52,
      61,    63,    64,    65,    66,    67,    75,    76,    80,    81,
      82,    93,   152,   163,   164,   165,   166,   167,   168,   171,
     174,   146,    90,   162,    95,   146,    95,   147,   119,   146,
      11,    59,   178,   146,   152,   143,   146,   146,   136,    95,
     113,   144,    20,   113,   117,    96,    97,    95,    39,    39,
      27,    36,   155,   156,   159,    95,    95,   170,    95,    77,
      95,    77,    95,    95,   169,   170,   170,   169,   169,   170,
      95,    95,   175,   170,    95,    95,    55,    95,   172,   172,
     172,    50,   150,    30,    60,   100,   119,   178,   119,   178,
      96,    97,   152,   146,   152,   119,    96,    95,    96,   155,
     114,    91,    95,   159,    28,    34,    27,   157,   158,   119,
      92,    70,    92,    95,    92,    95,    92,    92,    70,    70,
      70,    70,    70,    70,    92,    92,    78,   176,    70,    92,
      92,   172,    92,    70,    70,    70,     6,    18,    19,    26,
      49,    56,    69,   148,   151,   153,   154,   160,   161,    26,
     151,    96,    96,   146,   152,   148,   151,   153,    96,     6,
      18,    26,    31,    43,    46,   131,   133,   119,    96,   119,
      96,    96,    96,    92,    96,    92,    96,    96,    97,    96,
      96,    64,    96,    96,    70,    96,    97,   162,   147,    22,
      50,    72,    73,    74,    89,    92,   162,   173,    50,    39,
     148,   153,   148,   151,   154,   155,   148,   151,   153,   148,
     153,   148,   151,   109,   131,   132,   132,   162,    12,    83,
     132,   132,   132,   133,    96,    96,    96,    96,    92,    79,
      92,   160,   148,   148,   148,   153,   148,   151,   148,   148,
      92,   162,    60,   132,    88,    92,    92,   109,    57,    96,
      96,   155,   148,   148,   132,    88,   143,    88,    95,   119,
      96,    33,    42,    54,   122,   123,   123,    53,   124,   125,
     128,   129,    29,    71,    53,   126,   129,    53,   127,   128,
      11,    48,    59,    60,   130,   130,     3,    26,    50
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
      yyerror (x, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, x); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct ddlpackage::pass_to_bison * x)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, x)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct ddlpackage::pass_to_bison * x;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (x);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct ddlpackage::pass_to_bison * x)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, x)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    struct ddlpackage::pass_to_bison * x;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, x);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, struct ddlpackage::pass_to_bison * x)
#else
static void
yy_reduce_print (yyvsp, yyrule, x)
    YYSTYPE *yyvsp;
    int yyrule;
    struct ddlpackage::pass_to_bison * x;
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
		       		       , x);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, x); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct ddlpackage::pass_to_bison * x)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, x)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    struct ddlpackage::pass_to_bison * x;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (x);

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
int yyparse (struct ddlpackage::pass_to_bison * x);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





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
yyparse (struct ddlpackage::pass_to_bison * x)
#else
int
yyparse (x)
    struct ddlpackage::pass_to_bison * x;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
        case 2:

    { x->fParseTree = (yyvsp[(1) - (1)].sqlStmtList); }
    break;

  case 3:

    {
		if ((yyvsp[(3) - (3)].sqlStmt) != NULL) {
			(yyvsp[(1) - (3)].sqlStmtList)->push_back((yyvsp[(3) - (3)].sqlStmt));
			(yyval.sqlStmtList) = (yyvsp[(1) - (3)].sqlStmtList);
		}
		else {
			(yyval.sqlStmtList) = (yyvsp[(1) - (3)].sqlStmtList);
		}
	}
    break;

  case 4:

    { 
		if ((yyvsp[(1) - (1)].sqlStmt) != NULL)
		{
			(yyval.sqlStmtList) = x->fParseTree;
			(yyval.sqlStmtList)->push_back((yyvsp[(1) - (1)].sqlStmt));
		}
		else
		{
			(yyval.sqlStmtList) = NULL;
		}
	}
    break;

  case 11:

    { (yyval.sqlStmt) = NULL; }
    break;

  case 12:

    {(yyval.sqlStmt) = new DropTableStatement((yyvsp[(4) - (4)].qualifiedName), false);}
    break;

  case 13:

    {
		{(yyval.sqlStmt) = new DropTableStatement((yyvsp[(4) - (6)].qualifiedName), true);}
	}
    break;

  case 14:

    {(yyval.str) = NULL;}
    break;

  case 15:

    {(yyval.str) = NULL;}
    break;

  case 16:

    {(yyval.sqlStmt) = new DropIndexStatement((yyvsp[(3) - (3)].qualifiedName));}
    break;

  case 17:

    {
		(yyval.sqlStmt) = new CreateIndexStatement((yyvsp[(3) - (9)].qualifiedName), (yyvsp[(5) - (9)].qualifiedName), (yyvsp[(7) - (9)].columnNameList), false);
		delete (yyvsp[(9) - (9)].tableOptionMap);
	}
    break;

  case 18:

    {
		(yyval.sqlStmt) = new CreateIndexStatement((yyvsp[(4) - (10)].qualifiedName), (yyvsp[(6) - (10)].qualifiedName), (yyvsp[(8) - (10)].columnNameList), true);
		delete (yyvsp[(10) - (10)].tableOptionMap);
	}
    break;

  case 20:

    {(yyval.tableOptionMap) = NULL;}
    break;

  case 21:

    {
		(yyval.sqlStmt) = new CreateTableStatement(new TableDef((yyvsp[(4) - (8)].qualifiedName), (yyvsp[(6) - (8)].tableElementList), (yyvsp[(8) - (8)].tableOptionMap)));
	}
    break;

  case 22:

    {
		(yyval.sqlStmt) = new CreateTableStatement(new TableDef((yyvsp[(4) - (7)].qualifiedName), (yyvsp[(6) - (7)].tableElementList), NULL));
	}
    break;

  case 23:

    {(yyval.str) = NULL;}
    break;

  case 24:

    {(yyval.str) = NULL;}
    break;

  case 25:

    {(yyval.sqlStmt) = new TruncTableStatement((yyvsp[(3) - (3)].qualifiedName));}
    break;

  case 26:

    { {(yyval.sqlStmt) = new TruncTableStatement((yyvsp[(2) - (2)].qualifiedName));} }
    break;

  case 27:

    {
		(yyval.tableElementList) = new TableElementList();
		(yyval.tableElementList)->push_back((yyvsp[(1) - (1)].schemaObject));
	}
    break;

  case 28:

    {
		(yyval.tableElementList) = (yyvsp[(1) - (3)].tableElementList);
		(yyval.tableElementList)->push_back((yyvsp[(3) - (3)].schemaObject));
	}
    break;

  case 31:

    {
		(yyval.schemaObject) = (yyvsp[(3) - (4)].schemaObject);
		(yyvsp[(3) - (4)].schemaObject)->fName = (yyvsp[(2) - (4)].str);
	}
    break;

  case 32:

    {
		(yyval.schemaObject) = (yyvsp[(2) - (3)].schemaObject);
		(yyvsp[(2) - (3)].schemaObject)->fName = (yyvsp[(1) - (3)].str);
	}
    break;

  case 33:

    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 34:

    {(yyval.str) = "noname";}
    break;

  case 37:

    {(yyval.schemaObject) = new TableCheckConstraintDef((yyvsp[(1) - (1)].str));}
    break;

  case 38:

    {
		if ((yyvsp[(1) - (4)].constraintType) == DDL_UNIQUE)
		    (yyval.schemaObject) = new TableUniqueConstraintDef((yyvsp[(3) - (4)].columnNameList));
        else if ((yyvsp[(1) - (4)].constraintType) == DDL_PRIMARY_KEY)
            (yyval.schemaObject) = new TablePrimaryKeyConstraintDef((yyvsp[(3) - (4)].columnNameList));
	}
    break;

  case 39:

    {
		(yyval.columnNameList) = new vector<string>;
		(yyval.columnNameList)->push_back((yyvsp[(1) - (1)].str));
	}
    break;

  case 40:

    {
		(yyval.columnNameList) = (yyvsp[(1) - (3)].columnNameList);
		(yyval.columnNameList)->push_back((yyvsp[(3) - (3)].str));
	}
    break;

  case 41:

    {(yyval.constraintType) = DDL_PRIMARY_KEY;}
    break;

  case 42:

    {(yyval.constraintType) = DDL_UNIQUE;}
    break;

  case 43:

    {
		(yyval.schemaObject) = new TableReferencesConstraintDef((yyvsp[(4) - (12)].columnNameList), (yyvsp[(7) - (12)].qualifiedName), (yyvsp[(9) - (12)].columnNameList), (yyvsp[(11) - (12)].matchType), (yyvsp[(12) - (12)].refAction));
	}
    break;

  case 45:

    {(yyval.matchType) = DDL_FULL;}
    break;

  case 46:

    {(yyval.matchType) = (yyvsp[(2) - (2)].matchType);}
    break;

  case 47:

    {(yyval.matchType) = DDL_FULL;}
    break;

  case 48:

    {(yyval.matchType) = DDL_PARTIAL;}
    break;

  case 50:

    {(yyval.refAction) = NULL;}
    break;

  case 51:

    {
		(yyval.refAction) = new ReferentialAction();
		(yyval.refAction)->fOnUpdate = (yyvsp[(1) - (2)].refActionCode);
		(yyval.refAction)->fOnDelete = (yyvsp[(2) - (2)].refActionCode);
	}
    break;

  case 52:

    {
		(yyval.refAction) = new ReferentialAction();
		(yyval.refAction)->fOnUpdate = (yyvsp[(2) - (2)].refActionCode);
		(yyval.refAction)->fOnDelete = (yyvsp[(1) - (2)].refActionCode);
	}
    break;

  case 54:

    {(yyval.refActionCode) = DDL_NO_ACTION;}
    break;

  case 56:

    {(yyval.refActionCode) = DDL_NO_ACTION;}
    break;

  case 57:

    {(yyval.refActionCode) = (yyvsp[(3) - (3)].refActionCode);}
    break;

  case 58:

    {(yyval.refActionCode) = (yyvsp[(3) - (3)].refActionCode);}
    break;

  case 59:

    {(yyval.refActionCode) = DDL_CASCADE;}
    break;

  case 60:

    {(yyval.refActionCode) = DDL_SET_NULL;}
    break;

  case 61:

    {(yyval.refActionCode) = DDL_SET_DEFAULT;}
    break;

  case 62:

    {(yyval.refActionCode) = DDL_NO_ACTION;}
    break;

  case 63:

    {(yyval.refActionCode) = DDL_RESTRICT;}
    break;

  case 64:

    {
		(yyval.tableOptionMap) = new TableOptionMap();
		(*(yyval.tableOptionMap))[(yyvsp[(1) - (1)].tableOption)->first] = (yyvsp[(1) - (1)].tableOption)->second;
		delete (yyvsp[(1) - (1)].tableOption);
	}
    break;

  case 65:

    {
		(yyval.tableOptionMap) = (yyvsp[(1) - (2)].tableOptionMap);
		(*(yyval.tableOptionMap))[(yyvsp[(2) - (2)].tableOption)->first] = (yyvsp[(2) - (2)].tableOption)->second;
		delete (yyvsp[(2) - (2)].tableOption);
	}
    break;

  case 66:

    {}
    break;

  case 67:

    {}
    break;

  case 68:

    {(yyval.tableOption) = new pair<string,string>("engine", (yyvsp[(3) - (3)].str));}
    break;

  case 69:

    {(yyval.tableOption) = new pair<string,string>("max_rows", (yyvsp[(3) - (3)].str));}
    break;

  case 70:

    {(yyval.tableOption) = new pair<string,string>("min_rows", (yyvsp[(3) - (3)].str));}
    break;

  case 71:

    {(yyval.tableOption) = new pair<string,string>("comment", (yyvsp[(3) - (3)].str));}
    break;

  case 72:

    {(yyval.tableOption) = new pair<string,string>("comment", (yyvsp[(2) - (2)].str));}
    break;

  case 73:

    {
       (yyval.tableOption) = new pair<string,string>("auto_increment", (yyvsp[(3) - (3)].str));
    }
    break;

  case 74:

    {(yyval.tableOption) = new pair<string,string>("default charset", (yyvsp[(4) - (4)].str));}
    break;

  case 75:

    {(yyval.tableOption) = new pair<string,string>("default charset", (yyvsp[(5) - (5)].str));}
    break;

  case 76:

    {
		(yyval.sqlStmt) = new AlterTableStatement((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].ataList));
	}
    break;

  case 77:

    {
		if ((yyvsp[(1) - (1)].ata) != NULL) {
			(yyval.ataList) = new AlterTableActionList();
			(yyval.ataList)->push_back((yyvsp[(1) - (1)].ata));
		}
		else {
			/* An alter_table_statement requires at least one action.
			   So, this shouldn't happen. */
			(yyval.ataList) = NULL;
		}		
	}
    break;

  case 78:

    {
		(yyval.ataList) = (yyvsp[(1) - (3)].ataList);
		(yyval.ataList)->push_back((yyvsp[(3) - (3)].ata));
	}
    break;

  case 79:

    {
		(yyval.ataList) = (yyvsp[(1) - (2)].ataList);
		(yyval.ataList)->push_back((yyvsp[(2) - (2)].ata));
	}
    break;

  case 89:

    {(yyval.ata) = new AtaTableComment((yyvsp[(3) - (3)].str));}
    break;

  case 90:

    {(yyval.ata) = new AtaTableComment((yyvsp[(2) - (2)].str));}
    break;

  case 91:

    {(yyval.ata) = new AtaModifyColumnType((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].columnType));}
    break;

  case 92:

    {(yyval.ata) = new AtaModifyColumnType((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].columnType));}
    break;

  case 93:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].columnType), NULL);}
    break;

  case 94:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].columnType), (yyvsp[(5) - (5)].columnOption));}
    break;

  case 95:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].columnType), NULL);}
    break;

  case 96:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].columnType), (yyvsp[(6) - (6)].columnOption));}
    break;

  case 97:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].columnType), (yyvsp[(5) - (5)].constraintList), NULL);}
    break;

  case 98:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].columnType), (yyvsp[(6) - (6)].constraintList), NULL);}
    break;

  case 99:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].columnType), (yyvsp[(5) - (6)].constraintList), NULL, (yyvsp[(6) - (6)].columnOption));}
    break;

  case 100:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].columnType), (yyvsp[(6) - (7)].constraintList), NULL, (yyvsp[(7) - (7)].columnOption));}
    break;

  case 101:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (5)].str), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].columnType), NULL, (yyvsp[(5) - (5)].colDefault));}
    break;

  case 102:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].columnType), NULL, (yyvsp[(6) - (6)].colDefault));}
    break;

  case 103:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].columnType), NULL, (yyvsp[(5) - (6)].colDefault), (yyvsp[(6) - (6)].columnOption));}
    break;

  case 104:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].columnType), NULL, (yyvsp[(6) - (7)].colDefault), (yyvsp[(7) - (7)].columnOption));}
    break;

  case 105:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].columnType), (yyvsp[(5) - (6)].constraintList), (yyvsp[(6) - (6)].colDefault));}
    break;

  case 106:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].columnType), (yyvsp[(6) - (7)].constraintList), (yyvsp[(7) - (7)].colDefault));}
    break;

  case 107:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].columnType), (yyvsp[(6) - (6)].constraintList), (yyvsp[(5) - (6)].colDefault));}
    break;

  case 108:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].columnType), (yyvsp[(7) - (7)].constraintList), (yyvsp[(6) - (7)].colDefault));}
    break;

  case 109:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (7)].str), (yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].columnType), (yyvsp[(5) - (7)].constraintList), (yyvsp[(6) - (7)].colDefault), (yyvsp[(7) - (7)].columnOption));}
    break;

  case 110:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (8)].str), (yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].columnType), (yyvsp[(6) - (8)].constraintList), (yyvsp[(7) - (8)].colDefault), (yyvsp[(8) - (8)].columnOption));}
    break;

  case 111:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(2) - (7)].str), (yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].columnType), (yyvsp[(6) - (7)].constraintList), (yyvsp[(5) - (7)].colDefault), (yyvsp[(7) - (7)].columnOption));}
    break;

  case 112:

    {(yyval.ata) = new AtaRenameColumn((yyvsp[(3) - (8)].str), (yyvsp[(4) - (8)].str), (yyvsp[(5) - (8)].columnType), (yyvsp[(7) - (8)].constraintList), (yyvsp[(6) - (8)].colDefault), (yyvsp[(8) - (8)].columnOption));}
    break;

  case 113:

    {
		(yyval.ata) = new AtaDropTableConstraint((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].refActionCode));
	}
    break;

  case 114:

    {(yyval.ata) = new AtaAddTableConstraint(dynamic_cast<TableConstraintDef *>((yyvsp[(2) - (2)].schemaObject)));}
    break;

  case 115:

    {(yyval.ata) = new AtaRenameTable((yyvsp[(2) - (2)].qualifiedName));}
    break;

  case 116:

    {(yyval.ata) = new AtaRenameTable((yyvsp[(3) - (3)].qualifiedName));}
    break;

  case 118:

    {(yyval.qualifiedName) = new QualifiedName((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 119:

    {
				if (x->fDBSchema.size())
					(yyval.qualifiedName) = new QualifiedName((char*)x->fDBSchema.c_str(), (yyvsp[(1) - (1)].str));
				else
				    (yyval.qualifiedName) = new QualifiedName((yyvsp[(1) - (1)].str));   
			}
    break;

  case 120:

    {(yyval.ata) = new AtaAddColumn(dynamic_cast<ColumnDef*>((yyvsp[(2) - (2)].schemaObject)));}
    break;

  case 121:

    {(yyval.ata) = new AtaAddColumn(dynamic_cast<ColumnDef*>((yyvsp[(3) - (3)].schemaObject)));}
    break;

  case 122:

    {(yyval.ata) = new AtaAddColumns((yyvsp[(3) - (4)].tableElementList));}
    break;

  case 123:

    {(yyval.ata) = new AtaAddColumns((yyvsp[(4) - (5)].tableElementList));}
    break;

  case 127:

    {(yyval.columnOption) = (yyvsp[(2) - (2)].str);}
    break;

  case 128:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].columnType), NULL, NULL );
	}
    break;

  case 129:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].columnType), (yyvsp[(4) - (4)].constraintList), NULL);
	}
    break;

  case 130:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].columnType), (yyvsp[(5) - (5)].constraintList), (yyvsp[(4) - (5)].colDefault));
	}
    break;

  case 131:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].columnType), NULL, (yyvsp[(4) - (4)].colDefault), NULL);
	}
    break;

  case 132:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].columnType), NULL, NULL, (yyvsp[(4) - (4)].columnOption) );
	}
    break;

  case 133:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].columnType), (yyvsp[(4) - (5)].constraintList), NULL, (yyvsp[(5) - (5)].columnOption));
	}
    break;

  case 134:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].columnType), (yyvsp[(5) - (6)].constraintList), (yyvsp[(4) - (6)].colDefault), (yyvsp[(6) - (6)].columnOption));
	}
    break;

  case 135:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].columnType), (yyvsp[(4) - (5)].constraintList), (yyvsp[(5) - (5)].colDefault));
	}
    break;

  case 136:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].columnType), (yyvsp[(4) - (6)].constraintList), (yyvsp[(5) - (6)].colDefault), (yyvsp[(6) - (6)].columnOption));
	}
    break;

  case 137:

    {
		(yyval.schemaObject) = new ColumnDef((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].columnType), NULL, (yyvsp[(4) - (5)].colDefault), (yyvsp[(5) - (5)].columnOption));
	}
    break;

  case 140:

    {
		(yyval.colDefault) = new ColumnDefaultValue((yyvsp[(2) - (2)].str));
	}
    break;

  case 141:

    {(yyval.colDefault) = new ColumnDefaultValue(NULL);}
    break;

  case 142:

    {(yyval.colDefault) = new ColumnDefaultValue("$USER");}
    break;

  case 143:

    {(yyval.colDefault) = new ColumnDefaultValue("$CURRENT_USER");}
    break;

  case 144:

    {(yyval.colDefault) = new ColumnDefaultValue("$SESSION_USER");}
    break;

  case 145:

    {(yyval.colDefault) = new ColumnDefaultValue("$SYSTEM_USER");}
    break;

  case 152:

    {
		(yyval.columnType) = new ColumnType(DDL_BLOB);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_BLOB];
	}
    break;

  case 153:

    {
		(yyval.columnType) = new ColumnType(DDL_CLOB);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_CLOB];
	}
    break;

  case 154:

    {
		(yyval.constraintList) = new ColumnConstraintList();
		(yyval.constraintList)->push_back((yyvsp[(1) - (1)].columnConstraintDef));
	}
    break;

  case 155:

    {
		(yyval.constraintList) = (yyvsp[(1) - (2)].constraintList);
		(yyval.constraintList)->push_back((yyvsp[(2) - (2)].columnConstraintDef));
	}
    break;

  case 156:

    {
		(yyval.columnConstraintDef) = (yyvsp[(1) - (2)].columnConstraintDef);

		if((yyvsp[(2) - (2)].constraintAttributes) != NULL)
		{
			(yyvsp[(1) - (2)].columnConstraintDef)->fDeferrable = (yyvsp[(2) - (2)].constraintAttributes)->fDeferrable;
			(yyvsp[(1) - (2)].columnConstraintDef)->fCheckTime = (yyvsp[(2) - (2)].constraintAttributes)->fCheckTime;
		}

	}
    break;

  case 157:

    {
		(yyval.columnConstraintDef) = (yyvsp[(3) - (4)].columnConstraintDef);
		(yyvsp[(3) - (4)].columnConstraintDef)->fName = (yyvsp[(2) - (4)].str);

		if((yyvsp[(4) - (4)].constraintAttributes) != NULL)
		{
			(yyvsp[(3) - (4)].columnConstraintDef)->fDeferrable = (yyvsp[(4) - (4)].constraintAttributes)->fDeferrable;
			(yyvsp[(3) - (4)].columnConstraintDef)->fCheckTime = (yyvsp[(4) - (4)].constraintAttributes)->fCheckTime;
		}
		
	}
    break;

  case 158:

    {(yyval.constraintAttributes) = (yyvsp[(1) - (1)].constraintAttributes);}
    break;

  case 159:

    {(yyval.constraintAttributes) = NULL;}
    break;

  case 160:

    {
		(yyval.constraintAttributes) = new ConstraintAttributes((yyvsp[(1) - (2)].cattr), ((yyvsp[(2) - (2)].cattr) != 0));
	}
    break;

  case 161:

    {
		(yyval.constraintAttributes) = new ConstraintAttributes((yyvsp[(2) - (2)].cattr), true);
	}
    break;

  case 163:

    {(yyval.cattr) = DDL_NON_DEFERRABLE;}
    break;

  case 164:

    {(yyval.cattr) = DDL_DEFERRABLE;}
    break;

  case 165:

    {(yyval.cattr) = DDL_INITIALLY_DEFERRED;}
    break;

  case 166:

    {(yyval.cattr) = DDL_INITIALLY_IMMEDIATE;}
    break;

  case 167:

    {(yyval.columnConstraintDef) = new ColumnConstraintDef(DDL_NOT_NULL);}
    break;

  case 168:

    {(yyval.columnConstraintDef) = new ColumnConstraintDef(DDL_UNIQUE);}
    break;

  case 169:

    {(yyval.columnConstraintDef) = new ColumnConstraintDef(DDL_PRIMARY_KEY);}
    break;

  case 170:

    {(yyval.columnConstraintDef) = new ColumnConstraintDef(DDL_AUTO_INCREMENT);}
    break;

  case 171:

    {(yyval.columnConstraintDef) = new ColumnConstraintDef((yyvsp[(1) - (1)].str));}
    break;

  case 172:

    {(yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 173:

    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 174:

    {
		(yyval.columnType) = new ColumnType(DDL_CHAR);
		(yyval.columnType)->fLength = 1;
	}
    break;

  case 175:

    {
		(yyval.columnType) = new ColumnType(DDL_CHAR);
		(yyval.columnType)->fLength = 1;
	}
    break;

  case 176:

    {
		(yyval.columnType) = new ColumnType(DDL_CHAR);
		(yyval.columnType)->fLength = atoi((yyvsp[(3) - (4)].str));
	}
    break;

  case 177:

    {
		(yyval.columnType) = new ColumnType(DDL_CHAR);
		(yyval.columnType)->fLength = atoi((yyvsp[(3) - (4)].str));
	}
    break;

  case 178:

    {
		(yyval.columnType) = new ColumnType(DDL_VARCHAR);
		(yyval.columnType)->fLength = atoi((yyvsp[(4) - (5)].str));
	}
    break;

  case 179:

    {
		(yyval.columnType) = new ColumnType(DDL_VARCHAR);
		(yyval.columnType)->fLength = atoi((yyvsp[(4) - (5)].str));
	}
    break;

  case 180:

    {
		(yyval.columnType) = new ColumnType(DDL_VARCHAR);
		(yyval.columnType)->fLength = atoi((yyvsp[(3) - (4)].str));
	}
    break;

  case 181:

    {
		(yyval.columnType) = new ColumnType(DDL_VARBINARY);
		(yyval.columnType)->fLength = atoi((yyvsp[(3) - (4)].str));
	}
    break;

  case 182:

    {
		(yyval.columnType) = new ColumnType(DDL_BLOB);
		(yyval.columnType)->fLength = atol((yyvsp[(3) - (4)].str));
	}
    break;

  case 183:

    {
		(yyval.columnType) = new ColumnType(DDL_BLOB);
		(yyval.columnType)->fLength = 65535;
	}
    break;

  case 184:

    {
		(yyval.columnType) = new ColumnType(DDL_BLOB);
		(yyval.columnType)->fLength = 255;
	}
    break;

  case 185:

    {
		(yyval.columnType) = new ColumnType(DDL_BLOB);
		(yyval.columnType)->fLength = 16777215;
	}
    break;

  case 186:

    {
		(yyval.columnType) = new ColumnType(DDL_BLOB);
		(yyval.columnType)->fLength = 2100000000;
	}
    break;

  case 187:

    {
		(yyval.columnType) = new ColumnType(DDL_TEXT);
		(yyval.columnType)->fLength = atol((yyvsp[(3) - (4)].str));
	}
    break;

  case 188:

    {
		(yyval.columnType) = new ColumnType(DDL_TEXT);
		(yyval.columnType)->fLength = 65535;
	}
    break;

  case 189:

    {
		(yyval.columnType) = new ColumnType(DDL_TEXT);
		(yyval.columnType)->fLength = 255;
	}
    break;

  case 190:

    {
		(yyval.columnType) = new ColumnType(DDL_TEXT);
		(yyval.columnType)->fLength = 16777215;
	}
    break;

  case 191:

    {
		(yyval.columnType) = new ColumnType(DDL_TEXT);
		(yyval.columnType)->fLength = 2100000000;
	}
    break;

  case 194:

    {
		(yyvsp[(2) - (2)].columnType)->fType = DDL_NUMERIC;
		(yyvsp[(2) - (2)].columnType)->fLength = DDLDatatypeLength[DDL_NUMERIC];
		(yyval.columnType) = (yyvsp[(2) - (2)].columnType);
	}
    break;

  case 195:

    {
		(yyvsp[(2) - (3)].columnType)->fType = DDL_UNSIGNED_NUMERIC;
		(yyvsp[(2) - (3)].columnType)->fLength = DDLDatatypeLength[DDL_UNSIGNED_NUMERIC];
		(yyval.columnType) = (yyvsp[(2) - (3)].columnType);
	}
    break;

  case 196:

    {
		(yyvsp[(2) - (2)].columnType)->fType = DDL_DECIMAL;
/*	   	$2->fLength = DDLDatatypeLength[DDL_DECIMAL]; */
		(yyval.columnType) = (yyvsp[(2) - (2)].columnType);
	}
    break;

  case 197:

    {
		(yyvsp[(2) - (3)].columnType)->fType = DDL_UNSIGNED_DECIMAL;
/*	   	$3->fLength = DDLDatatypeLength[DDL_DECIMAL]; */
		(yyval.columnType) = (yyvsp[(2) - (3)].columnType);
	}
    break;

  case 198:

    {
		(yyvsp[(2) - (2)].columnType)->fType = DDL_DECIMAL;
		(yyvsp[(2) - (2)].columnType)->fLength = DDLDatatypeLength[DDL_DECIMAL];
		(yyval.columnType) = (yyvsp[(2) - (2)].columnType);
	}
    break;

  case 199:

    {
		(yyvsp[(2) - (3)].columnType)->fType = DDL_UNSIGNED_DECIMAL;
		(yyvsp[(2) - (3)].columnType)->fLength = DDLDatatypeLength[DDL_UNSIGNED_DECIMAL];
		(yyval.columnType) = (yyvsp[(2) - (3)].columnType);
	}
    break;

  case 200:

    {
		(yyval.columnType) = new ColumnType(DDL_INT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_INT];
	}
    break;

  case 201:

    {
		(yyval.columnType) = new ColumnType(DDL_INT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_INT];
	}
    break;

  case 202:

    {
		(yyval.columnType) = new ColumnType(DDL_SMALLINT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_SMALLINT];
	}
    break;

  case 203:

    {
		(yyval.columnType) = new ColumnType(DDL_TINYINT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_TINYINT];
	}
    break;

  case 204:

    {
		(yyval.columnType) = new ColumnType(DDL_BIGINT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_BIGINT];
	}
    break;

  case 205:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_INT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_INT];
	}
    break;

  case 206:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_INT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_INT];
	}
    break;

  case 207:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_SMALLINT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_SMALLINT];
	}
    break;

  case 208:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_TINYINT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_TINYINT];
	}
    break;

  case 209:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_BIGINT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_BIGINT];
	}
    break;

  case 210:

    {(yyval.columnType) = new ColumnType(atoi((yyvsp[(2) - (3)].str)), 0);}
    break;

  case 211:

    {(yyval.columnType) = new ColumnType(atoi((yyvsp[(2) - (5)].str)), atoi((yyvsp[(4) - (5)].str)));}
    break;

  case 212:

    {(yyval.columnType) = new ColumnType(10,0);}
    break;

  case 213:

    {(yyval.str) = NULL;}
    break;

  case 214:

    {(yyval.str) = NULL;}
    break;

  case 215:

    {
		(yyval.columnType) = new ColumnType(DDL_DOUBLE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DOUBLE];
	}
    break;

  case 216:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_DOUBLE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DOUBLE];
	}
    break;

  case 217:

    {
		(yyval.columnType) = new ColumnType(DDL_DOUBLE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DOUBLE];
	}
    break;

  case 218:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_DOUBLE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DOUBLE];
	}
    break;

  case 219:

    {
		(yyval.columnType) = new ColumnType(DDL_DOUBLE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DOUBLE];
	}
    break;

  case 220:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_DOUBLE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DOUBLE];
	}
    break;

  case 221:

    {
		(yyval.columnType) = new ColumnType(DDL_FLOAT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_FLOAT];
	}
    break;

  case 222:

    {
		(yyval.columnType) = new ColumnType(DDL_UNSIGNED_FLOAT);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_FLOAT];
	}
    break;

  case 223:

    {(yyval.str) = NULL;}
    break;

  case 224:

    {(yyval.str) = NULL;}
    break;

  case 225:

    {(yyval.str) = NULL;}
    break;

  case 229:

    {
		(yyval.columnType) = new ColumnType(DDL_DATETIME);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DATETIME];
	}
    break;

  case 230:

    {
		(yyval.columnType) = new ColumnType(DDL_DATE);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DATE];
	}
    break;

  case 231:

    {
		(yyval.columnType) = new ColumnType(DDL_DATETIME);
		(yyval.columnType)->fLength = DDLDatatypeLength[DDL_DATETIME];
		(yyval.columnType)->fPrecision = (yyvsp[(2) - (3)].ival);
		(yyval.columnType)->fWithTimezone = (yyvsp[(3) - (3)].flag);
	}
    break;

  case 232:

    {(yyval.ival) = atoi((yyvsp[(2) - (3)].str));}
    break;

  case 233:

    {(yyval.ival) = -1;}
    break;

  case 234:

    {(yyval.flag) = true;}
    break;

  case 235:

    {(yyval.flag) = false;}
    break;

  case 236:

    {(yyval.ata) = new AtaDropColumn((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].refActionCode));}
    break;

  case 237:

    {(yyval.ata) = new AtaDropColumn((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].refActionCode));}
    break;

  case 238:

    {(yyval.ata) = new AtaDropColumns((yyvsp[(4) - (5)].columnNameList));}
    break;

  case 239:

    {(yyval.ata) = new AtaDropColumns((yyvsp[(3) - (4)].columnNameList));}
    break;

  case 240:

    {(yyval.ata) = new AtaDropColumns((yyvsp[(4) - (5)].columnNameList));}
    break;

  case 241:

    {(yyval.refActionCode) = DDL_CASCADE;}
    break;

  case 242:

    {(yyval.refActionCode) = DDL_RESTRICT;}
    break;

  case 243:

    {(yyval.refActionCode) = DDL_NO_ACTION;}
    break;

  case 244:

    {(yyval.ata) = new AtaSetColumnDefault((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].colDefault));}
    break;

  case 245:

    {(yyval.ata) = new AtaDropColumnDefault((yyvsp[(3) - (5)].str));}
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
      yyerror (x, YY_("syntax error"));
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
	    yyerror (x, yymsg);
	  }
	else
	  {
	    yyerror (x, YY_("syntax error"));
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
		      yytoken, &yylval, x);
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
		  yystos[yystate], yyvsp, x);
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
  yyerror (x, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, x);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, x);
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







