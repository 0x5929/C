#include <stdio.h>
#include <string.h>

// bit field in a structure declaration
struct{
	unsigned int age : 3		// bit field declaration, 3 bits can at most add up to the number 7 if all bits are turned on


} Age;


int main(int argc, char **argv){
	Age.age = 4;
	printf("Age.age: %d\n", Age.age);
	
	Age.age = 5;
	printf("Age.age: %d\n", Age.age);

	Age.age = 6;
	printf("Age.age: %d\n", Age.age);

	Age.age = 7;
	printf("Age.age: %d\n", Age.age);

	Age.age = 8;
	printf("Age.age when setting to the number 8 which is 1000 in binary (4 bit, or 1 byte representation): %d\n", Age.age);
	return 0;
}
