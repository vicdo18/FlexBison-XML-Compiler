/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "grammar.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"
#include <stdbool.h>
#define MAX_RADIO_BUTTONS 100
#define MAX_USED_IDS 100  
#define MAX_ID_LENGTH 100 
#define MAX_IDS 100


/** Extern from Flex **/
extern int lineno, 
           line_init;

extern char str_buf[256];    
extern char* str_buf_ptr;


/*Flex and bison*/
  extern int yylex();
  extern char *yytext;
  extern FILE *yyin;
  

  extern void yyterminate();

/* Variables for error handling and saving */
int error_count=0; 
int flag_err_type=0; // 0: Token Error (YYTEXT) || 1: String Error (STRBUF)
int scope=0;
int pos_number=0;
int flag=0;  //flag gia to token ean einai swsto to android
int valueflag=0;
char* strint;
char valid_radio_buttons[MAX_RADIO_BUTTONS][50];  // Array to store valid radio button ids
int valid_radio_button_count = 0;
int max_value = 0;  // Variable to store android:max values
char used_ids[MAX_USED_IDS][MAX_ID_LENGTH];  // Array to store used IDs
int used_id_count = 0;
static int child_count = 0;  // Counter for child elements within <RadioGroup>    ///3
static int child_count_rge = 0;  // value of radio_button_child_count
char radio_button_ids[MAX_IDS][MAX_ID_LENGTH];    
int radio_button_id_count = 0;
char temp_checked_button[MAX_ID_LENGTH];
char* checked_button_id = NULL;  
char used_checkb[MAX_USED_IDS][MAX_ID_LENGTH];
char check_radiob[MAX_USED_IDS][MAX_ID_LENGTH];
int flag_radio_button=0;



/*Specific Functions*/
void yyerror(const char *message);
bool containsDash(const char* str);
int dq_string_to_int(const char* str);
int isIdUsed(char* id);
void addUsedId(char* id);
void addUsedIdInt(int id);
void increment_child_count();
void check_radio_group_child_count(int expected_count, int cumulative_count);
int isIdUsedInRadioButtons(char* id);
int checkRadioButtonId();
void save_checked_button_id(char* id);
void checkRadioBId(char* id);
void check_values();

#line 140 "grammar.tab.c"

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

