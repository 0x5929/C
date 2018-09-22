#include <stdio.h>
#include <float.h>

// forward declaration
void whatsMySizes();

int main(int argc, char **argv){
	printf("Basic types in C and storage, note: storage will change depends on the size of CPU registers\n");
	printf("Basic types in C and storage, note: more importantly it depeneds on compiler, and compiler will do the abstraction\n");
	printf("char type takes 1 byte\n");
	printf("unsigned char takes 1 byte\n");
	printf("signed char takes 1 byte\n");
	printf("int takes 2 or 4 bytes\n");
	printf("unsiged int takes 2 or 4 bytes\n");
	printf("short takes 2 bytes\n");
	printf("unsigned short takes 2 bytes\n");
	printf("long takes 4 bytes\n");
	printf("unsiged long takes 4 bytes\n");
	printf("float takes 4 bytes\n");
	printf("double takes 8 bytes\n");
	printf("long double takes 10 bytes\n");
	printf("remember that all unsigned types are non negative values\n");

	printf("CALLING FUNCTION TO CHECK EACH TYPE STORAGE SIZE ON HOST MACHINE...\n");
	
	whatsMySizes();

	return 0;
}

// also float.h header file contains named constants that shows the max and min float values
void whatsMySizes(){
	printf("storage size for char : %d\n", sizeof(char));
	printf("storage size for unsigned char : %d\n", sizeof(unsigned char));
	printf("storage size for signed char : %d\n", sizeof(signed char));
	printf("storage size for int : %d\n", sizeof(int));
	printf("storage size for unsigned int : %d\n", sizeof(unsigned int));
	printf("storage size for short : %d\n", sizeof(short));
	printf("storage size for unsigned short : %d\n", sizeof(unsigned short));
	printf("storage size for long : %d\n", sizeof(long));
	printf("storage size for unsigned long : %d\n", sizeof(unsigned long));
	printf("storage size for float : %d\n", sizeof(float));
	printf("storage size for double : %d\n", sizeof(double));
	printf("storage size for long double : %d\n", sizeof(long double));

	// %E is double or float number
	printf("Float max in contstant: FLT_MAX:  %E\n", FLT_MAX);
	printf("Float min in constant: FLT_MIN:  %E\n", FLT_MIN);
	printf("Precision value: FLT_DIG:  %d\n", FLT_DIG);

}
