#include <stdio.h>
#include <string.h>

// REMEMBER: union is like struct, except it only stores one of its members, and there the size of the biggest member 
// declaring the global union

union Data {
	int i; 
	float f;
	char str[50];
};


int main(int argc, char **argv){

	
	union Data data;		// delcaring data union

	printf("union Data size : %d\n", sizeof(data));
	// since we are dealing with a union, we can only use one member at a time
	data.i = 20;
	printf("data.i : %d\n", data.i);
	
	data.f = 20.12;
	printf("data.f : %f\n", data.f);

	strcpy(data.str, "HELLO WORLD");
	printf("data.str : %s\n", data.str);

	return 0;

}