#include "grammar.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_LINEAR_LAYOUT = 3,            /* T_LINEAR_LAYOUT  */
  YYSYMBOL_T_RELATIVE_LAYOUT = 4,          /* T_RELATIVE_LAYOUT  */
  YYSYMBOL_T_TEXT_VIEW = 5,                /* T_TEXT_VIEW  */
  YYSYMBOL_T_IMAGE_VIEW = 6,               /* T_IMAGE_VIEW  */
  YYSYMBOL_T_BUTTON = 7,                   /* T_BUTTON  */
  YYSYMBOL_T_RADIO_BUTTON = 8,             /* T_RADIO_BUTTON  */
  YYSYMBOL_T_RADIO_GROUP = 9,              /* T_RADIO_GROUP  */
  YYSYMBOL_T_PROGRESS_BAR = 10,            /* T_PROGRESS_BAR  */
  YYSYMBOL_T_END_TAG = 11,                 /* T_END_TAG  */
  YYSYMBOL_T_END_LINEAR_LAYOUT = 12,       /* T_END_LINEAR_LAYOUT  */
  YYSYMBOL_T_END_RELATIVE_LAYOUT = 13,     /* T_END_RELATIVE_LAYOUT  */
  YYSYMBOL_T_END_TEXT_VIEW = 14,           /* T_END_TEXT_VIEW  */
  YYSYMBOL_T_END_IMAGE_VIEW = 15,          /* T_END_IMAGE_VIEW  */
  YYSYMBOL_T_END_BUTTON = 16,              /* T_END_BUTTON  */
  YYSYMBOL_T_END_RADIO_BUTTON = 17,        /* T_END_RADIO_BUTTON  */
  YYSYMBOL_T_END_RADIO_GROUP = 18,         /* T_END_RADIO_GROUP  */
  YYSYMBOL_T_END_PROGRESS_BAR = 19,        /* T_END_PROGRESS_BAR  */
  YYSYMBOL_T_ANDROID_LAYOUT_WIDTH = 20,    /* T_ANDROID_LAYOUT_WIDTH  */
  YYSYMBOL_T_ANDROID_LAYOUT_HEIGHT = 21,   /* T_ANDROID_LAYOUT_HEIGHT  */
  YYSYMBOL_T_ANDROID_ID = 22,              /* T_ANDROID_ID  */
  YYSYMBOL_T_ANDROID_TEXT = 23,            /* T_ANDROID_TEXT  */
  YYSYMBOL_T_ANDROID_ORIENTATION = 24,     /* T_ANDROID_ORIENTATION  */
  YYSYMBOL_T_ANDROID_SRC = 25,             /* T_ANDROID_SRC  */
  YYSYMBOL_T_ANDROID_PADDING = 26,         /* T_ANDROID_PADDING  */
  YYSYMBOL_T_ANDROID_TEXTCOLOR = 27,       /* T_ANDROID_TEXTCOLOR  */
  YYSYMBOL_T_ANDROID_CHECKEDBUTTON = 28,   /* T_ANDROID_CHECKEDBUTTON  */
  YYSYMBOL_T_RADIO_BUTTON_CHILD_COUNT = 29, /* T_RADIO_BUTTON_CHILD_COUNT  */
  YYSYMBOL_T_ANDROID_PROGRESS = 30,        /* T_ANDROID_PROGRESS  */
  YYSYMBOL_T_ANDROID_MAX = 31,             /* T_ANDROID_MAX  */
  YYSYMBOL_T_COMMENT_OPEN = 32,            /* T_COMMENT_OPEN  */
  YYSYMBOL_T_COMMENT_CLOSE = 33,           /* T_COMMENT_CLOSE  */
  YYSYMBOL_T_STRING = 34,                  /* T_STRING  */
  YYSYMBOL_T_STRING_SINGLE_QUOTE = 35,     /* T_STRING_SINGLE_QUOTE  */
  YYSYMBOL_T_POSITIVE_INTEGER = 36,        /* T_POSITIVE_INTEGER  */
  YYSYMBOL_T_SLASH_END_TAG = 37,           /* T_SLASH_END_TAG  */
  YYSYMBOL_T_STRING_DQ_SPACE = 38,         /* T_STRING_DQ_SPACE  */
  YYSYMBOL_T_DOT = 39,                     /* T_DOT  */
  YYSYMBOL_40_ = 40,                       /* "."  */
  YYSYMBOL_T_COMMA = 41,                   /* T_COMMA  */
  YYSYMBOL_42_ = 42,                       /* ","  */
  YYSYMBOL_T_ASSIGN = 43,                  /* T_ASSIGN  */
  YYSYMBOL_44_ = 44,                       /* "="  */
  YYSYMBOL_T_COLON = 45,                   /* ":"  */
  YYSYMBOL_T_LBRACK = 46,                  /* T_LBRACK  */
  YYSYMBOL_47_ = 47,                       /* "["  */
  YYSYMBOL_T_RBRACK = 48,                  /* T_RBRACK  */
  YYSYMBOL_49_ = 49,                       /* "]"  */
  YYSYMBOL_T_SLASH = 50,                   /* "/"  */
  YYSYMBOL_T_EXCLAMATION = 51,             /* "!"  */
  YYSYMBOL_T_DASH = 52,                    /* "-"  */
  YYSYMBOL_T_LBRACES = 53,                 /* "{"  */
  YYSYMBOL_T_RBRACES = 54,                 /* "}"  */
  YYSYMBOL_T_AT = 55,                      /* T_AT  */
  YYSYMBOL_56_ = 56,                       /* "@"  */
  YYSYMBOL_T_QUESTION_MARK = 57,           /* "?"  */
  YYSYMBOL_T_UNDERSCORE = 58,              /* "_"  */
  YYSYMBOL_T_HASH = 59,                    /* "#"  */
  YYSYMBOL_T_SQUOTES = 60,                 /* "'"  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_program = 62,                   /* program  */
  YYSYMBOL_linearlayout = 63,              /* linearlayout  */
  YYSYMBOL_linearlayout2 = 64,             /* linearlayout2  */
  YYSYMBOL_linearlayoutattributes = 65,    /* linearlayoutattributes  */
  YYSYMBOL_layout_width = 66,              /* layout_width  */
  YYSYMBOL_layout_height = 67,             /* layout_height  */
  YYSYMBOL_android_id = 68,                /* android_id  */
  YYSYMBOL_android_orientation = 69,       /* android_orientation  */
  YYSYMBOL_text = 70,                      /* text  */
  YYSYMBOL_textColor = 71,                 /* textColor  */
  YYSYMBOL_checkedButton = 72,             /* checkedButton  */
  YYSYMBOL_progress = 73,                  /* progress  */
  YYSYMBOL_padding = 74,                   /* padding  */
  YYSYMBOL_max = 75,                       /* max  */
  YYSYMBOL_src = 76,                       /* src  */
  YYSYMBOL_relativelayout = 77,            /* relativelayout  */
  YYSYMBOL_relativelayout2 = 78,           /* relativelayout2  */
  YYSYMBOL_relativelayoutattributes = 79,  /* relativelayoutattributes  */
  YYSYMBOL_textview = 80,                  /* textview  */
  YYSYMBOL_textviewattributes = 81,        /* textviewattributes  */
  YYSYMBOL_imageview = 82,                 /* imageview  */
  YYSYMBOL_imageviewattributes = 83,       /* imageviewattributes  */
  YYSYMBOL_radiogroup = 84,                /* radiogroup  */
  YYSYMBOL_radio_start = 85,               /* radio_start  */
  YYSYMBOL_radio_end = 86,                 /* radio_end  */
  YYSYMBOL_radiogroupattributes = 87,      /* radiogroupattributes  */
  YYSYMBOL_radio_group_element = 88,       /* radio_group_element  */
  YYSYMBOL_radiobutton = 89,               /* radiobutton  */
  YYSYMBOL_radiobuttonattributes = 90,     /* radiobuttonattributes  */
  YYSYMBOL_progressbar = 91,               /* progressbar  */
  YYSYMBOL_progressbarattributes = 92,     /* progressbarattributes  */
  YYSYMBOL_comment = 93,                   /* comment  */
  YYSYMBOL_element = 94                    /* element  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   162,   162,   163,   166,   167,   170,   171,   172,   176,
     177,   178,   179,   182,   203,   209,   223,   235,   247,   266,
     290,   301,   310,   319,   330,   338,   355,   370,   381,   391,
     392,   393,   394,   395,   396,   399,   400,   401,   405,   406,
     407,   408,   411,   414,   415,   416,   419,   422,   423,   424,
     425,   436,   439,   461,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   507,   522,   527,
     535,   536,   537,   541,   544,   545,   546,   547,   551,   564,
     565,   566,   567,   568,   569,   570,   571,   572
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_LINEAR_LAYOUT",
  "T_RELATIVE_LAYOUT", "T_TEXT_VIEW", "T_IMAGE_VIEW", "T_BUTTON",
  "T_RADIO_BUTTON", "T_RADIO_GROUP", "T_PROGRESS_BAR", "T_END_TAG",
  "T_END_LINEAR_LAYOUT", "T_END_RELATIVE_LAYOUT", "T_END_TEXT_VIEW",
  "T_END_IMAGE_VIEW", "T_END_BUTTON", "T_END_RADIO_BUTTON",
  "T_END_RADIO_GROUP", "T_END_PROGRESS_BAR", "T_ANDROID_LAYOUT_WIDTH",
  "T_ANDROID_LAYOUT_HEIGHT", "T_ANDROID_ID", "T_ANDROID_TEXT",
  "T_ANDROID_ORIENTATION", "T_ANDROID_SRC", "T_ANDROID_PADDING",
  "T_ANDROID_TEXTCOLOR", "T_ANDROID_CHECKEDBUTTON",
  "T_RADIO_BUTTON_CHILD_COUNT", "T_ANDROID_PROGRESS", "T_ANDROID_MAX",
  "T_COMMENT_OPEN", "T_COMMENT_CLOSE", "T_STRING", "T_STRING_SINGLE_QUOTE",
  "T_POSITIVE_INTEGER", "T_SLASH_END_TAG", "T_STRING_DQ_SPACE", "T_DOT",
  "\".\"", "T_COMMA", "\",\"", "T_ASSIGN", "\"=\"", "\":\"", "T_LBRACK",
  "\"[\"", "T_RBRACK", "\"]\"", "\"/\"", "\"!\"", "\"-\"", "\"{\"",
  "\"}\"", "T_AT", "\"@\"", "\"?\"", "\"_\"", "\"#\"", "\"'\"", "$accept",
  "program", "linearlayout", "linearlayout2", "linearlayoutattributes",
  "layout_width", "layout_height", "android_id", "android_orientation",
  "text", "textColor", "checkedButton", "progress", "padding", "max",
  "src", "relativelayout", "relativelayout2", "relativelayoutattributes",
  "textview", "textviewattributes", "imageview", "imageviewattributes",
  "radiogroup", "radio_start", "radio_end", "radiogroupattributes",
  "radio_group_element", "radiobutton", "radiobuttonattributes",
  "progressbar", "progressbarattributes", "comment", "element", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      87,   -13,   -13,    13,   -25,   -84,     8,     2,     2,   -84,
      41,   -84,   -84,   -84,   -84,   151,    69,   109,   119,   151,
     -13,   -13,   -13,   -13,   -84,   -13,    28,   -84,   151,   151,
     151,   151,   151,   -84,    72,   -84,   -84,    70,    32,   130,
     151,   -84,   -84,   -84,    82,    88,     2,    73,     2,    74,
       2,    75,   -13,     2,    83,   -84,   -84,   -84,   -84,   -84,
     -84,   104,   114,   -84,   -84,   -84,   151,   -84,   -84,   -84,
     151,   151,   110,   117,    50,   -84,   107,   -84,    50,   134,
       2,   132,   129,   -84,   -13,   -84,   -84,   120,   140,    82,
     151,   152,   -30,   141,   -84,   131,   -16,   141,   -84,   -84,
      36,   134,   135,   156,   136,   -84,   -84,   150,   -84,   158,
     -13,   -84,   -84,   142,   -84,   137,   146,   -84,   147,    38,
     145,   147,   -84,   144,   148,   151,   143,   165,   -84,   169,
     149,   -84,   -84,   -84,   -84,    42,   -84,   153,   -84,   -84,
     164,   -84,   154,   -84,   172,   -84,   -84,   -84,   -84,     4,
     134,   -84,   -84,   -84,   -84,   104,   134,   -84,   -84,   -84,
     -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    41,     0,     0,     2,     0,     0,     0,     3,
       0,     1,    13,    15,    14,    87,     0,    87,    38,    87,
      41,     0,     0,     0,    52,     0,     0,    86,    87,    87,
      84,    87,    87,    85,     0,    16,    17,     0,     0,    87,
      87,     9,    39,    40,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,    82,    79,    83,    80,
      81,     6,     0,    19,    18,    20,    87,    10,    11,    36,
      87,     0,     0,     0,     0,    42,     0,    46,     0,    68,
       0,     0,    74,    73,     0,     7,     8,     0,     0,     0,
      87,     0,     0,     0,    43,     0,    47,     0,    70,    69,
      54,     0,    75,     0,     0,    12,    29,     0,    31,     0,
       0,    21,    22,    44,    28,     0,    48,    50,    71,    55,
      56,    58,    53,     0,    76,    87,     0,    30,    32,     0,
       0,    45,    26,    49,    72,    60,    62,     0,    57,    59,
       0,    27,     0,    77,     0,    78,    34,    33,    23,    61,
       0,    64,    67,    51,    25,     4,     0,    65,    63,     5,
      66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,    30,   -84,   102,    -1,    -5,   -17,   155,   -44,
     -84,   -83,   -84,    71,   -84,   -84,   -42,   -84,   -15,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -80,   -61,   -84,
      97,    81,   -84,    -3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    85,     5,     6,     8,    17,    39,    40,    94,
     131,    27,   143,   117,   124,    96,    28,     9,    10,    29,
      47,    30,    49,    31,    52,   140,    81,   138,    32,    51,
      33,    54,   105,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       7,    42,    69,    18,   111,    45,    37,     4,   112,    12,
     115,    13,    23,    11,    41,    43,    44,   120,    99,    15,
      46,    48,    50,    16,    53,    56,    57,    58,    59,    60,
      72,    62,    14,   137,    98,   134,    67,    68,   139,   121,
     122,    74,    73,    76,    23,    78,    23,   108,    82,   113,
      23,    80,   149,   118,    19,   150,   119,    93,   136,    92,
      37,    97,    55,    87,    26,   102,    65,    88,    89,   156,
      26,   137,    37,    92,   151,   100,    20,    21,    22,   116,
      23,    24,    25,     7,    61,   107,    20,   109,   157,   158,
       1,     2,    20,    21,    22,   160,    23,    24,    25,    70,
      26,    71,   135,    35,    63,    36,    64,    84,     4,    53,
      75,    77,    79,    20,    21,    22,    26,    23,    24,    25,
      83,    90,   144,    20,    21,    22,    86,    23,    24,    25,
      91,    37,    95,    38,    20,    21,    22,    26,    23,    24,
      25,    37,    23,   101,    20,    21,    22,    26,    23,    24,
      25,    37,   104,   106,    38,    20,    21,    22,    26,    23,
      24,    25,    25,   127,    92,   114,   123,   125,    26,   130,
     126,   128,   115,   132,   137,    26,   145,   146,   142,    26,
     141,   147,   153,   148,   155,   159,   103,   133,   110,   152,
     154,   129,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       1,    18,    44,     8,    34,    20,    22,    20,    38,    34,
      26,    36,     8,     0,    17,    18,    19,   100,    79,    11,
      21,    22,    23,    21,    25,    28,    29,    30,    31,    32,
      45,    34,    57,    29,    78,   118,    39,    40,   121,   100,
     101,    46,    45,    48,     8,    50,     8,    89,    53,    93,
       8,    52,   135,    97,    13,   135,   100,    74,   119,    23,
      22,    78,    34,    66,    28,    82,    34,    70,    71,   149,
      28,    29,    22,    23,   135,    80,     4,     5,     6,    96,
       8,     9,    10,    84,    12,    88,     4,    90,   149,   150,
       3,     4,     4,     5,     6,   156,     8,     9,    10,    11,
      28,    13,   119,    34,    34,    36,    36,     3,    20,   110,
      37,    37,    37,     4,     5,     6,    28,     8,     9,    10,
      37,    11,   125,     4,     5,     6,    12,     8,     9,    10,
      13,    22,    25,    24,     4,     5,     6,    28,     8,     9,
      10,    22,     8,    11,     4,     5,     6,    28,     8,     9,
      10,    22,    32,    13,    24,     4,     5,     6,    28,     8,
       9,    10,    10,    13,    23,    34,    31,    11,    28,    27,
      34,    13,    26,    36,    29,    28,    33,    12,    30,    28,
      36,    12,    18,    34,    12,   155,    84,   116,    91,    36,
      36,   110,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    62,    20,    64,    65,    66,    66,    78,
      79,     0,    34,    36,    57,    11,    21,    67,    67,    13,
       4,     5,     6,     8,     9,    10,    28,    72,    77,    80,
      82,    84,    89,    91,    94,    34,    36,    22,    24,    68,
      69,    94,    68,    94,    94,    79,    66,    81,    66,    83,
      66,    90,    85,    66,    92,    34,    94,    94,    94,    94,
      94,    12,    94,    34,    36,    34,    69,    94,    94,    77,
      11,    13,    79,    94,    67,    37,    67,    37,    67,    37,
      66,    87,    67,    37,     3,    63,    12,    94,    94,    94,
      11,    13,    23,    68,    70,    25,    76,    68,    70,    89,
      67,    11,    68,    65,    32,    93,    13,    94,    77,    94,
      91,    34,    38,    70,    34,    26,    68,    74,    70,    70,
      72,    89,    89,    31,    75,    11,    34,    13,    13,    92,
      27,    71,    36,    74,    72,    68,    89,    29,    88,    72,
      86,    36,    30,    73,    94,    33,    12,    12,    34,    72,
      88,    89,    36,    18,    36,    12,    88,    89,    89,    63,
      89
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    70,    70,    71,    72,    73,    74,    75,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    80,    81,    81,    81,    82,    83,    83,    83,
      83,    84,    85,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    89,    89,
      90,    90,    90,    91,    92,    92,    92,    92,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     5,     6,     4,     5,     5,     3,
       4,     4,     6,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     5,
       6,     5,     6,     7,     7,     3,     4,     3,     2,     3,
       3,     0,     3,     3,     4,     5,     3,     3,     4,     5,
       4,     7,     0,     0,     2,     3,     3,     4,     3,     4,
       4,     5,     4,     6,     5,     6,     7,     2,     3,     4,
       3,     4,     5,     3,     2,     3,     4,     5,     3,     2,
       2,     2,     2,     2,     1,     1,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
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
  case 13: /* layout_width: T_ANDROID_LAYOUT_WIDTH T_STRING  */
