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
#line 1 "syntaxique.y" /* yacc.c:339  */

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdarg.h>
    extern int line;
    #include "semantic.h"
    #include "type_comparator.h"
    #include "compilateurE/generator.h"   
    #define YYERROR_VERBOSE
    s_list * insert_s_list(s_list **head,char *operation);
    char* concat(const char * args,...);
    void fprint_s_list(s_list *head,char *separator);
    void init_op_type(op_type *opr);
    void chain_s_list(s_list *list1,s_list *list2);

    char * convert_assignment(char * lvalue, int  ASSIGNMENTOP);
    void yyerror(const char *s);

    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    extern id_list *id_table;
    char lang;



#line 94 "syntaxique.tab.c" /* yacc.c:339  */

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
   by #include "syntaxique.tab.h".  */
#ifndef YY_YY_SYNTAXIQUE_TAB_H_INCLUDED
# define YY_YY_SYNTAXIQUE_TAB_H_INCLUDED
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
    DEFINE = 258,
    INCLUDE = 259,
    AUTO = 260,
    STRUCT = 261,
    DOUBLE = 262,
    INT = 263,
    LONG = 264,
    SHORT = 265,
    CHAR = 266,
    FLOAT = 267,
    CONST = 268,
    SIGNED = 269,
    SIZEOF = 270,
    TYPEDEF = 271,
    RETURN = 272,
    VOID = 273,
    STATIC = 274,
    UNSIGNED = 275,
    ENUM = 276,
    EXTERN = 277,
    REGISTER = 278,
    UNION = 279,
    VOLATILE = 280,
    WHILE = 281,
    DO = 282,
    FOR = 283,
    IF = 284,
    ELSE = 285,
    SWITCH = 286,
    CASE = 287,
    BREAK = 288,
    DEFAULT = 289,
    GOTO = 290,
    CONTINUE = 291,
    VALINT = 292,
    VALREAL = 293,
    VALCHAR = 294,
    VALSTR = 295,
    ID = 296,
    ADD = 297,
    MINUS = 298,
    MULT = 299,
    DIVIDE = 300,
    MOD = 301,
    INCR = 302,
    DECR = 303,
    EQUAL = 304,
    DIF = 305,
    SUP = 306,
    INF = 307,
    SUPEQ = 308,
    INFEQ = 309,
    AND = 310,
    OR = 311,
    NOT = 312,
    BAND = 313,
    BOR = 314,
    BXOR = 315,
    BOC = 316,
    LSHIFT = 317,
    RSHIFT = 318,
    ASSADD = 319,
    ASSMINUS = 320,
    ASSMULT = 321,
    ASSDIVIDE = 322,
    ASSMOD = 323,
    ASSBAND = 324,
    ASSBOR = 325,
    ASSBXOR = 326,
    ASSLSHIFT = 327,
    ASSRSHIFT = 328,
    EL = 329,
    HEAD = 330,
    END = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 82 "syntaxique.y" /* yacc.c:355  */

  nb_modif modif;
  nb_vis vis;
  type_rep rep;
  op_type op;
  local_type loc;
  decl_type decl;
  char *code;
  int t_val;
  s_list *exp;

#line 223 "syntaxique.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAXIQUE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "syntaxique.tab.c" /* yacc.c:358  */

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   746

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  184
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  307

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    87,     2,     2,     2,     2,
      78,    79,     2,     2,    85,     2,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,     2,
       2,    77,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,     2,    84,     2,     2,     2,     2,
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
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    96,    97,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   109,   110,   112,   114,   116,   118,
     119,   122,   123,   124,   126,   128,   129,   132,   135,   138,
     139,   140,   143,   144,   145,   147,   148,   151,   153,   154,
     157,   158,   161,   162,   163,   164,   165,   166,   167,   168,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     183,   186,   187,   188,   189,   192,   193,   196,   200,   203,
     207,   210,   211,   214,   217,   218,   221,   222,   225,   228,
     231,   234,   237,   238,   239,   242,   246,   247,   248,   251,
     254,   255,   256,   257,   258,   261,   262,   263,   266,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     294,   295,   296,   297,   300,   301,   302,   303,   304,   307,
     308,   309,   310,   311,   312,   315,   316,   319,   320,   321,
     322,   323,   324,   326,   327,   330,   331,   332,   334,   335,
     336,   338,   339,   342,   343,   346,   347,   348,   349,   352,
     353,   354,   355,   356,   358,   359,   360,   361,   362,   364,
     365,   366,   369,   370,   371,   372,   375,   376,   377,   378,
     381,   382,   383,   384,   385
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFINE", "INCLUDE", "AUTO", "STRUCT",
  "DOUBLE", "INT", "LONG", "SHORT", "CHAR", "FLOAT", "CONST", "SIGNED",
  "SIZEOF", "TYPEDEF", "RETURN", "VOID", "STATIC", "UNSIGNED", "ENUM",
  "EXTERN", "REGISTER", "UNION", "VOLATILE", "WHILE", "DO", "FOR", "IF",
  "ELSE", "SWITCH", "CASE", "BREAK", "DEFAULT", "GOTO", "CONTINUE",
  "VALINT", "VALREAL", "VALCHAR", "VALSTR", "ID", "ADD", "MINUS", "MULT",
  "DIVIDE", "MOD", "INCR", "DECR", "EQUAL", "DIF", "SUP", "INF", "SUPEQ",
  "INFEQ", "AND", "OR", "NOT", "BAND", "BOR", "BXOR", "BOC", "LSHIFT",
  "RSHIFT", "ASSADD", "ASSMINUS", "ASSMULT", "ASSDIVIDE", "ASSMOD",
  "ASSBAND", "ASSBOR", "ASSBXOR", "ASSLSHIFT", "ASSRSHIFT", "EL", "HEAD",
  "END", "'='", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','",
  "':'", "'#'", "$accept", "CODE", "GLOBAL", "SIZEOFDEF", "GOTODEF",
  "ENUMDEF", "UNIONDEF", "UNIONARGS", "ENUMARGS", "LABEL", "INCLUDES",
  "DEFINES", "FUNCTION", "LVALUE", "ARGS", "TYPEDEFINITION", "STRUCTURE",
  "DECLARATIONSTRUCTURE", "X", "LOCAL", "LINE", "SWITCHCOND",
  "SWITCHINSIDE", "CASEAFTER", "CASE1", "DEFAULT1", "DEFAULT2", "FORLOOP",
  "EXPRESSION", "CODEBLOCK", "CONDITIONALS", "CONDCODE", "WHILELOOP",
  "DOWHILE", "GLOBALDECLARATION", "DECLARATION", "SDEFINITION",
  "SASSIGNMENT", "GLOBALDEFINITION", "GLOBALASSIGNMENT", "GLOBALOPERATION",
  "DEFINITION", "ASSIGNMENT", "ASSIGNMENTOP", "OPERATION", "OPERATOR",
  "ARITHMETIC", "RELATIONAL", "LOGICAL", "BITWISE", "NAME", "RVALUE",
  "ARGDEFINITION", "IDS", "STAR", "VALUE", "TYPE", "TWO", "THREE",
  "MODIFIER", "VISIBILITY", "BASICTYPE", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    61,    40,    41,
      91,    93,    46,   123,   125,    44,    58,    35
};
# endif

