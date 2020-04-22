/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    INT = 300,
    CHAR = 301,
    FLOAT = 302,
    DOUBLE = 303
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
#define INT 300
#define CHAR 301
#define FLOAT 302
#define DOUBLE 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "project.y" /* yacc.c:1909  */

int data_type;
char var_name[30];

#line 155 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