#line 183 "grammar.y"
                           {  
                            if (strcmp((yyvsp[-1].strval), "android:layout_width=") == 0 || flag==1) {  //ama to flag exei ginei 1 exei mpei hdh mia fora kai einai swsto to android opote meta tha pairnei to string apla
                                  //printf("EDW TO FLAG :\t%d\t",flag);
                                  flag=1;
                               if (strcmp((yyvsp[0].strval), "\"match_parent\"") == 0 || strcmp((yyvsp[0].strval), "\"wrap_content\"") == 0){   //|| strcmp($2, T_DIMENSION) == 0 || strcmp($2, T_PERCENTAGE) == 0) {
                                  //printf("%s = %s\n", $1, $2);
                                  valueflag=1;
                                } 
                                 
                                }
                            else 
                              yyerror("Expected android:layout_width=");

                            if(valueflag==0 ) //an ta string != value poy prepei na exoyn
                                  {
                                    printf("Invalid value for android:layout_width: %s\n", (yyvsp[0].strval));
                                    yyerror("Invalid value.");
                                  } 
                           }
#line 1638 "grammar.tab.c"
    break;

  case 14: /* layout_width: T_ANDROID_LAYOUT_WIDTH "?"  */
#line 204 "grammar.y"
                           {
                            printf("\nWrong!\n");
                            yyerror("Invalid value.");
                           }
