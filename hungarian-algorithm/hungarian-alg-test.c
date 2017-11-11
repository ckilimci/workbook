#include <stdio.h>

#include "hungarian-alg.h"

#define number_of_options 2
#define number_of_candidate 3

int main() {

	int table[number_of_options][number_of_candidate] = {
		{56, 67, 78},
		{32, 78, 11}
	};

	set_table((int *)table, number_of_options, number_of_candidate);
	pretty_print();
	return 0;
}
