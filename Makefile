integrala: integrala.o functii.o
	clang -Wall functii.o integrala.o -o integrala -lm
integrala.o: integrala.c functii.h
	clang -c -Wall integrala.c
functii.o: functii.c functii.h
	clang -c -Wall functii.c
.Phony:clean
clean:
	rm -f *.o
	rm c3P4