#line 1647 "grammar.tab.c"
    break;

  case 15: /* layout_width: T_ANDROID_LAYOUT_WIDTH T_POSITIVE_INTEGER  */
#line 209 "grammar.y"
                                                                     {
                            
                            flag=0;
                            if(strcmp((yyvsp[-1].strval), "android:layout_width=") == 0 || flag == 1){
                               flag=1;
                               pos_number=atoi((yyvsp[0].strval));
                               //printf("%s = %d\n", $1, pos_number);
                               }
                            else yyerror("Expected android:layout_width=");
                           }
#line 1662 "grammar.tab.c"
    break;

  case 16: /* layout_height: T_ANDROID_LAYOUT_HEIGHT T_STRING  */
#line 224 "grammar.y"
                            {   flag=0;
                            if (strcmp((yyvsp[-1].strval), "android:layout_height=") == 0 || flag == 1) {\
                                flag=1;
                               if (strcmp((yyvsp[0].strval), "\"match_parent\"") == 0 || strcmp((yyvsp[0].strval), "\"wrap_content\"") == 0){ // || strcmp($2, T_DIMENSION) == 0 || strcmp($2, T_PERCENTAGE) == 0) {
                                  //printf("%s = %s\n", $1, $2);
                                } else 
                                   printf("Invalid value for android:layout_height: %s\n", (yyvsp[0].strval));
                                }
                            else 
                              yyerror("Expected android:layout_height=");
                            }
