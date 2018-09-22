#include <stdio.h>

int main(int argc, char **argv){

	int number = 0;
	int tester = 0;

	tester = (number !=0) ? (tester + 1) : (tester + 2);
	
	printf("tester should be 2, tester: %d\n", tester);



	return 0;


}
