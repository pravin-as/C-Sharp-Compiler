/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

#include <stdio.h>
#include <stdlib.h>

extern FILE *fp;


#line 78 "syntax.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    Defination = 258,
    Delimiter = 259,
    Function_Invocator = 260,
    Function_Invocker = 261,
    Primitive_Data_Type = 262,
    Primitive_Data_Type_s = 263,
    Derived_data_type = 264,
    Keyword = 265,
    Operator = 266,
    simple_statement = 267,
    control_flow = 268,
    Fpri = 269,
    user_defined_function = 270,
    Header_Files = 271,
    Single_line_comment = 272,
    Multi_line_comment = 273,
    Identifier = 274,
    Data_Type_Constant_Fraction = 275,
    Data_Type_Constant_Negative_Fraction = 276,
    Data_Type_Constant_Integer = 277,
    Data_Type_Constant_Negative_Integer = 278,
    Data_Type_Constant_String = 279,
    Special_character = 280,
    Semi_colon = 281,
    While_ = 282,
    System_defined_function = 283,
    colon = 284,
    Equal_to_Operator = 285,
    Opening = 286,
    CLosing = 287,
    Comma = 288,
    if_ = 289,
    Opening_curly_bracket = 290,
    CLosing_curly_brackett = 291,
    else_ = 292,
    for_ = 293,
    Data_Type_NSArray = 294,
    Data_Type_Char_s = 295,
    Data_Type_NSObject = 296,
    control_flow_special = 297,
    Special_ADDITion_on_Function = 298,
    keyword_Void = 299,
    CompartorOperator = 300,
    BinaryOperator = 301,
    Interface = 302,
    Property = 303,
    Implementation = 304,
    End = 305,
    Delimiter_for_arr_1 = 306,
    Delimiter_for_arr_2 = 307,
    AND = 308,
    OR = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */



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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   674

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

#define YYUNDEFTOK  2
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    56,     2,    61,
       2,     2,    54,    53,     2,    62,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,     2,    60,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    70,    71,    72,    73,    74,    75,    81,
      82,    83,    84,    85,    86,    87,    88,    91,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     106,   106,   106,   107,   107,   107,   107,   108,   109,   111,
     112,   113,   115,   116,   116,   116,   116,   117,   121,   122,
     123,   124,   128,   132,   133,   136,   137,   138,   140,   140,
     140,   142,   143,   145,   147,   149,   150,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   165,   165,   165,   170,   171,   172,   173,   174,   179,
     184,   186,   191,   192,   195,   196,   197,   198,   203,   204,
     212,   216,   217,   218,   219,   220,   221,   222,   227,   228,
     229,   230,   231
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Defination", "Delimiter",
  "Function_Invocator", "Function_Invocker", "Primitive_Data_Type",
  "Primitive_Data_Type_s", "Derived_data_type", "Keyword", "Operator",
  "simple_statement", "control_flow", "Fpri", "user_defined_function",
  "Header_Files", "Single_line_comment", "Multi_line_comment",
  "Identifier", "Data_Type_Constant_Fraction",
  "Data_Type_Constant_Negative_Fraction", "Data_Type_Constant_Integer",
  "Data_Type_Constant_Negative_Integer", "Data_Type_Constant_String",
  "Special_character", "Semi_colon", "While_", "System_defined_function",
  "colon", "Equal_to_Operator", "Opening", "CLosing", "Comma", "if_",
  "Opening_curly_bracket", "CLosing_curly_brackett", "else_", "for_",
  "Data_Type_NSArray", "Data_Type_Char_s", "Data_Type_NSObject",
  "control_flow_special", "Special_ADDITion_on_Function", "keyword_Void",
  "CompartorOperator", "BinaryOperator", "Interface", "Property",
  "Implementation", "End", "Delimiter_for_arr_1", "Delimiter_for_arr_2",
  "'+'", "'*'", "'/'", "'%'", "AND", "OR", "'<'", "'>'", "'\\''", "'-'",
  "$accept", "Here_We_Start", "Start_Symbol", "Declaration", "HeaderFile",
  "Assignment", "FunctCall", "ArrayUsage", "Funct", "ArgListOpt",
  "theArgList", "ArgList", "Arg", "CompoundStmt", "StmtList", "Stmt",
  "Type", "DDTstmnt", "IfStmt", "Elsa", "ForStmt", "WhileStmt",
  "PrintFunc", "Expr", "Interfaceimp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    43,    42,    47,    37,   308,   309,    60,
      62,    39,    45
};
# endif

