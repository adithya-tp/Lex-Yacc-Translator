/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
	int expn_type = -1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	int tab_count = 0;
	char for_var[30];
	struct symbol_table{char var_name[30]; int type;} sym[20];
	extern int lookup_in_table(char var[30]);
	extern void insert_to_table(char var[30], int type);
	extern void print_tabs();
	char var_list[20][30];	//20 variable names with each variable being atmost 50 characters long
	int string_or_var[20];
	extern int *yytext;

#line 89 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    PROC = 259,
    MAIN = 260,
    BGIN = 261,
    COLON = 262,
    END = 263,
    ASSIGNMENT = 264,
    VAR_START = 265,
    COMA = 266,
    SEMICOLON = 267,
    VAR = 268,
    READ = 269,
    LB = 270,
    RB = 271,
    WRITE = 272,
    QUOTED_STRING = 273,
    IF = 274,
    ELSE = 275,
    ENDIF = 276,
    GEQ = 277,
    LEQ = 278,
    GT = 279,
    LT = 280,
    NEQ = 281,
    DEQ = 282,
    NOT = 283,
    LAND = 284,
    LOR = 285,
    GOTO = 286,
    ELSEIF = 287,
    FOR = 288,
    TO = 289,
    DO = 290,
    ENDFOR = 291,
    ARROW_ASSIGNMENT = 292,
    PLUS = 293,
    MINUS = 294,
    MUL = 295,
    DIV = 296,
    MOD = 297,
    REPEAT = 298,
    UNTIL = 299,
    WHILE = 300,
    ENDWHILE = 301,
    INT = 302,
    CHAR = 303,
    FLOAT = 304,
    DOUBLE = 305
  };
#endif
/* Tokens.  */
#define NUMBER 258
#define PROC 259
#define MAIN 260
#define BGIN 261
#define COLON 262
#define END 263
#define ASSIGNMENT 264
#define VAR_START 265
#define COMA 266
#define SEMICOLON 267
#define VAR 268
#define READ 269
#define LB 270
#define RB 271
#define WRITE 272
#define QUOTED_STRING 273
#define IF 274
#define ELSE 275
#define ENDIF 276
#define GEQ 277
#define LEQ 278
#define GT 279
#define LT 280
#define NEQ 281
#define DEQ 282
#define NOT 283
#define LAND 284
#define LOR 285
#define GOTO 286
#define ELSEIF 287
#define FOR 288
#define TO 289
#define DO 290
#define ENDFOR 291
#define ARROW_ASSIGNMENT 292
#define PLUS 293
#define MINUS 294
#define MUL 295
#define DIV 296
#define MOD 297
#define REPEAT 298
#define UNTIL 299
#define WHILE 300
#define ENDWHILE 301
#define INT 302
#define CHAR 303
#define FLOAT 304
#define DOUBLE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "project.y" /* yacc.c:355  */

int data_type;
char var_name[30];