#define YYPACT_NINF -272

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-272)))

#define YYTABLE_NINF -153

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,  -272,    -5,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
     -17,   704,  -272,  -272,  -272,    35,  -272,  -272,    44,  -272,
      70,   100,   108,    59,    61,    76,  -272,  -272,  -272,    83,
      98,   111,    25,   723,   723,   357,   107,   129,    25,    25,
     116,   118,    68,   -27,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,   112,  -272,    77,   117,  -272,    25,  -272,   723,
     723,   357,  -272,  -272,   357,   357,   723,  -272,  -272,  -272,
    -272,    82,    25,    25,   251,   162,   251,  -272,   141,   598,
    -272,  -272,   105,  -272,   125,  -272,  -272,   167,   723,   142,
    -272,  -272,   251,  -272,    12,   723,    25,  -272,  -272,  -272,
    -272,  -272,  -272,   131,    25,   162,  -272,  -272,   486,   127,
    -272,   620,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
    -272,  -272,  -272,  -272,   251,  -272,  -272,  -272,  -272,   567,
    -272,   139,   109,   148,   184,  -272,   168,  -272,    12,  -272,
     486,  -272,   154,    25,   157,   117,  -272,  -272,   -63,  -272,
    -272,   486,  -272,   391,  -272,   486,   -55,   142,  -272,   167,
    -272,   161,  -272,   642,    12,   153,   176,   723,    25,  -272,
    -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,  -272,
     251,  -272,   251,  -272,   183,   723,  -272,   486,  -272,   723,
    -272,   185,   486,   193,  -272,   236,  -272,   129,   204,   555,
     207,   208,   209,   165,   255,   223,    26,  -272,  -272,   226,
     227,   228,  -272,   229,   230,  -272,  -272,  -272,   238,  -272,
    -272,  -272,  -272,  -272,   231,  -272,   486,    25,   239,   251,
    -272,  -272,   289,   129,   251,   251,  -272,  -272,  -272,  -272,
     316,  -272,  -272,  -272,  -272,  -272,  -272,   251,   240,   233,
    -272,  -272,   -48,   263,   272,   -23,    14,  -272,   231,   251,
      25,   555,   251,   129,   555,   265,   486,   233,  -272,    74,
     276,   328,    -6,   291,   129,   555,   142,   282,   285,    -6,
     338,  -272,  -272,   293,  -272,   292,  -272,  -272,  -272,  -272,
     338,   298,  -272,   396,  -272,  -272,   476
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   176,     0,   181,   180,   173,   172,   183,   182,   174,
       0,     0,   184,   178,   175,     0,   179,   177,     0,     3,
       0,     0,     2,     0,     0,     0,     5,     6,     7,     0,
       0,     0,     0,   162,     0,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     4,    11,    12,    13,     9,
      10,     8,    30,   154,    88,    80,    87,     0,   159,   167,
       0,   166,   163,   160,   171,     0,    38,   155,   156,   157,
     158,    30,     0,     0,     0,     0,     0,   119,   144,     0,
     114,   143,     0,   113,     0,    36,    35,     0,    20,     0,
      26,    25,     0,   153,     0,    32,     0,    29,   164,   168,
     165,   169,   170,     0,     0,     0,   115,   116,   112,   152,
     145,     0,   117,   118,   125,   124,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,    14,     0,   120,   121,   122,   123,     0,
      15,    22,     0,     0,     0,    27,     0,    92,     0,    94,
      89,    93,     0,     0,    88,    86,    37,    41,     0,   151,
     111,   110,   147,   144,   150,   149,     0,     0,    17,     0,
      18,     0,    31,     0,     0,     0,    34,    38,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    99,
       0,   146,     0,    23,    21,    20,    91,    90,    42,    32,
      39,    40,    98,   148,    19,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    42,    28,     0,
       0,     0,    56,     0,     0,    43,    49,    48,     0,    44,
      45,    46,    47,    72,    71,    97,    96,     0,     0,     0,
      77,    76,     0,     0,     0,     0,    52,    16,    59,    24,
       0,    55,    57,    58,    54,    53,    50,     0,    84,    81,
      83,    51,     0,     0,     0,     0,     0,    73,    95,     0,
       0,     0,     0,     0,     0,     0,    85,    82,    78,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,    63,
       0,    64,    79,     0,    75,     0,    42,    60,    61,    62,
      66,     0,    42,    68,    65,    70,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -272,   353,  -272,    17,  -272,    21,    79,   187,   214,  -272,
    -272,  -272,  -272,   -32,   189,   103,    75,   212,   206,  -214,
    -193,  -272,   104,    92,  -271,  -272,  -272,  -272,  -189,  -194,
    -272,  -129,  -272,  -272,  -272,  -272,   126,  -272,   299,  -272,
    -128,  -174,  -137,  -272,   -29,  -140,  -272,  -272,  -272,  -272,
    -272,  -272,   205,   -71,   345,   -80,     1,   138,   110,   246,
     326,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    77,   219,   220,   221,   143,   142,   222,
      26,    27,    28,   163,   152,   223,   224,   103,   158,   205,
     225,   226,   288,   299,   289,   290,   291,   227,   228,   229,
     230,   242,   231,   232,    31,   233,   259,   260,    55,    56,
     150,   234,   235,   190,   236,   134,   135,   136,   137,   138,
      80,    81,   166,    82,    57,    83,   237,    58,    63,    33,
      34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    32,   164,   250,   110,    78,    85,    86,    79,   145,
     174,   177,    39,    90,   151,   241,   240,    23,   238,   300,
     173,    24,   178,    32,   191,    97,   286,    10,   287,   300,
     192,   271,    61,   174,   159,    62,    36,   257,    84,    23,
     106,   107,    78,    24,    78,   108,   197,   111,    91,    67,
      68,    69,    70,   147,   264,   164,   274,   174,    61,    61,
      78,    37,   257,   146,   154,   262,    52,   104,   151,    53,
     265,   266,   157,    42,    43,    30,    40,   241,   240,    25,
     241,   240,   303,   268,   280,    41,    38,   193,   306,   144,
     148,   241,   240,   275,   151,   293,   153,    30,   279,   257,
      44,    25,    78,    29,  -152,   161,    92,   305,   105,    89,
     165,   149,   249,     1,     2,     3,     4,     5,     6,     7,
       8,   176,     9,    10,    11,    29,    12,    13,    14,    15,
      16,    17,    18,    46,     1,    47,     3,     4,     5,     6,
       7,     8,   278,     9,    10,   281,   157,    12,    13,    14,
      48,    16,    17,   283,    94,    95,   294,    49,    78,   257,
    -152,   202,    92,   165,   105,   149,    67,    68,    69,    70,
      71,   100,    50,    53,   101,   102,    72,    73,   104,    67,
      68,    69,    70,   139,    19,    51,    74,    75,   112,   113,
      66,   149,    92,   168,   169,    20,   144,    98,    99,    87,
     153,    88,    96,   109,   140,   258,   295,    76,   141,   105,
     114,   115,   116,   117,   118,   156,   167,   119,   120,   121,
     122,   123,   124,   125,   126,   171,   127,   128,   129,   130,
     131,   132,   170,   175,    94,   195,   198,    78,   258,   246,
     276,     1,     2,     3,     4,     5,     6,     7,     8,   172,
       9,    10,    11,   207,    12,    13,    14,    15,    16,    17,
      18,   199,   208,   209,   210,   211,    10,   212,   169,   213,
     178,   214,   215,    67,    68,    69,    70,   216,   192,    59,
      53,    64,   239,    72,    73,   243,   244,   245,    67,    68,
      69,    70,    71,    74,    75,    53,   247,   248,    72,    73,
     251,   252,   253,   254,   255,    59,    59,    64,    74,    75,
      64,    64,   256,   261,    76,   263,   257,   269,   270,   217,
     218,     1,     2,     3,     4,     5,     6,     7,     8,    76,
       9,    10,    11,   207,    12,    13,    14,    15,    16,    17,
      18,   272,   208,   209,   210,   211,   273,   212,   282,   213,
     284,   214,   215,    67,    68,    69,    70,   216,   285,    60,
      53,    65,     1,    72,    73,   292,     5,     6,   296,   297,
     286,     9,   301,    74,    75,    45,    13,    14,   302,    16,
      17,   217,   204,   194,   201,    60,    60,    65,   206,   200,
      65,    65,   304,   298,    76,   155,   277,   203,    93,   217,
     267,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,   207,    12,    13,    14,    15,    16,    17,
      18,     0,   208,   209,   210,   211,     0,   212,     0,   213,
       0,   214,   215,    67,    68,    69,    70,   216,   112,   113,
      53,     0,     0,    72,    73,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,     0,     0,     0,   189,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,   217,
     -69,     1,     2,     3,     4,     5,     6,     7,     8,     0,
       9,    10,    11,   207,    12,    13,    14,    15,    16,    17,
      18,     0,   208,   209,   210,   211,     0,   212,     0,   213,
       0,   214,   215,    67,    68,    69,    70,   216,     0,     0,
      53,     0,     0,    72,    73,     0,     0,     0,   114,   115,
     116,   117,   118,    74,    75,   119,   120,   121,   122,   123,
     124,   125,   126,     0,   127,   128,   129,   130,   131,   132,
       0,     0,     0,     0,    76,     0,     0,     0,     0,   217,
       1,     2,     3,     4,     5,     6,     7,     8,     0,     9,
      10,    11,   207,    12,    13,    14,    15,    16,    17,    18,
       0,     0,    10,     0,     0,     0,     0,     0,   213,     0,
     214,   215,    67,    68,    69,    70,   216,     0,     0,    53,
       0,     0,    72,    73,    67,    68,    69,    70,    71,     0,
       0,    53,    74,    75,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    75,     0,     0,     0,     0,
       0,     0,     0,    76,     0,     0,     0,     0,   217,     0,
     114,   115,   116,   117,   118,    76,   162,   119,   120,   121,
     122,   123,   124,   125,   126,     0,   127,   128,   129,   130,
     131,   132,   114,   115,   116,   117,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   133,   127,   128,
     129,   130,   131,   132,   114,   115,   116,   117,   118,     0,
       0,   119,   120,   121,   122,   123,   124,   125,   126,   160,
     127,   128,   129,   130,   131,   132,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     0,     9,     0,
       0,   196,    12,    13,    14,     0,    16,    17,     1,     0,
       3,     4,     5,     6,     7,     8,     0,     9,     0,     0,
       0,    12,    13,    14,     0,    16,    17
};

