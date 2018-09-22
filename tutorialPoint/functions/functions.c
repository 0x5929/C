#include <stdio.h>

void passByValue(int val){
	val = 1000;
	return;
}

void passByReference(int *address_variable){
	*address_variable = 7;
	return;

}

int main(int argc, char **argv){

	int number = 20;

	// BY DEFAULT: C uses pass by value, meaning the code within a function cannot alter the arguments used to call the function

	//demostrate function call by pass by value: calling a function with *address_variable gives the value to the calling function
	passByValue(*&number);	// same as passByValue(number) used the other one to stay consistent with statement above

	printf("pass by value, number is now: %d\n", number);

	//demostrate function call by pass by reference: calling a function with &variable gives the referece of variable to the calling function
	passByReference(&number);

	printf("pass by refernce, number should be changed: %d\n", number);

	
	return 0;

}
