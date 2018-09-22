#include <stdio.h>

// using keyword extern, the variable can use outside the scope of current block
// carefull messing with global variables in bigger projects
int global_variable = 1;
// global but from a different module
extern int test = 99;

int main(int argc, char **argv){
	
	//declaring variables
	
	int i, j, k;
	char character, letter;
	float pie, salary_rate;
	double Ds;	// hehe
	
	//initializing variables
	i = 2;
	j = 0;
	k = 1;

	// character is a lvalue, expresssion that refer to a memory location, b/c it has been declared earlier
	// 'a' is a rvalue and cannot be on the left side of assignement, because it reprsents a data value
	character = 'a';
	letter = 'u';

	pie = 3.14;
	salary_rate = 13.50;	// dollars/hour

	Ds = 9999999999999999.99;
	
	printf("variable i: %d\n", i);
	printf("variable j: %d\n", j);
	printf("variable k: %d\n", k);
	printf("variable character: %c\n", character);
	printf("variable letter: %c\n", letter);
	printf("variable pie: %E\n", pie);
	printf("variable salary_rate: %E\n", salary_rate);
	printf("variable Ds: %E\n", Ds);
	printf("extern variable test: %d\n", test);
	printf("variable global_variable: %d\n", global_variable);

	

	return 0;
}