static const yytype_int16 yycheck[] =
{
      32,     0,   139,   217,    75,    37,    38,    39,    37,    89,
     150,    74,    11,    40,    94,   209,   209,     0,   207,   290,
     148,     0,    85,    22,    79,    57,    32,    15,    34,   300,
      85,    79,    33,   173,   105,    34,    41,    85,    37,    22,
      72,    73,    74,    22,    76,    74,   174,    76,    75,    37,
      38,    39,    40,    41,   243,   192,    79,   197,    59,    60,
      92,    78,    85,    92,    96,   239,    41,    66,   148,    44,
     244,   245,   104,     3,     4,     0,    41,   271,   271,     0,
     274,   274,   296,   257,   273,    41,    11,   167,   302,    88,
      78,   285,   285,    79,   174,   284,    95,    22,   272,    85,
       0,    22,   134,     0,    78,   134,    80,   301,    82,    41,
     139,    94,    86,     5,     6,     7,     8,     9,    10,    11,
      12,   153,    14,    15,    16,    22,    18,    19,    20,    21,
      22,    23,    24,    74,     5,    74,     7,     8,     9,    10,
      11,    12,   271,    14,    15,   274,   178,    18,    19,    20,
      74,    22,    23,    79,    77,    78,   285,    74,   190,    85,
      78,   190,    80,   192,    82,   148,    37,    38,    39,    40,
      41,    61,    74,    44,    64,    65,    47,    48,   177,    37,
      38,    39,    40,    78,    76,    74,    57,    58,    47,    48,
      83,   174,    80,    84,    85,    87,   195,    59,    60,    83,
     199,    83,    85,    41,    79,   237,   286,    78,    41,    82,
      42,    43,    44,    45,    46,    84,    77,    49,    50,    51,
      52,    53,    54,    55,    56,    41,    58,    59,    60,    61,
      62,    63,    84,    79,    77,    74,    83,   269,   270,    74,
     269,     5,     6,     7,     8,     9,    10,    11,    12,    81,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    85,    26,    27,    28,    29,    15,    31,    85,    33,
      85,    35,    36,    37,    38,    39,    40,    41,    85,    33,
      44,    35,    78,    47,    48,    78,    78,    78,    37,    38,
      39,    40,    41,    57,    58,    44,    41,    74,    47,    48,
      74,    74,    74,    74,    74,    59,    60,    61,    57,    58,
      64,    65,    74,    74,    78,    26,    85,    77,    85,    83,
      84,     5,     6,     7,     8,     9,    10,    11,    12,    78,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    78,    26,    27,    28,    29,    74,    31,    83,    33,
      74,    35,    36,    37,    38,    39,    40,    41,    30,    33,
      44,    35,     5,    47,    48,    74,     9,    10,    86,    84,
      32,    14,    79,    57,    58,    22,    19,    20,    86,    22,
      23,    83,   195,   169,   178,    59,    60,    61,   199,   177,
      64,    65,   300,   289,    78,    96,   270,   192,    53,    83,
      84,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    47,    48,
      44,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      84,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    -1,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      44,    -1,    -1,    47,    48,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    57,    58,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    44,
      -1,    -1,    47,    48,    37,    38,    39,    40,    41,    -1,
      -1,    44,    57,    58,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
      42,    43,    44,    45,    46,    78,    79,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    42,    43,    44,    45,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    79,    58,    59,
      60,    61,    62,    63,    42,    43,    44,    45,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    79,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    79,    18,    19,    20,    -1,    22,    23,     5,    -1,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    18,    19,    20,    -1,    22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    14,
      15,    16,    18,    19,    20,    21,    22,    23,    24,    76,
      87,    89,    90,    91,    93,    94,    98,    99,   100,   103,
     104,   122,   144,   147,   148,   149,    41,    78,   104,   144,
      41,    41,     3,     4,     0,    89,    74,    74,    74,    74,
      74,    74,    41,    44,   101,   126,   127,   142,   145,   147,
     148,   149,   144,   146,   147,   148,    83,    37,    38,    39,
      40,    41,    47,    48,    57,    58,    78,    91,   101,   132,
     138,   139,   141,   143,   144,   101,   101,    83,    83,    41,
      40,    75,    80,   142,    77,    78,    85,   101,   145,   145,
     146,   146,   146,   105,   144,    82,   101,   101,   132,    41,
     141,   132,    47,    48,    42,    43,    44,    45,    46,    49,
      50,    51,    52,    53,    54,    55,    56,    58,    59,    60,
      61,    62,    63,    79,   133,   134,   135,   136,   137,    78,
      79,    41,    96,    95,   144,   143,   132,    41,    78,    91,
     128,   143,   102,   144,   101,   126,    84,   101,   106,   141,
      79,   132,    79,   101,   130,   132,   140,    77,    84,    85,
      84,    41,    81,   128,   133,    79,   101,    74,    85,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    77,
     131,    79,    85,   143,    96,    74,    79,   128,    83,    85,
     105,   106,   132,   140,    95,   107,   102,    17,    26,    27,
      28,    29,    31,    33,    35,    36,    41,    83,    84,    92,
      93,    94,    97,   103,   104,   108,   109,   115,   116,   117,
     118,   120,   121,   123,   129,   130,   132,   144,   116,    78,
     108,   117,   119,    78,    78,    78,    74,    41,    74,    86,
     107,    74,    74,    74,    74,    74,    74,    85,   101,   124,
     125,    74,   129,    26,   116,   129,   129,    84,   129,    77,
      85,    79,    78,    74,    79,    79,   132,   124,   119,   129,
     116,   119,    83,    79,    74,    30,    32,    34,   110,   112,
     113,   114,    74,   116,   119,   143,    86,    84,   110,   111,
     112,    79,    86,   107,   111,   117,   107
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    93,    94,    95,
      95,    96,    96,    96,    97,    98,    98,    99,   100,   101,
     101,   101,   102,   102,   102,   103,   103,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   110,   110,   110,   110,   111,   111,   112,   113,   114,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   121,
     122,   123,   124,   124,   124,   125,   126,   126,   126,   127,
     128,   128,   128,   128,   128,   129,   129,   129,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   134,   134,   134,   134,   134,   135,
     135,   135,   135,   135,   135,   136,   136,   137,   137,   137,
     137,   137,   137,   138,   138,   139,   139,   139,   140,   140,
     140,   141,   141,   142,   142,   143,   143,   143,   143,   144,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   146,
     146,   146,   147,   147,   147,   147,   148,   148,   148,   148,
     149,   149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     4,     4,     2,     5,     5,     4,
       0,     3,     1,     3,     2,     3,     3,     4,     8,     2,
       1,     4,     0,     4,     2,     3,     3,     5,     0,     4,
       3,     1,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     2,     2,     1,     2,     2,     2,
       7,     2,     2,     1,     1,     2,     1,     4,     3,     3,
       9,     1,     1,     3,     5,     7,     1,     1,     5,     7,
       2,     2,     3,     1,     1,     3,     3,     1,     1,     3,
       3,     3,     1,     1,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     3,     3,     1,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
        case 3:
#line 96 "syntaxique.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1646 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "syntaxique.y" /* yacc.c:1646  */
    {fprintf(out,"var %s : %s ;\n",(yyvsp[-1].decl).ops.op,(yyvsp[-1].decl).type);}
#line 1652 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 112 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("goto",(yyvsp[0].code),NULL);}
#line 1658 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 126 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),":",NULL);}
#line 1664 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 135 "syntaxique.y" /* yacc.c:1646  */
    {fprint_functions((yyvsp[-7].rep),(yyvsp[-6].code),(yyvsp[-4].code),(yyvsp[-1].loc));}
#line 1670 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 138 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-1].code),(yyvsp[0].code),NULL);}
#line 1676 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 1682 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 140 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("[",(yyvsp[-1].op).op,"]",NULL);}
#line 1688 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 143 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="";}
#line 1694 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 144 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].code),":",convert_type((yyvsp[-3].rep)),";",(yyvsp[0].code),NULL);}
#line 1700 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 145 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[0].code),":",convert_type((yyvsp[-1].rep)),NULL);}
#line 1706 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 161 "syntaxique.y" /* yacc.c:1646  */
    {init_local_type(&(yyval.loc));}
#line 1712 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 162 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-1].loc);insert_decl_in_loc(&(yyval.loc),(yyvsp[0].decl));}
#line 1718 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 163 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1724 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1730 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1736 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1742 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 167 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1748 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 168 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1754 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 171 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl)=(yyvsp[-1].decl);postfix_s_list((yyval.decl).ops.preop,";");postfix_s_list((yyval.decl).ops.postop,";");(yyval.decl).ops.op=strcmp((yyval.decl).ops.op,"")?concat((yyval.decl).ops.op,";",NULL):"";}
#line 1760 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 172 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl)=(yyvsp[-1].decl);postfix_s_list((yyval.decl).ops.preop,";");postfix_s_list((yyval.decl).ops.postop,";");(yyval.decl).ops.op=concat("Exit(",(yyval.decl).ops.op,");",NULL);}
#line 1766 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 173 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl).ops.op="break";(yyval.decl).type="";(yyval.decl).ids=NULL;}
#line 1772 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 177 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl).ops.op=(yyvsp[0].code);(yyval.decl).type="";(yyval.decl).ids=NULL;}
#line 1778 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 183 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-1].loc);insert_first_s_list(&(yyval.loc).ops,concat("case ( ",(yyvsp[-4].op).op," ) of ",NULL));insert_s_list(&(yyval.loc).ops,"end ;");/*chain_s_list($3.preop,$$.ops);$$.ops=$3.preop;*/}
#line 1784 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1790 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 187 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[-1].loc),&(yyvsp[0].loc));(yyval.loc)=(yyvsp[-1].loc);}
#line 1796 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1802 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1808 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "syntaxique.y" /* yacc.c:1646  */
    {chain_local(&(yyvsp[0].loc),&(yyvsp[-1].loc));(yyval.loc)=(yyvsp[0].loc);}
#line 1814 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 193 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1820 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 196 "syntaxique.y" /* yacc.c:1646  */
    {(yyvsp[0].loc).ops->op=concat((yyvsp[-2].code),":",(yyvsp[0].loc).ops->op,NULL);(yyval.loc)=(yyvsp[0].loc);}
#line 1826 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 200 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1832 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 203 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1838 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 207 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=for_loop_handler((yyvsp[-6].decl),(yyvsp[-4].decl),(yyvsp[-2].decl),(yyvsp[0].loc));}
#line 1844 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 210 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl).ops=(yyvsp[0].op);(yyval.decl).type="";(yyval.decl).ids=NULL;}
#line 1850 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 211 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl)=(yyvsp[0].decl);}
#line 1856 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 214 "syntaxique.y" /* yacc.c:1646  */
    {insert_first_s_list(&(yyvsp[-1].loc).ops,"begin");insert_s_list(&(yyvsp[-1].loc).ops,"end");(yyval.loc)=(yyvsp[-1].loc);}
#line 1862 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 217 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);insert_first_s_list(&(yyval.loc).ops,concat("if ( ",(yyvsp[-2].op).op," ) then ",NULL));postfix_last_s_list((yyval.loc).ops," ;");/*chain_s_list($3.preop,$$.ops);$$.ops=$3.preop;*/}
#line 1868 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 218 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-2].loc);insert_first_s_list(&(yyval.loc).ops,concat("if ( ",(yyvsp[-4].op).op," ) then ",NULL));insert_s_list(&(yyval.loc).ops,"else");chain_s_list((yyval.loc).ops,(yyvsp[0].loc).ops);chain_decl_list((yyval.loc).declarations,(yyvsp[0].loc).declarations);postfix_last_s_list((yyval.loc).ops," ;");}
#line 1874 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 221 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);}
#line 1880 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 222 "syntaxique.y" /* yacc.c:1646  */
    {init_local_type(&(yyval.loc));insert_decl_in_loc(&(yyval.loc),(yyvsp[0].decl));insert_first_s_list(&(yyval.loc).ops,"begin");insert_s_list(&(yyval.loc).ops,"end");}
#line 1886 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 225 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[0].loc);insert_first_s_list(&(yyval.loc).ops,concat("while ( ",(yyvsp[-2].op).op," ) do ",NULL));postfix_last_s_list((yyval.loc).ops," ;");}
#line 1892 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 228 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.loc)=(yyvsp[-5].loc);insert_first_s_list(&(yyval.loc).ops,"repeat");insert_s_list(&(yyval.loc).ops,concat("until ( ",(yyvsp[-2].op).op," );",NULL));}
#line 1898 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 231 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl).type=convert_type((yyvsp[-1].rep));(yyval.decl).ops=(yyvsp[0].op);}
#line 1904 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 234 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl)=(yyvsp[0].decl);(yyval.decl).type=convert_type((yyvsp[-1].rep));}
#line 1910 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 237 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.decl).ops);(yyval.decl).ops.op=(yyvsp[0].decl).ops.op;insert_s_list(&(yyvsp[-2].decl).ops.preop,(yyvsp[-2].decl).ops.op);chain_s_list((yyval.decl).ops.preop,(yyvsp[-2].decl).ops.preop);chain_s_list((yyval.decl).ops.preop,(yyvsp[-2].decl).ops.postop);chain_s_list((yyval.decl).ops.preop,(yyvsp[0].decl).ops.preop);chain_s_list((yyval.decl).ops.postop,(yyvsp[0].decl).ops.postop);(yyval.decl).ids=(yyvsp[-2].decl).ids;chain_s_list((yyval.decl).ids,(yyvsp[0].decl).ids);}
#line 1916 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 238 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl)=(yyvsp[0].decl);}
#line 1922 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 239 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.decl).ops);(yyval.decl).ops.op="";(yyval.decl).ops.postop=NULL;(yyval.decl).ids=insert_s_list(&(yyval.decl).ids,(yyvsp[0].code));}
#line 1928 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 242 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.decl).ops.op=concat((yyvsp[-2].code),convert_assignment((yyvsp[-2].code),-1),(yyvsp[0].op).op,NULL);
(yyval.decl).ops.preop=(yyvsp[0].op).preop;(yyval.decl).ops.postop=(yyvsp[0].op).postop;(yyval.decl).ids=insert_s_list(&(yyval.decl).ids,(yyvsp[-2].code));}
#line 1935 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 246 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,",",(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 1941 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 247 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 1947 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 248 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].code);(yyval.op).postop=NULL;}
#line 1953 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 251 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op).op=concat((yyvsp[-2].code)," =: ",(yyvsp[0].op).op,NULL);(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}
#line 1959 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 254 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].code),(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 1965 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 255 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 1971 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 256 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 1977 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 257 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=strdup((yyvsp[0].code));(yyval.op).postop=NULL;}
#line 1983 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 261 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].op).op;insert_s_list(&(yyvsp[-2].op).preop,(yyvsp[-2].op).op);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);}
#line 1989 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 262 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);if((yyvsp[0].op).simple!=0){(yyval.op).op="";}}
#line 1995 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 263 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2001 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 266 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op).op=concat((yyvsp[-2].code),convert_assignment((yyvsp[-2].code),(yyvsp[-1].t_val)),(yyvsp[0].op).op,NULL);
(yyval.op).preop=(yyvsp[0].op).preop;(yyval.op).postop=(yyvsp[0].op).postop;}
#line 2008 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 270 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=-1;}
#line 2014 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 271 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSADD;}
#line 2020 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 272 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMINUS;}
#line 2026 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 273 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMULT;}
#line 2032 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 274 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSDIVIDE;}
#line 2038 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 275 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSMOD;}
#line 2044 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 276 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBAND;}
#line 2050 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 277 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBOR;}
#line 2056 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 278 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSBXOR;}
#line 2062 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 279 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSLSHIFT;}
#line 2068 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 280 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.t_val)=ASSRSHIFT;}
#line 2074 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 282 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op,(yyvsp[-1].code),(yyvsp[0].op).op,NULL);chain_s_list((yyval.op).preop,(yyvsp[-2].op).preop);chain_s_list((yyval.op).preop,(yyvsp[0].op).preop);chain_s_list((yyval.op).postop,(yyvsp[-2].op).postop);chain_s_list((yyval.op).postop,(yyvsp[0].op).postop);(yyval.op).simple=0;}
#line 2080 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 283 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[-1].op);(yyval.op).op=concat("( ",(yyvsp[-1].op).op," )",NULL);}
#line 2086 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 284 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("not ",(yyvsp[0].op).op,NULL);insert_s_list(&(yyval.op).preop,(yyvsp[0].op).preop->op);insert_s_list(&(yyval.op).postop,(yyvsp[0].op).postop->op);}
#line 2092 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 285 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].code);(yyval.op).postop=NULL;(yyval.op).preop=NULL;(yyval.op).simple=0;}
#line 2098 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 286 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);(yyval.op).simple=0;}
#line 2104 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 287 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].code)," := 1 + ",(yyvsp[0].code),NULL));(yyval.op).op=strdup((yyvsp[0].code));}
#line 2110 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 288 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).preop,concat((yyvsp[0].code)," := 1 - ",(yyvsp[0].code),NULL));(yyval.op).op=strdup((yyvsp[0].code));}
#line 2116 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 289 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].code)," := 1 + ",(yyvsp[-1].code),NULL));(yyval.op).op=strdup((yyvsp[-1].code));}
#line 2122 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 290 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));insert_s_list(&(yyval.op).postop,concat((yyvsp[-1].code)," := 1 - ",(yyvsp[-1].code),NULL));(yyval.op).op=strdup((yyvsp[-1].code));}
#line 2128 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 294 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2134 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 295 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2140 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 296 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2146 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 297 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2152 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 300 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" - ";}
#line 2158 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 301 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" + ";}
#line 2164 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 302 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" * ";}
#line 2170 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 303 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" / ";}
#line 2176 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 304 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" mod ";}
#line 2182 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 307 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" = ";}
#line 2188 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 308 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <> ";}
#line 2194 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 309 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" > ";}
#line 2200 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 310 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" < ";}
#line 2206 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 311 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" >= ";}
#line 2212 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 312 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" <= ";}
#line 2218 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 315 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" and ";}
#line 2224 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 316 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" or ";}
#line 2230 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 319 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" & ";}
#line 2236 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 320 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" | ";}
#line 2242 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 321 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" xor ";}
#line 2248 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 322 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" ~ ";}
#line 2254 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 323 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" shl ";}
#line 2260 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 324 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=" shr ";}
#line 2266 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 326 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2272 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 327 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=(yyvsp[0].code);(yyval.op).postop=NULL;}
#line 2278 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 330 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat("@",(yyvsp[0].code),NULL);(yyval.op).postop=NULL;}
#line 2284 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 331 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=function_call_handler((yyvsp[-3].code),(yyvsp[-1].op));}
#line 2290 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 332 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].code),"(",")",NULL);(yyval.op).postop=NULL;}
#line 2296 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 334 "syntaxique.y" /* yacc.c:1646  */
    {init_op_type(&(yyval.op));(yyval.op).op=concat((yyvsp[-2].op).op," , ",(yyvsp[0].op).op,NULL);}