#line 1678 "grammar.tab.c"
    break;

  case 17: /* layout_height: T_ANDROID_LAYOUT_HEIGHT T_POSITIVE_INTEGER  */
#line 235 "grammar.y"
                                                                      {
                            flag=0;
                            if(strcmp((yyvsp[-1].strval), "android:layout_height=") == 0 || flag==1){
                                flag=1;
                               pos_number=atoi((yyvsp[0].strval));
                               //printf("%s = %d\n", $1, pos_number);
                               }
                            else yyerror("Expected android:layout_height=");
                            }
#line 1692 "grammar.tab.c"
    break;

  case 18: /* android_id: T_ANDROID_ID T_POSITIVE_INTEGER  */
#line 248 "grammar.y"
                {
                    flag = 0;
                    if (strcmp((yyvsp[-1].strval), "android:id=") == 0 || flag == 1) {
                        flag = 1;
                        pos_number = dq_string_to_int((yyvsp[0].strval));
                        printf("%s = %d\n", (yyvsp[-1].strval), pos_number);
                        char pos_number_str[20];  // Buffer to hold the string representation of pos_number
                        snprintf(pos_number_str, sizeof(pos_number_str), "%d", pos_number);

                        if (isIdUsed(pos_number_str)) {
                            yyerror("The android:id value is not unique.");
                        } else {
                            addUsedId(pos_number_str);
                        }
                    } else {
                        yyerror("Expected android:id=");
                    }
                }
