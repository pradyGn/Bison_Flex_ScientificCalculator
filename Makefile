all: extendedCalc

extendedCalc: parser.o lexer.o
	g++ lex.yy.c Parser.tab.cpp -o pag9901calculator

parser.o:
	Bison -d -t Parser.ypp

lexer.o: Parser.tab.cpp
	flex Lexer.lpp