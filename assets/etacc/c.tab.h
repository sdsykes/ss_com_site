#ifndef BISON_C_TAB_H
# define BISON_C_TAB_H

# ifndef YYSTYPE
#  define YYSTYPE int
#  define YYSTYPE_IS_TRIVIAL 1
# endif
# define	IDENTIFIER	257
# define	CONSTANT	258
# define	STRING_LITERAL	259
# define	SIZEOF	260
# define	PTR_OP	261
# define	INC_OP	262
# define	DEC_OP	263
# define	LEFT_OP	264
# define	RIGHT_OP	265
# define	LE_OP	266
# define	GE_OP	267
# define	EQ_OP	268
# define	NE_OP	269
# define	AND_OP	270
# define	OR_OP	271
# define	MUL_ASSIGN	272
# define	DIV_ASSIGN	273
# define	MOD_ASSIGN	274
# define	ADD_ASSIGN	275
# define	SUB_ASSIGN	276
# define	LEFT_ASSIGN	277
# define	RIGHT_ASSIGN	278
# define	AND_ASSIGN	279
# define	XOR_ASSIGN	280
# define	OR_ASSIGN	281
# define	TYPE_NAME	282
# define	TYPEDEF	283
# define	EXTERN	284
# define	STATIC	285
# define	AUTO	286
# define	REGISTER	287
# define	CHAR	288
# define	SHORT	289
# define	INT	290
# define	LONG	291
# define	SIGNED	292
# define	UNSIGNED	293
# define	FLOAT	294
# define	DOUBLE	295
# define	CONST	296
# define	VOLATILE	297
# define	VOID	298
# define	STRUCT	299
# define	UNION	300
# define	ENUM	301
# define	ELLIPSIS	302
# define	CASE	303
# define	DEFAULT	304
# define	IF	305
# define	ELSE	306
# define	SWITCH	307
# define	WHILE	308
# define	DO	309
# define	FOR	310
# define	GOTO	311
# define	CONTINUE	312
# define	BREAK	313
# define	RETURN	314


extern YYSTYPE yylval;

#endif /* not BISON_C_TAB_H */
