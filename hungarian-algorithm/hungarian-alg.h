#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

int *_table;
int _col;
int _row;


void set_table(int *, int, int);
int* get_table();
int table(int, int);
void print_options();
void pretty_print();

void run_hungarian_alg();
