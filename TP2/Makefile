debug=no
verbose=no
file=declaration_test.txt

compile: cal.l superbock.y 
	@flex cal.l
	@yacc -d superbock.y
	@gcc -o cal y.tab.c -w
	@./cal < input.txt
	@vms output.vm

clean:
	@rm lex.yy.c
	@rm y.tab.h
	@rm y.tab.c
	@rm output.vm
	@rm *.dot
	@rm *.png
	@rm *.vm
