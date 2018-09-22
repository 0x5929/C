#include <stdio.h>
#include <string.h>

// pre-processor proceses the #define values
#define TRUE 1
#define FALSE 0


// typedef is processed by the compiler
// used to rename/give alias to types ONLY
typedef struct Cars{
	char make[50];
	char model[50];
	char color[50];
	int car_id;
} Car;

int main(int argc, char **argv){
	

	// preprocessor #define examples	
	printf("Value of TRUE: %d\n", TRUE);
	printf("Value of FALSE: %d\n", FALSE);

	// typedef example
	// instead of struct Cars car, we have
	Car car;

	strcpy(car.make, "Honda");
	strcpy(car.model, "Civic");
	strcpy(car.color, "Black");

	car.car_id = 1;

	printf("Car make is: %s\n", car.make);
	printf("Car model is: %s\n", car.model);
	printf("Car color is: %s\n", car.color);
	printf("Car car_id is: %d\n", car.car_id);
	

	return 0;
}