#line 1715 "grammar.tab.c"
    break;

  case 19: /* android_id: T_ANDROID_ID T_STRING  */
#line 267 "grammar.y"
                {
                    flag = 0;
                    if (strcmp((yyvsp[-1].strval), "android:id=") == 0 || flag == 1) {
                        flag = 1;
                        printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));

                        if(flag_radio_button==1){
                            checkRadioBId((yyvsp[0].strval));
                        }

                        if(isIdUsed((yyvsp[0].strval))){
                            yyerror("The android:id value is not unique.");
                        }else{
                            addUsedId((yyvsp[0].strval));
                        }
                    } else {
                        yyerror("Expected android:id=");
                    }
                }
#line 1739 "grammar.tab.c"
    break;

  case 20: /* android_orientation: T_ANDROID_ORIENTATION T_STRING  */
#line 291 "grammar.y"
                                 {  flag=0;
                                 if(strcmp((yyvsp[-1].strval), "android:orientation=") == 0 || flag==1){
                                        flag=1;
                                    if(strcmp((yyvsp[0].strval), "\"horizontal\"") == 0 || strcmp((yyvsp[0].strval), "\"vertical\"") == 0)
                                    printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));
                                    }
                                 else yyerror("Expected android:orientation="); 
                                 }
#line 1752 "grammar.tab.c"
    break;

  case 21: /* text: T_ANDROID_TEXT T_STRING  */
#line 302 "grammar.y"
                                 {  
                                    flag=0;
                                    if(strcmp((yyvsp[-1].strval), "android:text=") == 0 || flag==1){
                                        flag=1;
                                    printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));}
                                 else yyerror("Expected android:text="); 
                                }
#line 1764 "grammar.tab.c"
    break;

  case 22: /* text: T_ANDROID_TEXT T_STRING_DQ_SPACE  */
#line 311 "grammar.y"
                                {flag=0;
                                    if(strcmp((yyvsp[-1].strval), "android:text=") == 0 || flag==1){
                                        flag=1;
                                    printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));}
                                 else yyerror("Expected android:text="); 
                                }
#line 1775 "grammar.tab.c"
    break;

  case 23: /* textColor: T_ANDROID_TEXTCOLOR T_STRING  */
#line 320 "grammar.y"
                                  { flag=0;
                                    if(strcmp((yyvsp[-1].strval), "android:textColor=") == 0 || flag==1){
                                        flag=1;
                                    printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));}
                                    else yyerror("Expected android:textColor=");    
                                  }
