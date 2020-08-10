#include <stdio.h>

int main()
{
	int eggs;

	printf("The number of eggs for the day: ");
	scanf("%i" , &eggs);

	double dozen = (double) eggs/12; //Type casting double allows the answer of the datatype of the expression to change

	printf(" You have %f dozen eggs.\n", dozen);

	return 0;
}
