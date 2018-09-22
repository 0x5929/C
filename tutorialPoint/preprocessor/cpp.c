#include <stdio.h>


// demostrating new concepts: 
// # operator and ## operator in preprocessing


// proper way of using these operators
#define STRINGIFY2(x) #x
#define STRINGIFY(x) STRINGIFY2(x)
#define PASTE2(a, b) a##b
#define PASTE(a,b) PASTE2(a,b)

// improper way, b/c if predefined macros are passed in, they need one more level of abstraction, orelse we will see
// __TIME__ in the results, no good

#define BAD_PASTE(x,y) x##y
#define BAD_STRINGIFY(x) #x

#define SOME_MACRO function_name

int main(int argc, char **argv){


	printf("Buggy results: \n");
	printf("%s\n", STRINGIFY(BAD_PASTE(SOME_MACRO, __LINE__)));
	printf("%s\n", BAD_STRINGIFY(BAD_PASTE(SOME_MACRO, __LINE__)));
	printf("%s\n", BAD_STRINGIFY(PASTE(SOME_MACRO, __LINE__)));


	printf("\n Desired results: \n");
	printf("%s\n", STRINGIFY(PASTE(SOME_MACRO, __LINE__)));
	return 0;
}
