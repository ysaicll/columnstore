
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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




