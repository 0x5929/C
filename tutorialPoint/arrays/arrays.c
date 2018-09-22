#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	// declaring an array that has 10 type double elements
	double balance[10]; 						// stored on the stack
	
	// delcare and initialize an array on stack
	double bala[2] = {1.5, 1.23};

	//another way to declare and initailize array on stack
	double b[] = {1.0, 1.5, 1.11};					// the size amount is arbituary
	
	// declaring and initialize an array that has 10 type double elements, stored on the heap
	int size = 10;
	double *balance_dyn = malloc(sizeof(double) * size);			// declaration
	for (int i = 0; i < size; i++){						// initialize
		balance_dyn[i] = 9.7;
	}

	// this is a bad way to allocate heap arrays
	double *bal;
	bal = (double[10]){9.7, 9.7 ,9.4, 1.2, 1.5, 1.2, 3.4, 2.4, 12.5, 1.9};

		

	return 0;
}
