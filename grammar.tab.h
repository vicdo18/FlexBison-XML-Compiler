/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
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
    T_EOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_LINEAR_LAYOUT = 258,         /* T_LINEAR_LAYOUT  */
    T_RELATIVE_LAYOUT = 259,       /* T_RELATIVE_LAYOUT  */
    T_TEXT_VIEW = 260,             /* T_TEXT_VIEW  */
    T_IMAGE_VIEW = 261,            /* T_IMAGE_VIEW  */
    T_BUTTON = 262,                /* T_BUTTON  */
    T_RADIO_BUTTON = 263,          /* T_RADIO_BUTTON  */
    T_RADIO_GROUP = 264,           /* T_RADIO_GROUP  */
    T_PROGRESS_BAR = 265,          /* T_PROGRESS_BAR  */
    T_END_TAG = 266,               /* T_END_TAG  */
    T_END_LINEAR_LAYOUT = 267,     /* T_END_LINEAR_LAYOUT  */
    T_END_RELATIVE_LAYOUT = 268,   /* T_END_RELATIVE_LAYOUT  */
    T_END_TEXT_VIEW = 269,         /* T_END_TEXT_VIEW  */
    T_END_IMAGE_VIEW = 270,        /* T_END_IMAGE_VIEW  */
    T_END_BUTTON = 271,            /* T_END_BUTTON  */
    T_END_RADIO_BUTTON = 272,      /* T_END_RADIO_BUTTON  */
    T_END_RADIO_GROUP = 273,       /* T_END_RADIO_GROUP  */
    T_END_PROGRESS_BAR = 274,      /* T_END_PROGRESS_BAR  */
    T_ANDROID_LAYOUT_WIDTH = 275,  /* T_ANDROID_LAYOUT_WIDTH  */
    T_ANDROID_LAYOUT_HEIGHT = 276, /* T_ANDROID_LAYOUT_HEIGHT  */
    T_ANDROID_ID = 277,            /* T_ANDROID_ID  */
    T_ANDROID_TEXT = 278,          /* T_ANDROID_TEXT  */
    T_ANDROID_ORIENTATION = 279,   /* T_ANDROID_ORIENTATION  */
    T_ANDROID_SRC = 280,           /* T_ANDROID_SRC  */
    T_ANDROID_PADDING = 281,       /* T_ANDROID_PADDING  */
    T_ANDROID_TEXTCOLOR = 282,     /* T_ANDROID_TEXTCOLOR  */
    T_ANDROID_CHECKEDBUTTON = 283, /* T_ANDROID_CHECKEDBUTTON  */
    T_RADIO_BUTTON_CHILD_COUNT = 284, /* T_RADIO_BUTTON_CHILD_COUNT  */
    T_ANDROID_PROGRESS = 285,      /* T_ANDROID_PROGRESS  */
    T_ANDROID_MAX = 286,           /* T_ANDROID_MAX  */
    T_COMMENT_OPEN = 287,          /* T_COMMENT_OPEN  */
    T_COMMENT_CLOSE = 288,         /* T_COMMENT_CLOSE  */
    T_STRING = 289,                /* T_STRING  */
    T_STRING_SINGLE_QUOTE = 290,   /* T_STRING_SINGLE_QUOTE  */
    T_POSITIVE_INTEGER = 291,      /* T_POSITIVE_INTEGER  */
    T_SLASH_END_TAG = 292,         /* T_SLASH_END_TAG  */
    T_STRING_DQ_SPACE = 293,       /* T_STRING_DQ_SPACE  */
    T_DOT = 294,                   /* T_DOT  */
    T_COMMA = 296,                 /* T_COMMA  */
    T_ASSIGN = 298,                /* T_ASSIGN  */
    T_COLON = 300,                 /* ":"  */
    T_LBRACK = 301,                /* T_LBRACK  */
    T_RBRACK = 303,                /* T_RBRACK  */
    T_SLASH = 305,                 /* "/"  */
    T_EXCLAMATION = 306,           /* "!"  */
    T_DASH = 307,                  /* "-"  */
    T_LBRACES = 308,               /* "{"  */
    T_RBRACES = 309,               /* "}"  */
    T_AT = 310,                    /* T_AT  */
    T_QUESTION_MARK = 312,         /* "?"  */
    T_UNDERSCORE = 313,            /* "_"  */
    T_HASH = 314,                  /* "#"  */
    T_SQUOTES = 315                /* "'"  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 72 "grammar.y"

   int intval;
   float floatval;
   char charval;
   char *strval;

#line 125 "grammar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