#define YYPACT_NINF (-170)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-64)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     227,    92,  -170,    71,   -13,     9,   -31,    -4,    -8,    12,
      72,    85,   101,   521,  -170,  -170,    46,    51,   590,   590,
     116,   178,   227,  -170,  -170,    75,   112,    65,  -170,  -170,
     590,   123,  -170,  -170,    27,   162,   590,   590,   115,   590,
     166,   590,   612,   546,   590,   155,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   156,    20,    77,
     590,   167,   175,   273,   158,   180,   150,   159,   146,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,   590,   182,   136,
    -170,   181,   138,  -170,  -170,  -170,   184,   169,  -170,  -170,
    -170,   175,  -170,   187,  -170,   568,   160,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
     196,  -170,  -170,   193,   194,   198,  -170,   199,   233,   502,
     208,  -170,   149,  -170,  -170,  -170,  -170,  -170,    -9,  -170,
    -170,  -170,  -170,  -170,  -170,    92,    92,   319,  -170,  -170,
    -170,  -170,   201,  -170,  -170,    -3,    -3,    -3,    -3,   205,
     211,   213,   214,   215,  -170,  -170,   216,  -170,   209,   209,
     209,  -170,   224,  -170,   241,   229,  -170,  -170,  -170,   175,
     590,     4,    95,   119,   131,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,   365,  -170,   411,  -170,    92,    18,   209,  -170,
      -3,   457,    -3,    -3,   237,   209,    -3,   457,  -170,  -170,
    -170,   245,    82,  -170,    63,  -170,  -170,    87,    87,  -170,
     228,   113,  -170,  -170,  -170,    92,  -170,   247,    80,  -170,
      -3,  -170,   248,  -170,  -170,   157,   457,  -170,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    84,    85,     0,     0,     0,    47,    43,    44,
      45,    46,    38,     0,    66,    86,     0,     0,     0,     0,
       0,     0,     2,     8,     6,     0,     0,     0,     7,    15,
       0,     0,    16,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,    37,     0,     0,    42,
       1,     4,     5,     3,    10,    11,    12,     0,     0,     0,
      14,     0,     0,    26,    27,    66,     0,     0,    24,    18,
      19,    21,    48,     0,    23,     0,     0,    33,    29,    34,
      30,    35,    31,    36,    32,    25,    28,    87,    88,    40,
       0,    71,    70,     0,     0,     0,    64,     0,     0,     0,
       0,    68,     0,    65,    72,    69,    67,    73,     0,   112,
      52,    39,    22,     9,    13,    57,    57,     0,    41,    17,
      49,    50,     0,    20,    77,   101,   101,   101,   101,     0,
       0,     0,     0,     0,    78,    75,     0,    12,    66,    66,
       0,    56,    55,    62,     0,     0,    89,    51,   105,   106,
       0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
      76,   108,     0,   110,     0,    53,     0,    59,     0,   107,
     101,     0,   101,   101,     0,     0,   101,     0,   109,   111,
      61,     0,     0,    54,   102,    15,    98,   103,   104,   100,
      90,     0,    15,    96,    63,     0,    60,     0,     0,    91,
     101,    58,    59,    92,    93,     0,     0,    15,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,     2,   246,    25,   230,     0,   251,   133,
    -169,  -170,    84,   -66,   -72,   -17,     8,  -170,    57,  -170,
    -170,  -170,  -170,  -136,  -170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,   121,    24,    25,    26,    62,    28,   160,
     161,   162,   163,    29,    63,   123,    30,    31,   124,   219,
     125,   126,   127,   171,    32
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   158,    23,    47,     2,     3,    38,    41,     5,    35,
     172,   173,   174,   137,    40,   190,    59,     8,     9,    10,
      11,    12,    27,    49,    71,    48,    42,    43,    13,    44,
      79,    36,   159,   216,    57,    81,   191,   202,    61,    45,
      39,    15,    91,    67,    68,    50,   221,    46,    18,   192,
     193,   -63,   108,    37,   204,    78,   207,   208,    19,    20,
     211,    83,    84,   122,    86,    64,    88,    89,    93,    94,
      65,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    36,    51,   225,    61,   182,   184,    41,     2,
      33,    76,   181,   183,   185,    77,    53,   -37,   190,     2,
      33,    74,   132,   -37,    37,    52,   190,    42,   192,   193,
      44,   215,    55,    34,   115,    14,   -37,   -37,    54,    27,
     142,   155,   203,    34,   190,   205,    15,   194,    46,   210,
     190,   212,   192,   193,    56,    69,    15,   122,    75,   220,
     192,   193,   190,   164,   164,   169,   169,   169,   169,    80,
      85,   195,   223,   170,   170,   170,   170,   196,   192,   193,
     227,    36,   134,   197,   192,   193,    77,   135,   190,   136,
     168,   168,   168,   168,   206,   157,   192,   193,    70,    77,
     213,    82,   122,    37,   122,    87,    95,   128,   107,   226,
     169,   122,   169,   169,   201,   189,   169,   122,   170,   109,
     170,   170,   192,   193,   170,    77,   129,   131,   133,   228,
     217,   130,   143,   108,   139,   168,   138,   168,   168,   140,
     169,   168,   144,   217,   145,   146,   122,   156,   170,   147,
     148,   175,     1,   167,     2,     3,     4,   176,     5,   177,
     178,   179,   180,     6,    14,   168,     7,     8,     9,    10,
      11,    12,   149,   150,   151,   152,   153,   186,    13,   154,
     187,   188,    14,   209,   214,   218,   222,   202,    72,   165,
     200,    15,    90,    73,    16,   224,    17,     0,    18,     0,
       2,     3,     4,     0,     5,     0,   110,     0,    19,    20,
     111,   112,     7,     8,     9,    10,    11,    12,     0,     0,
     113,   114,     0,     0,    13,     0,     0,   115,    14,   116,
       0,   117,     0,     0,     0,   118,     0,    15,     0,     0,
      16,   119,   120,     0,    18,     0,     2,     3,     4,     0,
       5,     0,   110,     0,    19,    20,   111,   112,     7,     8,
       9,    10,    11,    12,     0,     0,   113,   114,     0,     0,
      13,     0,     0,   115,    14,   166,     0,   117,     0,     0,
       0,   118,     0,    15,     0,     0,    16,   119,   120,     0,
      18,     0,     2,     3,     4,     0,     5,     0,   110,     0,
      19,    20,   111,   112,     7,     8,     9,    10,    11,    12,
       0,     0,   113,   114,     0,     0,    13,     0,     0,   115,
      14,     0,     0,   117,     0,     0,     0,   118,     0,    15,
       0,     0,    16,   119,   120,   198,    18,     0,     2,     3,
       4,     0,     5,     0,   110,     0,    19,    20,   111,   112,
       7,     8,     9,    10,    11,    12,     0,     0,   113,   114,
       0,     0,    13,     0,     0,   115,    14,     0,     0,   117,
       0,     0,     0,   118,     0,    15,     0,     0,    16,   119,
     120,   199,    18,     0,     2,     3,     4,     0,     5,     0,
     110,     0,    19,    20,   111,   112,     7,     8,     9,    10,
      11,    12,     0,     0,   113,   114,     0,     0,    13,     0,
       0,   115,    14,     0,     0,   117,     0,     0,     0,   118,
       0,    15,     0,     0,    16,   119,   120,     0,    18,     2,
       3,     4,     0,     5,     0,     0,     0,     0,    19,    20,
       0,     7,     8,     9,    10,    11,    12,     0,    57,    58,
       0,     0,     5,    13,     0,     0,     0,    14,     0,     0,
      59,     8,     9,    10,    11,    12,    15,     0,     0,    16,
       0,    17,    60,    18,    66,     0,     0,     5,     0,     0,
       0,     0,     0,    19,    20,    59,     8,     9,    10,    11,
      12,     0,    18,     0,     0,     0,    66,    60,    92,     5,
       0,     0,    19,    20,     0,     0,     0,    59,     8,     9,
      10,    11,    12,     0,     0,     0,     0,    18,    66,    60,
     141,     5,     0,     0,     0,     0,     0,    19,    20,    59,
       8,     9,    10,    11,    12,     0,     0,     0,     0,    18,
      66,    60,     0,     5,     0,     0,     0,     0,     0,    19,
      20,     7,     8,     9,    10,    11,    12,     0,     0,     0,
       0,    18,     0,    60,     0,     0,     0,     0,     0,     0,
       0,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    10,     0,    11,     7,     8,    19,    11,    11,     1,
     146,   147,   148,    85,    45,    11,    19,    20,    21,    22,
      23,    24,    22,    11,    22,    33,    30,    31,    31,    33,
      30,    11,    41,   202,     7,     8,    32,    19,    13,    43,
      31,    44,    42,    18,    19,    33,   215,    51,    51,    45,
      46,    33,    32,    33,   190,    30,   192,   193,    61,    62,
     196,    36,    37,    63,    39,    19,    41,    42,    43,    44,
      19,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    11,    11,   220,    60,   158,   159,    11,     7,
       8,    26,   158,   159,   160,    30,    11,    26,    11,     7,
       8,    26,    77,    32,    33,    33,    11,    30,    45,    46,
      33,    29,    11,    31,    34,    35,    45,    46,    33,   119,
      95,   119,   188,    31,    11,   191,    44,    32,    51,   195,
      11,   197,    45,    46,    33,    19,    44,   137,    26,    26,
      45,    46,    11,   135,   136,   145,   146,   147,   148,    26,
      35,    32,   218,   145,   146,   147,   148,    26,    45,    46,
     226,    11,    26,    32,    45,    46,    30,    29,    11,    31,
     145,   146,   147,   148,   191,    26,    45,    46,     0,    30,
     197,    19,   182,    33,   184,    19,    31,    29,    32,    32,
     190,   191,   192,   193,   186,   170,   196,   197,   190,    32,
     192,   193,    45,    46,   196,    30,    26,    61,    26,   226,
     202,    52,    52,    32,    45,   190,    32,   192,   193,    32,
     220,   196,    26,   215,    31,    31,   226,    19,   220,    31,
      31,    26,     5,    32,     7,     8,     9,    26,    11,    26,
      26,    26,    26,    16,    35,   220,    19,    20,    21,    22,
      23,    24,    19,    20,    21,    22,    23,    33,    31,    26,
      19,    32,    35,    26,    19,    37,    19,    19,    22,   136,
     186,    44,    42,    22,    47,   218,    49,    -1,    51,    -1,
       7,     8,     9,    -1,    11,    -1,    13,    -1,    61,    62,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      -1,    38,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,
      47,    48,    49,    -1,    51,    -1,     7,     8,     9,    -1,
      11,    -1,    13,    -1,    61,    62,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    -1,    -1,
      -1,    42,    -1,    44,    -1,    -1,    47,    48,    49,    -1,
      51,    -1,     7,     8,     9,    -1,    11,    -1,    13,    -1,
      61,    62,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,    34,
      35,    -1,    -1,    38,    -1,    -1,    -1,    42,    -1,    44,
      -1,    -1,    47,    48,    49,    50,    51,    -1,     7,     8,
       9,    -1,    11,    -1,    13,    -1,    61,    62,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    28,
      -1,    -1,    31,    -1,    -1,    34,    35,    -1,    -1,    38,
      -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    47,    48,
      49,    50,    51,    -1,     7,     8,     9,    -1,    11,    -1,
      13,    -1,    61,    62,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    28,    -1,    -1,    31,    -1,
      -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    47,    48,    49,    -1,    51,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    -1,    61,    62,
      -1,    19,    20,    21,    22,    23,    24,    -1,     7,     8,
      -1,    -1,    11,    31,    -1,    -1,    -1,    35,    -1,    -1,
      19,    20,    21,    22,    23,    24,    44,    -1,    -1,    47,
      -1,    49,    31,    51,     8,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    61,    62,    19,    20,    21,    22,    23,
      24,    -1,    51,    -1,    -1,    -1,     8,    31,    32,    11,
      -1,    -1,    61,    62,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    51,     8,    31,
      32,    11,    -1,    -1,    -1,    -1,    -1,    61,    62,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    51,
       8,    31,    -1,    11,    -1,    -1,    -1,    -1,    -1,    61,
      62,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    51,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,     8,     9,    11,    16,    19,    20,    21,
      22,    23,    24,    31,    35,    44,    47,    49,    51,    61,
      62,    64,    65,    66,    67,    68,    69,    70,    71,    76,
      79,    80,    87,     8,    31,    79,    11,    33,    19,    31,
      45,    11,    30,    31,    33,    43,    51,    11,    33,    11,
      33,    11,    33,    11,    33,    11,    33,     7,     8,    19,
      31,    68,    70,    77,    19,    19,     8,    68,    68,    19,
       0,    66,    67,    71,    26,    26,    26,    30,    68,    70,
      26,     8,    19,    68,    68,    35,    68,    19,    68,    68,
      69,    70,    32,    68,    68,    31,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    32,    32,    32,
      13,    17,    18,    27,    28,    34,    36,    38,    42,    48,
      49,    66,    70,    78,    81,    83,    84,    85,    29,    26,
      52,    61,    68,    26,    26,    29,    31,    77,    32,    45,
      32,    32,    68,    52,    26,    31,    31,    31,    31,    19,
      20,    21,    22,    23,    26,    66,    19,    26,    10,    41,
      72,    73,    74,    75,    79,    72,    36,    32,    68,    70,
      79,    86,    86,    86,    86,    26,    26,    26,    26,    26,
      26,    76,    77,    76,    77,    76,    33,    19,    32,    68,
      11,    32,    45,    46,    32,    32,    26,    32,    50,    50,
      75,    79,    19,    76,    86,    76,    78,    86,    86,    26,
      76,    86,    76,    78,    19,    29,    73,    79,    37,    82,
      26,    73,    19,    76,    81,    86,    32,    76,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    70,    71,    71,    72,    72,    72,    73,    73,
      73,    74,    74,    75,    76,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    80,
      81,    81,    82,    82,    83,    83,    83,    83,    84,    84,
      85,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     1,     1,     3,
       2,     2,     2,     3,     2,     1,     1,     4,     3,     3,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     4,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     5,     3,     6,     7,     1,     1,     0,     5,     2,
       4,     3,     1,     2,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     2,     2,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     3,     5,
       5,     6,     2,     2,     9,     9,     5,     5,     5,     5,
       5,     0,     3,     3,     3,     1,     1,     2,     5,     6,
       5,     6,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