#line 2302 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 335 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2308 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 336 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.op)=(yyvsp[0].op);}
#line 2314 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 338 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat((yyvsp[-2].code),".",(yyvsp[0].code),NULL);}
#line 2320 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 339 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=(yyvsp[0].code);}
#line 2326 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 342 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=concat("^",(yyvsp[0].code),NULL);}
#line 2332 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 343 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="^";}
#line 2338 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 346 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2344 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 347 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2350 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 348 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2356 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 349 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)=strdup((yyvsp[0].code));}
#line 2362 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 352 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2368 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 353 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2374 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 354 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2380 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 355 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2386 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 356 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2392 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 358 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2398 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 359 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep)=(yyvsp[0].rep);(yyval.rep).b_type=strdup((yyvsp[-1].code));}
#line 2404 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 360 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).b_type=strdup((yyvsp[0].code));}
#line 2410 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 361 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2416 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 362 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2422 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 364 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[-1].modif);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2428 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 365 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).vis=(yyvsp[-1].vis);(yyval.rep)=add_type_rep((yyval.rep),(yyvsp[0].rep));}
#line 2434 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 366 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.rep)=init_type_rep();(yyval.rep).mod=(yyvsp[0].modif);}
#line 2440 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 369 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_short=1; (yyval.modif).nb_long=0;(yyval.modif).sign=1;}
#line 2446 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 370 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).nb_long=1; (yyval.modif).nb_short=0;(yyval.modif).sign=1;}
#line 2452 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 371 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=1;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2458 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 372 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.modif).sign=0;(yyval.modif).nb_long=0;(yyval.modif).nb_short=0;}
#line 2464 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 375 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_auto=1;}
#line 2470 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 376 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_register=1;}
#line 2476 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 377 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_static=1;}
#line 2482 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 378 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.vis).nb_extern=1;}
#line 2488 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 381 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="int";}
#line 2494 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 382 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="double";}
#line 2500 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 383 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="float";}
#line 2506 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 384 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="char";}
#line 2512 "syntaxique.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 385 "syntaxique.y" /* yacc.c:1646  */
    {(yyval.code)="void";}