#line 234 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   180

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    43,    51,    51,    52,    54,    71,    89,
      71,    92,   120,   157,   158,   159,   160,   159,   162,   163,
     164,   165,   166,   167,   168,   162,   170,   171,   170,   173,
     174,   173,   176,   178,   179,   178,   184,   185,   188,   189,
     188,   193,   193,   197,   197,   201,   207,   211,   215,   219,
     224,   224,   229,   229,   233,   238,   243,   243,   247,   252,
     252,   253,   253,   254,   254,   255,   255,   256,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   264,   264,   265,   267,   285
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "PROC", "MAIN", "BGIN",
  "COLON", "END", "ASSIGNMENT", "VAR_START", "COMA", "SEMICOLON", "VAR",
  "READ", "LB", "RB", "WRITE", "QUOTED_STRING", "IF", "ELSE", "ENDIF",
  "GEQ", "LEQ", "GT", "LT", "NEQ", "DEQ", "NOT", "LAND", "LOR", "GOTO",
  "ELSEIF", "FOR", "TO", "DO", "ENDFOR", "ARROW_ASSIGNMENT", "PLUS",
  "MINUS", "MUL", "DIV", "MOD", "REPEAT", "UNTIL", "WHILE", "ENDWHILE",
  "INT", "CHAR", "FLOAT", "DOUBLE", "$accept", "prm", "$@1", "STATEMENTS",
  "$@2", "STATEMENT", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "IF_BLOCK", "$@18", "$@19", "ELSEIF_BLOCKS", "ELSEIF_BLOCK", "$@20",
  "$@21", "ELSE_BLOCK", "$@22", "VAR_LIST", "$@23", "TYPE",
  "WRITE_VAR_LIST", "$@24", "$@25", "READ_VAR_LIST", "$@26", "A_EXPN",
  "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "TERMINALS", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,     8,    26,    22,   -48,    44,   -48,   -48,    46,    48,
      -8,   -48,    39,    49,    64,    65,    67,   -48,    73,   -48,
      81,   -48,    42,    90,    96,   -48,    95,    94,    35,   -48,
      98,   -48,   -48,   -48,   -48,   -10,    97,    45,   -48,   105,
     108,   110,   111,   112,    78,   -48,    99,    69,    78,   -48,
     115,   -48,   120,    39,   -48,   -48,   -48,   -48,   102,    78,
     134,   132,   135,   136,   137,   -48,   -48,   -48,    20,   -48,
     138,   -48,   146,    60,   -48,   -48,   -48,   -48,   -48,    -9,
      94,   -48,    35,    35,   -48,    78,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     127,   -48,   130,   145,    78,   -48,   -48,   -48,   -48,   -48,
     -48,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,   -48,    78,   -48,    93,   -13,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
      21,   113,   -48,   -48,   -48,   -48,   121,   -48,   114,   -48,
       7,   -48,    78,   133,   152,   141,   -48,   -48,   142,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     2,     6,     4,     0,
       0,     3,     0,     8,     0,     0,     0,    15,     0,    26,
       0,     5,    37,    43,     0,    32,     0,     0,     0,    33,
       0,    18,     6,    29,    14,     0,     0,     0,     9,    56,
       0,    52,    50,     0,     0,    16,     0,     4,     0,    41,
       0,    36,     0,     0,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,    87,    86,    73,     0,    85,
       0,    19,     0,     0,     6,    38,    13,    44,     7,     0,
       0,    11,     0,     0,    12,     0,    34,    63,    65,    67,
      69,    71,    59,    61,    75,    77,    79,    81,    83,    17,
       0,    27,     0,     4,     0,    10,    57,    53,    51,    74,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    30,     0,     4,    64,    66,
      68,    70,    72,    60,    62,    76,    78,    80,    82,    84,
       0,     0,     6,    39,    21,    28,     4,     6,     0,    31,
       4,    22,     0,    23,     0,     0,    24,     6,     4,    25
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -48,   -32,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     116,   -48,   -48,   -42,   -48,   -48,   100,   -48,   -47,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,    30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    10,    21,    26,    59,    30,    70,
      46,   100,   140,   148,   152,   154,   157,    32,   124,    48,
     142,    22,    44,   110,    35,    51,   104,   147,    52,    74,
      24,    36,    58,    43,    63,    62,    40,    60,    68,   116,
     117,   111,   112,   113,   114,   115,    85,   118,   119,   120,
     121,   122,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    73,    12,   105,     1,    13,    14,   -35,   -35,    15,
      49,    16,    79,     3,    87,    88,    89,    90,    91,   -35,
      92,    93,    50,    17,    65,    18,     4,   -40,     5,    94,
      95,    96,    97,    98,    66,    19,    86,    20,   109,   -40,
     107,   108,   103,    87,    88,    89,    90,    91,    41,    92,
      93,     6,    23,    42,     9,    11,    25,   126,    94,    95,
      96,    97,    98,    34,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   102,   141,   127,    27,
      28,    65,    29,    87,    88,    89,    90,    91,    31,    92,
      93,    66,    54,    55,    56,    57,    33,   -45,    94,    95,
      96,    97,    98,    37,    38,   153,    67,    39,    53,   143,
     146,    45,    71,    72,    78,   150,    87,    88,    89,    90,
      91,   -58,    92,    93,    61,   158,   -55,   -54,    64,   145,
      75,    94,    95,    96,    97,    98,    87,    88,    89,    90,
      91,    76,    92,    93,    81,    80,    82,    83,   151,    84,
      99,    94,    95,    96,    97,    98,    87,    88,    89,    90,
      91,   101,    92,    93,   123,   125,   -42,   149,   155,    77,
     144,    94,    95,    96,    97,    98,   156,     0,   159,     0,
     106
};

