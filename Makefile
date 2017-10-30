all: binarytreetest

binarytreetest: binarytreetest.o binarytree.o
	gcc binarytreetest.o binarytree.o -o binarytreetest

binarytreetest.o: binarytreetest.c
	gcc -c binarytreetest.c

binarytree.o: binarytree.c
	gcc -c binarytree.c

clean:
	rm -f *.o binarytreetest
