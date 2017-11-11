#include <stdio.h>
#include <stdlib.h>

#include "hungarian-alg.h"

void set_table(int *table, int m, int n) {
	_table = table;
	_row = m;
	_col = n;
}

int* get_table() {
	return _table;
}

int table(int i, int j) {
	int *table = get_table();
	if (table)
		return *((table+i*_col) + j);
	return NULL;
}

void print_options() {
	for (int i=0; i<_row; i++) {
		for (int j=0; j<_col; j++) {
			printf("%d ",  table(i, j));
		}
		printf("\n");
	}
}

void pretty_print() {
	for (int i=0; i<=_col*5; i++) {
		printf("-");
	}
	printf("\n");
	for (int i=0; i<_row; i++) {
		for (int j=0; j<_col; j++) {
			printf("| %2d ",  table(i, j));
		}
		printf("|\n");
	}
	for (int i=0; i<=_col*5; i++) {
		printf("-");
	}
	printf("\n");
}

void run_hungarian_alg() {
	
}

