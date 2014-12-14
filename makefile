main1: main1.c pi_bbp.c pi_fun.h
	clang -o main1 main1.c pi_bbp.c -lm
	
main2: main2.c pi_leibniz.c pi_fun2.h
	clang -o main1 main1.c pi_bbp.c -lm
		
main3: main3.o pi_bbp.o pi_leibniz.o pi_fun2.h pi_fun.h
	clang -o main3 main3.o pi.o pi_bbp.o -lm
	
clean : 
	rm -f *~
	rm -f *.o
	rm -f main1
	rm -f main2
	rm -f main3
