debug=no
verbose=no
file=declaration_test.txt

compile: lex.l parse.y 
	@flex lex.l
	@yacc -d parse.y
	@gcc -o lex y.tab.c -w
	@./lex < input.txt

clean:
	@rm lex.yy.c
	@rm y.tab.h
	@rm y.tab.c
	@rm output.vm
	@rm *.dot
	@rm *.png
	@rm *.vm
