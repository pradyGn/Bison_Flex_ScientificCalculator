/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LBR = 258,
     RBR = 259,
     EOL = 260,
     FLO = 261,
     CEI = 262,
     MOD = 263,
     SIN = 264,
     COS = 265,
     TAN = 266,
     FACT = 267,
     SQRT = 268,
     LOG2 = 269,
     LOG10 = 270,
     ABS = 271,
     POW = 272,
     PLUS = 273,
     MIN = 274,
     MUL = 275,
     DIV = 276,
     EQ = 277,
     PTOD = 278,
     DTOP = 279,
     ETOP = 280,
     PTOE = 281,
     ETOD = 282,
     DTOE = 283,
     MTOK = 284,
     KTOM = 285,
     CFAH = 286,
     FAHC = 287,
     NUM = 288,
     PI = 289,
     VAR_KEYWORD = 290,
     VAR = 291
   };
#endif
/* Tokens.  */
#define LBR 258
#define RBR 259
#define EOL 260
#define FLO 261
#define CEI 262
#define MOD 263
#define SIN 264
#define COS 265
#define TAN 266
#define FACT 267
#define SQRT 268
#define LOG2 269
#define LOG10 270
#define ABS 271
#define POW 272
#define PLUS 273
#define MIN 274
#define MUL 275
#define DIV 276
#define EQ 277
#define PTOD 278
#define DTOP 279
#define ETOP 280
#define PTOE 281
#define ETOD 282
#define DTOE 283
#define MTOK 284
#define KTOM 285
#define CFAH 286
#define FAHC 287
#define NUM 288
#define PI 289
#define VAR_KEYWORD 290
#define VAR 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "Parser.ypp"
{

float val;
char *str;

}
/* Line 1529 of yacc.c.  */
#line 128 "Parser.tab.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

