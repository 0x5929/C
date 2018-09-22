#include <stdio.h>
#include <stdarg.h>			// for variable argument functionality in C

double average(int num, ...){
	// type va_list is defined in stdarg.h
	va_list valist;	
	double sum = 0.0;
	int i;

	//initailize valist for num number of arguments 
	va_start(valist, num);

	//access all the arguments assigned to valist
	for (i = 0; i < num; i++){
		sum = sum + va_arg(valist, int);
	
	}

	//clean memory reserved for valist
	va_end(valist);

	return sum/num;
}

int main(int argc, char **argv){

	printf("Average of 2,3,4,5,6 = %f\n", average(2,3,4,5,6));
	printf("Average of 1,4,5,6,78,2 = %f\n", average(1,4,5,6,78,2));
	return 0;
}
