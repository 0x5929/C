#include <stdio.h>


int main(int argc, char **argv) {

	int sum = 17;
	int count = 5;

	double mean;
	
	// note type casting has higher priority , so sum and count is type casted before division
	mean = (double) sum/count;
	printf("value of division if not type casted: %f\n", sum/count);
	printf("value of mean after type casted: %f\n", mean);



	int i = 7;
	char c = 'c';	//ascii value is 99
	float SUM = i + c;
	printf("value of 7 + 'c' after compiler does automatic interger promotion: %d\n", i + c);
	printf("value of 7 + 'c' after compiler does automatic interger promotion, and arithmetic converseion: %f\n", SUM);
	return 0;
}