# undef YYSTACK_RELOCATE
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
  case 2:
#line 69 "syntax.y"
                             {  printf("the Start_Symbol line is error free !!!") ; }
#line 1609 "syntax.tab.c"
    break;

  case 3:
#line 70 "syntax.y"
                                   {  printf("Start_Symbol Funct\n") ; }
#line 1615 "syntax.tab.c"
    break;

  case 4:
#line 71 "syntax.y"
                                {  printf("Start_Symbol Declaration\n") ; }
#line 1621 "syntax.tab.c"
    break;

  case 5:
#line 72 "syntax.y"
                               {  printf("Start_Symbol HeaderFile\n") ; }
#line 1627 "syntax.tab.c"
    break;

  case 6:
#line 73 "syntax.y"
                 {  printf("HeaderFile\n") ; }
#line 1633 "syntax.tab.c"
    break;

  case 7:
#line 74 "syntax.y"
              {  printf("Funct\n") ; }
#line 1639 "syntax.tab.c"
    break;

  case 8:
#line 75 "syntax.y"
                   {  printf("Declaration \n") ; }
#line 1645 "syntax.tab.c"
    break;

  case 9:
#line 81 "syntax.y"
                                         {  printf("Type Assignment Semi_colon! : Declaration\n") ; }
#line 1651 "syntax.tab.c"
    break;

  case 10:
#line 82 "syntax.y"
                           {printf("Assignment Semi_colon : Declaration "); }
#line 1657 "syntax.tab.c"
    break;

  case 11:
#line 83 "syntax.y"
                             {  printf("FunctCall  Semi_colon : Declaration") ; }
#line 1663 "syntax.tab.c"
    break;

  case 12:
#line 84 "syntax.y"
                              {  printf("ArrayUsage  Semi_colon : Declaration ") ; }
#line 1669 "syntax.tab.c"
    break;

  case 13:
#line 85 "syntax.y"
                                    {  printf("Type ArrayUsage  Semi_colon : Declaration ") ; }
#line 1675 "syntax.tab.c"
    break;

  case 14:
#line 86 "syntax.y"
                             {  printf("Semi_colon : Declaration  ") ; }
#line 1681 "syntax.tab.c"
    break;

  case 15:
#line 87 "syntax.y"
                    { printf("Compound Statement : Declaration ") ; }
#line 1687 "syntax.tab.c"
    break;

  case 47:
#line 117 "syntax.y"
                   {printf("identifier from the Assignment"); }
#line 1693 "syntax.tab.c"
    break;

  case 53:
#line 132 "syntax.y"
                                                                             {printf("Here we are at the Funct Type in the identifier"); }
#line 1699 "syntax.tab.c"
    break;

  case 64:
