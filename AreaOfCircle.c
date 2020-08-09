#include <stdio.h>

int main()
{
	int radius; // The distance from the outside to center of the circle
	float area; // Area of a circle
	
	printf("Please enter a radius:");
	scanf("%i", &radius); //address-of operator

	area = 3.14*radius*radius;

	printf("The area of the circle with radius %i is %f\n",radius,area);
	return 0;
}