#line 1786 "grammar.tab.c"
    break;

  case 24: /* checkedButton: T_ANDROID_CHECKEDBUTTON T_STRING  */
#line 331 "grammar.y"
                    {
                    save_checked_button_id((yyvsp[0].strval));
                    printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));                    
                    }
#line 1795 "grammar.tab.c"
    break;

  case 25: /* progress: T_ANDROID_PROGRESS T_POSITIVE_INTEGER  */
#line 339 "grammar.y"
                                        {
                                            if (strcmp((yyvsp[-1].strval), "android:progress=") == 0 || flag == 1) {
                                                flag = 1;
                                                int progress = dq_string_to_int((yyvsp[0].strval));
                                                if (progress >= 0 && progress <= max_value) {
                                                    printf("%s = %d\n", (yyvsp[-1].strval), progress);
                                                } else {
                                                    yyerror("Invalid android:progress value");
                                                }
                                            } else {
                                                yyerror("Expected android:progress=");
                                            }
                                        }
#line 1813 "grammar.tab.c"
    break;

  case 26: /* padding: T_ANDROID_PADDING T_POSITIVE_INTEGER  */
#line 356 "grammar.y"
                            { flag=0;
                            if(strcmp((yyvsp[-1].strval), "android:padding=") == 0 || flag ==1) {
                                flag=1;
                                pos_number = atoi((yyvsp[0].strval));
                                    if (pos_number < 0) {
                                      yyerror("Invalid progress value. It should be a positive integer.");
                                    }
                                    printf("%s = ''%d''\n", (yyvsp[-1].strval), pos_number);}
                             else {
                                yyerror("Expected android:padding=");
                                  }
                            }
#line 1830 "grammar.tab.c"
    break;

  case 27: /* max: T_ANDROID_MAX T_POSITIVE_INTEGER  */
#line 371 "grammar.y"
                            {
                                if (strcmp((yyvsp[-1].strval), "android:max=") == 0) {
                                    max_value = dq_string_to_int((yyvsp[0].strval));
                                    printf("%s = %d\n", (yyvsp[-1].strval), max_value);
                                } else {
                                    yyerror("Expected android:max=");
                                }
                            }
#line 1843 "grammar.tab.c"
    break;

  case 28: /* src: T_ANDROID_SRC T_STRING  */
#line 382 "grammar.y"
                                {   flag=0;
                                    if(strcmp((yyvsp[-1].strval), "android:src=") == 0|| flag==1){
                                        flag=1;
                                    printf("%s = %s\n", (yyvsp[-1].strval), (yyvsp[0].strval));}
                                 else yyerror("Expected android:src="); 
                                }
#line 1854 "grammar.tab.c"
    break;

  case 52: /* radio_start: %empty  */
#line 440 "grammar.y"
                        {
                        flag_radio_button =1;
                        }
#line 1862 "grammar.tab.c"
    break;

  case 53: /* radio_end: %empty  */
#line 462 "grammar.y"
                        {
                            flag_radio_button = 0;
                            check_values();
                            check_radio_group_child_count(child_count, child_count_rge);
                        }
#line 1872 "grammar.tab.c"
    break;

  case 67: /* radio_group_element: T_RADIO_BUTTON_CHILD_COUNT T_POSITIVE_INTEGER  */
#line 508 "grammar.y"
                            {
                                const char* str = (yyvsp[0].strval);  // Get the string value
                                int len = strlen(str);
                                char* int_str = malloc(len - 1);  // Allocate memory for the integer string
                                strncpy(int_str, str + 1, len - 2);  // Copy the inner part of the string without the quotes
                                int_str[len - 2] = '\0';  // Add null terminator
                                child_count_rge = atoi(int_str);  // Convert the string to an integer
                                free(int_str);  // Free the allocated memory
                                printf("Number of children for <RadioGroup>: %d\n", child_count_rge);
                            }
#line 1887 "grammar.tab.c"
    break;

  case 68: /* radiobutton: T_RADIO_BUTTON radiobuttonattributes T_SLASH_END_TAG  */
#line 523 "grammar.y"
              {
                // Increment child count when a <RadioButton> is encountered
                increment_child_count();
              }
#line 1896 "grammar.tab.c"
    break;

  case 69: /* radiobutton: T_RADIO_BUTTON radiobuttonattributes T_SLASH_END_TAG radiobutton  */
#line 528 "grammar.y"
              {
                // Increment child count when a <RadioButton> is encountered
                increment_child_count();
              }
#line 1905 "grammar.tab.c"
    break;


#line 1909 "grammar.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 578 "grammar.y"


