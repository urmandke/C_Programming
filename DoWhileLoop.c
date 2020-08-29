#include <stdio.h>

int main()
{
	int i = 0;
	
	do
	{
		printf("Please enter a number 0- 9:");
		scanf("%d", &i);
		
	} while (i < 0 || i > 9);
	

	return 0;
}