#line 2518 "syntaxique.tab.c" /* yacc.c:1646  */
    break;


#line 2522 "syntaxique.tab.c" /* yacc.c:1646  */
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
#line 388 "syntaxique.y" /* yacc.c:1906  */


char * convert_assignment(char * lvalue, int  ASSIGNMENTOP){
char* res;
  switch(ASSIGNMENTOP){
    case -1 :       
      res=strdup(" := ");  
    break;
    case ASSADD :    
      res=concat(" := ",lvalue," + ",NULL);
    break;
    case ASSMINUS : 
      res=concat(" := ",lvalue," - ",NULL);   
    break;   
    case ASSMULT :  
      res=concat(" := ",lvalue," * ",NULL);   
    break;   
    case ASSDIVIDE : 
      res=concat(" := ",lvalue," / ",NULL);  
    break;   
    case ASSMOD :    
      res=concat(" := ",lvalue," mod ",NULL); 
    break; 
    case ASSBAND :   
      res=concat(" := ",lvalue," & ",NULL);   
    break; 
    case ASSBOR :    
      res=concat(" := ",lvalue," | ",NULL);   
    break;   
    case ASSBXOR :   
      res=concat(" := ",lvalue," ^ ",NULL);   
    break;   
    case ASSLSHIFT : 
      res=concat(" := ",lvalue," << ",NULL);  
    break;   
    case ASSRSHIFT : 
      res=concat(" := ",lvalue," >> ",NULL);  
    break;   
  }
  return res;
}
void yyerror(const char *s) {
  char *c;
  char str[12];
  sprintf(str, "%d", line);
  c=concat(s," at line ",str," .",NULL);
  //printf("%s\n",c);
  generateError(c,lang);
  free(c);
  c=NULL;
}
char* concat(const char * args,...){
  va_list valist;
  va_list valist2;
  va_start(valist, args);
  va_copy(valist2, valist);
  char *arg=args;
  int length=0;
  while(arg!=NULL){
    length+=strlen(arg);
    arg=va_arg(valist, char*);
  };  
  char *res=malloc(length+1);
  va_end(valist);
  free(arg);
  //arg=malloc(strlen(args));
  arg=strdup(args);
  while(arg!=NULL){
    strcat(res,arg);
    arg=va_arg(valist2, char*);
  };
  va_end(valist2);
  free(arg);
  arg=NULL;
  return res;
}
int main(int argc, char *argv[]) {
  FILE *myfile = fopen(argv[1], "r");  //fichier a compiler
  out = fopen(argv[2], "w+");//ficher du resultat de la traduction
  if(!strcmp(argv[3],"en")){
      lang='e';
  }else{
    if(!strcmp(argv[3],"fr")){
      lang='f';
    }
  }
  if (!myfile) {
    printf("file not found");
    return -1;
  }
  yyin = myfile;

  yyparse();
  //print_id_list(id_table);
  fclose(myfile);
  fclose(out);
  return 0;
}