static const yytype_int16 yycheck[] =
{
      32,    48,    10,    12,     4,    13,    14,    20,    21,    17,
      20,    19,    59,     5,    23,    24,    25,    26,    27,    32,
      29,    30,    32,    31,     3,    33,     0,    20,     6,    38,
      39,    40,    41,    42,    13,    43,    16,    45,    85,    32,
      82,    83,    74,    23,    24,    25,    26,    27,    13,    29,
      30,     7,    13,    18,     8,     7,     7,   104,    38,    39,
      40,    41,    42,    21,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    16,   124,   110,    15,
      15,     3,    15,    23,    24,    25,    26,    27,    15,    29,
      30,    13,    47,    48,    49,    50,    15,     7,    38,    39,
      40,    41,    42,     7,     9,   152,    28,    13,    11,    16,
     142,    13,    13,    44,    12,   147,    23,    24,    25,    26,
      27,    16,    29,    30,    16,   157,    16,    16,    16,    16,
      15,    38,    39,    40,    41,    42,    23,    24,    25,    26,
      27,    21,    29,    30,    12,    11,    11,    11,    34,    12,
      12,    38,    39,    40,    41,    42,    23,    24,    25,    26,
      27,    15,    29,    30,    37,    35,    21,    46,    16,    53,
     140,    38,    39,    40,    41,    42,    35,    -1,    36,    -1,
      80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    52,     5,     0,     6,     7,    53,    54,     8,
      55,     7,    10,    13,    14,    17,    19,    31,    33,    43,
      45,    56,    72,    13,    81,     7,    57,    15,    15,    15,
      59,    15,    68,    15,    21,    75,    82,     7,     9,    13,
      87,    13,    18,    84,    73,    13,    61,    54,    70,    20,
      32,    76,    79,    11,    47,    48,    49,    50,    83,    58,
      88,    16,    86,    85,    16,     3,    13,    28,    89,   103,
      60,    13,    44,    89,    80,    15,    21,    81,    12,    89,
      11,    12,    11,    11,    12,    97,    16,    23,    24,    25,
      26,    27,    29,    30,    38,    39,    40,    41,    42,    12,
      62,    15,    16,    54,    77,    12,    87,    84,    84,    89,
      74,    92,    93,    94,    95,    96,    90,    91,    98,    99,
     100,   101,   102,    37,    69,    35,    89,    54,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      63,    89,    71,    16,   103,    16,    54,    78,    64,    46,
      54,    34,    65,    89,    66,    16,    35,    67,    54,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    53,    52,    55,    54,    54,    56,    57,    58,
      56,    56,    56,    56,    56,    59,    60,    56,    61,    62,
      63,    64,    65,    66,    67,    56,    68,    69,    56,    70,
      71,    56,    56,    73,    74,    72,    75,    75,    77,    78,
      76,    80,    79,    82,    81,    81,    83,    83,    83,    83,
      85,    84,    86,    84,    84,    84,    88,    87,    87,    90,
      89,    91,    89,    92,    89,    93,    89,    94,    89,    95,
      89,    96,    89,    97,    89,    98,    89,    99,    89,   100,
      89,   101,    89,   102,    89,    89,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     8,     0,     3,     0,     5,     0,     0,
       6,     5,     5,     4,     2,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     8,     0,
       0,     9,     2,     0,     0,     7,     2,     0,     0,     0,
       7,     0,     3,     0,     4,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     1,     1,     0,     4,     1,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     3,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 43 "project.y" /* yacc.c:1646  */
    {
						printf("#include<stdio.h>\nint main()\n{\n");
						tab_count++;
					}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 47 "project.y" /* yacc.c:1646  */
    {
						printf("}\n");
					}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 51 "project.y" /* yacc.c:1646  */
    {print_tabs();}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "project.y" /* yacc.c:1646  */
    {
						if(current_data_type == 0)
							printf("int ");
						else if(current_data_type == 1)
							printf("char ");
						else if(current_data_type == 2)
							printf("float ");
						else if(current_data_type == 3)
							printf("double ");
						for(int i = 0; i < idx - 1; i++){
							insert_to_table(var_list[i], current_data_type);	
							printf("%s,", var_list[i]);
						}
						insert_to_table(var_list[idx - 1], current_data_type);
						printf("%s;\n", var_list[idx - 1]);
						idx = 0;
					}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "project.y" /* yacc.c:1646  */
    {
							printf("%s", yylval.var_name);
							if((temp=lookup_in_table(yylval.var_name))!=-1) {
								if(expn_type==-1)
									expn_type=temp;
								else if(expn_type!=temp) {
									printf("\n type mismatch in the expression\n");
									yyerror("");
									exit(0);
								}
							}
							else {
								printf("\n variable \" %s\" undeclared\n", yylval.var_name);
								yyerror("");
								exit(0);
							}
							expn_type=-1;
					}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 89 "project.y" /* yacc.c:1646  */
    {printf("=");}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "project.y" /* yacc.c:1646  */
    {
						printf(";\n");
					}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "project.y" /* yacc.c:1646  */
    {
						printf("scanf(\"");
						for(int i = 0; i < idx; i++) {
							if((temp=lookup_in_table(var_list[i])) != -1) {
								if(temp==0)
									printf("%%d");
								else if(temp==1)
									printf("%%c");
								else if(temp==2)
									printf("%%f");
								else
									printf("%%e");
							}
							else
							{
								printf("Cannot read undeclared variable %s !", yylval.var_name);
								yyerror("");
								exit(0);
							}
						}
						printf("\"");
						for(int i = 0; i < idx; i++) {
							printf(",&%s", var_list[i]);
						}
						printf(");\n");
						idx=0;
					}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 120 "project.y" /* yacc.c:1646  */
    {
						char *s;
						printf("printf(\"");
						for(int i = 0; i < idx; i++) {
							if(string_or_var[i] == 1) {
								s = var_list[i];
								s++;
								s[strlen(s)-1] = 0;
								printf("%s", s);
							}
							else {	
								if((temp=lookup_in_table(var_list[i])) != -1) {
									if(temp==0)
										printf("%%d");
									else if(temp==1)
										printf("%%c");
									else if(temp==2)
										printf("%%f");
									else
										printf("%%e");
								}
								else
								{
									printf("Cannot read undeclared variable %s !", yylval.var_name);
									yyerror("");
									exit(0);
								}
							}
						}
						printf("\"");
						for(int i = 0; i < idx; i++) {
							if(string_or_var[i] != 1)
								printf(",%s", var_list[i]);
						}
						printf(");\n");
						idx = 0;
					}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 159 "project.y" /* yacc.c:1646  */
    {printf("goto ");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 160 "project.y" /* yacc.c:1646  */
    {printf("%s", yylval.var_name);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 161 "project.y" /* yacc.c:1646  */
    {printf(";\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "project.y" /* yacc.c:1646  */
    {printf("for(");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "project.y" /* yacc.c:1646  */
    {strcpy(for_var, yylval.var_name); printf("%s", for_var);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 164 "project.y" /* yacc.c:1646  */
    {printf("=");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 165 "project.y" /* yacc.c:1646  */
    {printf("; %s", for_var);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 166 "project.y" /* yacc.c:1646  */
    {printf("<=");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 167 "project.y" /* yacc.c:1646  */
    {printf("; %s++", for_var);}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 168 "project.y" /* yacc.c:1646  */
    {printf("){\n"); tab_count++;}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 169 "project.y" /* yacc.c:1646  */
    {tab_count--;print_tabs();printf("}\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 170 "project.y" /* yacc.c:1646  */
    {printf("do{\n");tab_count++;}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 171 "project.y" /* yacc.c:1646  */
    {tab_count--;print_tabs();printf("}while(");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 172 "project.y" /* yacc.c:1646  */
    {printf(");\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 173 "project.y" /* yacc.c:1646  */
    {tab_count++; printf("while(");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 174 "project.y" /* yacc.c:1646  */
    {printf("){\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 175 "project.y" /* yacc.c:1646  */
    {tab_count--;print_tabs();printf("}\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "project.y" /* yacc.c:1646  */
    {printf("\b\b\b\b\b\b\b\b%s:\n", yylval.var_name);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 178 "project.y" /* yacc.c:1646  */
    {printf("if(");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 179 "project.y" /* yacc.c:1646  */
    {printf("){\n");tab_count++;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 181 "project.y" /* yacc.c:1646  */
    {tab_count--;print_tabs();printf("}\n");}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 188 "project.y" /* yacc.c:1646  */
    {print_tabs();printf("else if(");}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 189 "project.y" /* yacc.c:1646  */
    {printf("){\n");tab_count++;}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 191 "project.y" /* yacc.c:1646  */
    {tab_count--;print_tabs();printf("}\n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 193 "project.y" /* yacc.c:1646  */
    {print_tabs();printf("else{\n");tab_count++;}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 195 "project.y" /* yacc.c:1646  */
    {tab_count--;print_tabs();printf("}\n");}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 197 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], (yyvsp[0].var_name)); 
						idx++;
					}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 201 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], (yyvsp[0].var_name)); 
						idx++;
					}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 207 "project.y" /* yacc.c:1646  */
    {
						(yyval.data_type)=(yyvsp[0].data_type);
						current_data_type=(yyvsp[0].data_type);	
					}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 211 "project.y" /* yacc.c:1646  */
    {
						(yyval.data_type)=(yyvsp[0].data_type);
						current_data_type=(yyvsp[0].data_type);
					}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 215 "project.y" /* yacc.c:1646  */
    {
						(yyval.data_type)=(yyvsp[0].data_type);
						current_data_type=(yyvsp[0].data_type);
					}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 219 "project.y" /* yacc.c:1646  */
    {
						(yyval.data_type)=(yyvsp[0].data_type);
						current_data_type=(yyvsp[0].data_type); 
					}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 224 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], yylval.var_name); 
						string_or_var[idx]=1; 
						idx++;
					}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 229 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], yylval.var_name); 
						idx++;
					}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 233 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], yylval.var_name);
						string_or_var[idx]=1;
						idx++;
					}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 238 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], yylval.var_name);
						idx++;
					}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 243 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], yylval.var_name); 
						idx++;
					}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 247 "project.y" /* yacc.c:1646  */
    {
						strcpy(var_list[idx], yylval.var_name); 
						idx++;
					}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 252 "project.y" /* yacc.c:1646  */
    {printf("&&");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 253 "project.y" /* yacc.c:1646  */
    {printf("||");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 254 "project.y" /* yacc.c:1646  */
    {printf("<=");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 255 "project.y" /* yacc.c:1646  */
    {printf(">");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 256 "project.y" /* yacc.c:1646  */
    {printf("<");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 257 "project.y" /* yacc.c:1646  */
    {printf("!=");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 258 "project.y" /* yacc.c:1646  */
    {printf("==");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 259 "project.y" /* yacc.c:1646  */
    {printf("!");}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 260 "project.y" /* yacc.c:1646  */
    {printf("+");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 261 "project.y" /* yacc.c:1646  */
    {printf("-");}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 262 "project.y" /* yacc.c:1646  */
    {printf("*");}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 263 "project.y" /* yacc.c:1646  */
    {printf("/");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 264 "project.y" /* yacc.c:1646  */
    {printf("%%");}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 267 "project.y" /* yacc.c:1646  */
    {
						if((temp=lookup_in_table(yylval.var_name))!=-1) {
							printf("%s", yylval.var_name);
							if(expn_type==-1){
								expn_type=temp;
							}
							else if(expn_type!=temp){
								printf("\ntype mismatch in the expression\n");
								yyerror("");
								exit(0);
							}
						}
						else{
							printf("\n variable \"%s\" undeclared\n", yylval.var_name);
							yyerror("");
							exit(0);
						}
					}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 285 "project.y" /* yacc.c:1646  */
    {printf("%s", yylval.var_name);}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1980 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 288 "project.y" /* yacc.c:1906  */


int lookup_in_table(char var[30])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym[i].var_name, var)==0)
			return sym[i].type;
	}
	return -1;
}

void insert_to_table(char var[30], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym[table_idx].var_name,var);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}

void print_tabs() {
	for(int i = 0; i < tab_count; i++){
		printf("\t");
	}
	return;
}

int main() {
	yyparse();
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Parsing failed\nLine number: %d %s\n", yylineno, msg);
	success = 0;
	return 0;
}