#line 147 "syntax.y"
                                                                       { printf("over here at the line where we have Compound statement\n"); }
#line 1705 "syntax.tab.c"
    break;

  case 84:
#line 170 "syntax.y"
                             { printf("Type Primitive_Data_Type : Identifier\n"); }
#line 1711 "syntax.tab.c"
    break;

  case 85:
#line 171 "syntax.y"
                                { printf("Type Primitive_Data_Type_s : Identifier\n"); }
#line 1717 "syntax.tab.c"
    break;

  case 86:
#line 172 "syntax.y"
                       { printf("Type Keyword_Void: Identifier\n"); }
#line 1723 "syntax.tab.c"
    break;

  case 87:
#line 173 "syntax.y"
                                             { printf("Opening Primitive_Data_Type CLosing: Identifier\n"); }
#line 1729 "syntax.tab.c"
    break;

  case 88:
#line 174 "syntax.y"
                                               { printf("Opening Primitive_Data_Type_s CLosing: Identifier\n"); }
#line 1735 "syntax.tab.c"
    break;

  case 102:
#line 217 "syntax.y"
                         { printf("Expression operation: Expression\n ");}
#line 1741 "syntax.tab.c"
    break;

  case 103:
#line 218 "syntax.y"
                                  { printf("Expression Comparator: Expression \n");}
#line 1747 "syntax.tab.c"
    break;

  case 104:
#line 219 "syntax.y"
                                {printf("Expression Binary Operator: Expression");   }
#line 1753 "syntax.tab.c"
    break;

  case 105:
#line 220 "syntax.y"
                 { printf("Assignment: Expression \n");}
#line 1759 "syntax.tab.c"
    break;


#line 1763 "syntax.tab.c"

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 233 "syntax.y"

#include"lex.yy.c"
#include<ctype.h>
int count=0;

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");

   if(!yyparse())
        printf("\nNo syntax error found! :)\n");
    else
        printf("\nThe code has syntax error! (:\n");

    fclose(yyin);
    return 0;
}

yyerror(char *s) {
    printf("%d : %s %s\n", yylineno, s, yytext );
}
