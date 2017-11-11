all: hungarian-algorithm

hungarian-algorithm: hungarian-alg-test.o hungarian-alg.o
	gcc hungarian-alg-test.o hungarian-alg.o -o hungarian-algorithm

hungarian-alg-test.o: hungarian-alg-test.c
	gcc -c hungarian-alg-test.c

hungarian-alg.o: hungarian-alg.c
	gcc -c hungarian-alg.c

clean:
	rm -f *.o hungarian-algorithm
