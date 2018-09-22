#include <stdio.h>

//defining a constant using the define preprocessor
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char **argv){
	// or we can use the const keyword to define constants
	
	const int NEW_LENGTH = 40;
	const int NEW_WIDTH = 10;
	const char NEW_NEWLINE = '\n';

	int preprocess_area = LENGTH * WIDTH;
	int const_area = NEW_LENGTH * NEW_WIDTH;

	printf("value of area defined by preprocessor: %d", preprocess_area);
	printf("%c", NEWLINE);
	
	printf("value of area defined by const keyword: %d", const_area);
	printf("%c", NEW_NEWLINE);
	return 0;
}
