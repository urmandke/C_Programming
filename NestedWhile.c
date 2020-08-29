#include <stdio.h>

// 0 
// 1 0 
// 2 1 0 
// 3 2 1 0 
// 4 3 2 1 0 
// 5 4 3 2 1 0 
// 6 5 4 3 2 1 0 
// 7 6 5 4 3 2 1 0 
// 8 7 6 5 4 3 2 1 0 
// 9 8 7 6 5 4 3 2 1 0

int main()
{
	int i = 0;
	
	while(i<=10)
	{
		int k = 0;
		while (k<=i)
		{
			printf("%d ",k);
			k++;
		}

		printf("\n");
		i++;
	}

	return 0;
}

