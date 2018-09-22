#include <stdio.h>

// storage class defines the scope and lifetime of a variable and or functions within a C program

// total we have four different storage classes: auto, register, static, extern
// note: we have seen extern before to define globals from other modules other than the main executed one

void func(void);			// forward function def

int count = 5; 				// global



int main(int argc, char **argv){
	//default storage class: auto 
	// below are two int type variables define as local variables
	int number_of_cakes;
	auto int number_of_pies;

	//register class is to define local variables that should/could be stored
	// in a CPU register instead of RAM. Max size of variable/data is equal to 
	//  the register size (ie. 32bit == 4 bytes == dword)
	register int my_counter;

	//static storage class instructs the compiler to keep the local variable in existence
	// during the lifetime of the enter program, instead of creating and destroying it each time
	//  it comes into and goes out of scope. (poping it and pushing it back to the stack)
	
	while(count--){		// -1 evals to False
		
		func();
	
	}

	//extern class is used to give a refernce of a global variable that is in the scope of all 
	// programs

	return 0;

}
void func(void){	
	static int i =  5;
		
	printf("each time this function runs, static variable --> i,  will not be reinitialized and will be incremented: %d\n", i);
	
	i++;
}
