#include <stdio.h>
#include <string.h>

// declaring the global structure

struct Cars {
	char make[50];
	char model[50];
	char color[50];
	int car_id;
};

void print_car_info(struct Cars car);	//forward declaration

void print_car_from_ptr(struct Cars *car);

int main(int argc, char **argv){

	
	struct Cars car1;		// declaring car1 and car2 as type Car
	struct Cars car2;
	
	// car 1 specs
	strcpy(car1.make, "Honda");		// from string.h
	strcpy(car1.model, "Civic");
	strcpy(car1.color, "Black");
	
	car1.car_id = 112;
	
	// car 2 specs
	strcpy(car2.make, "Toyota");		
	strcpy(car2.model, "Corolla");
	strcpy(car2.color, "Red");
	
	car2.car_id = 79;

	// print car1 info
	print_car_info(car1);
	print_car_from_ptr(&car1);		//note passing in address using & operator

	// print car2 info
	print_car_info(car2);
	print_car_from_ptr(&car2);

	return 0;

}


void print_car_info(struct Cars car){

	printf("Car make : %s\n", car.make);
	printf("Car model: %s\n", car.model);
	printf("Car color : %s\n", car.color);
	printf("Car id: %d\n", car.car_id);
}


// notice the -> operator is the same as (*car).member
void print_car_from_ptr(struct Cars *car){

	printf("Car make (from ptr): %s\n", car->make);
	printf("Car model (from ptr): %s\n", car->model);
	printf("Car color (from ptr): %s\n", car->color);
	printf("Car id (from ptr): %d\n", car->car_id);
	

}
