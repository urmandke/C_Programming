#include <stdio.h>

int main()
{
	int slices = 20;
	int *p = &slices;

	printf("Slices: %d\n", slices);
	printf("Slices (through pointer): %d\n", *p);

	(*p)++;

	printf("Slices: %d\n", slices);
	printf("Slices (through pointer): %d\n", *p);

	return 0;
}