int main(int argc, char *argv[]){
    int token;

    /*Διάβασμα του αρχείου*/


    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); 
            return -1;
        }
    }

    /*Κάνε συνατικτική ανάλυση*/
    yyparse();


   if(error_count > 0){
        printf("Syntax Analysis failed due to %d errors\n", error_count);
      }
        
   else{
        printf("Syntax Analysis completed successfully.\n");
      }

    return 0;
    yyrestart(yyin);
    fclose(yyin);
}


void yyerror(const char *message)
{
    error_count++;
    
    if(flag_err_type==0){
        printf("-> ERROR at line %d caused by %s : %s\n", lineno, yytext, message);
    }else if(flag_err_type==1){
        *str_buf_ptr = '\0'; 
        printf("-> ERROR at line %d near \"%s\": %s\n", lineno, str_buf, message);
    }

    flag_err_type = 0; 
    if(MAX_ERRORS <= 0) return;
    if(error_count == MAX_ERRORS){
        printf("Max errors (%d) detected. ABORTING...\n", MAX_ERRORS);
        exit(-1);
    }
}


int dq_string_to_int(const char* str) {
    if (str[0] == '"' && str[strlen(str)-1] == '"') {
        char* new_str = malloc(strlen(str) - 1);
        strncpy(new_str, str + 1, strlen(str) - 2); 
        new_str[strlen(str) - 2] = '\0'; 

        int result = atoi(new_str); 
        free(new_str); 
        return result;
    } else {
        
        return 0;
    }
}

/////////////// functions to ensure every android:id is unique //////////////////////

int isIdUsed(char* id) {                      
    for (int i = 0; i < used_id_count; i++) {
        if (strcmp(used_ids[i], id) == 0) {
            return 1;  // ID is used
        }
    }
    return 0;  // ID is not used
}

void addUsedId(char* id) {
    strncpy(used_ids[used_id_count++], id, MAX_ID_LENGTH - 1);
    used_ids[used_id_count - 1][MAX_ID_LENGTH - 1] = '\0';  // Ensure null-termination
}

void addUsedIdInt(int id) {
    char id_string[MAX_ID_LENGTH];
    snprintf(id_string, sizeof(id_string), "%d", id);
    addUsedId(id_string);
}

//////////////////////////////////////////////////////////////////////////////// 3o erwthma /////////////////////////////////////////////////////////////

void increment_child_count() {
    child_count++;
}

/* // Function to check the number of children for <RadioGroup> 
void check_radio_group_child_count(int expected_count) {
    if (child_count != expected_count) {
        char error_message[100];
        sprintf(error_message, "Invalid number of children. Expected %d children for <RadioGroup>.", expected_count);
        yyerror(error_message);
    }else{
        printf("The number of children is correct!\n\n");
    }
    // Reset child count for the next <RadioGroup>
    child_count = 0;
} */

void check_radio_group_child_count(int expected_count, int cumulative_count) {
    if (cumulative_count != expected_count) {
        char error_message[100];
        printf("cumulative_count: %d\n", cumulative_count);
        sprintf(error_message, "Invalid number of children. Expected %d children for <RadioGroup>.", expected_count);
        yyerror(error_message);
    } else {
        printf("The number of children is correct!\n\n");
    }
}


///////////////////////////////// ERWTHMA 2 CHECKED_BUTTON //////////////////////////////////////////////////////////////////////////////////////////////


void save_checked_button_id(char* id){
  static int k = 0;
  size_t len = strlen(id);

     strncpy(used_checkb[k], id, len);
     k++;
     
     /* for(int i=0;i<k;i++){
        //printf("\n%s\n",used_checkb[i]);
     } */

}

void checkRadioBId(char* id){
      static int k = 0;
      size_t len = strlen(id);

     strncpy(check_radiob[k], id, len);
     k++;
     
     for(int i=0;i<k;i++){
     printf("\n%s\n",check_radiob[i]);
     }
    
}

void check_values() {
    int i, j;
    int check_flag = 0;
    int counter = 0;

    for (i = 0; i < 5; i++) {
        int match_found = 0; //  track if a match is found for each used_checkb value
        for (j = 0; j < 5; j++) {
            if (strcmp(used_checkb[i], check_radiob[j]) == 0) {
                match_found = 1; // Match found, set the flag
                counter++;
                break; 
            }
        }
        if (match_found == 0) {
            check_flag = 1; // No match found, set the flag to indicate mismatch
            break; // No need to continue the outer loop if a mismatch is found
        }
    }

    //printf("\n\n FLAG VALUE: \n %d \n", check_flag);

    if (check_flag == 1) {
        char error_message[100];
        sprintf(error_message, "CHECKED BUTTON VALUE ISN'T IN THE USED RadioButton IDs LIST");
        yyerror(error_message);
    }
    else {
        printf("The values are the same!\n\n");
    }
}
