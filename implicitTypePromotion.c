#include <stdio.h>

int main()
{
	//implicit type converstion - promotion
	
	float x = 50.0;
	
	printer("x", x); //printf takes a double
			
	return 0; 	
}

void printer(char tacos[], double pizza){
	printf ("The value of %s is: %f",*tacos,pizza);
}


