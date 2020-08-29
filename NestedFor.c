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

	for (int i=0; i<10; i++)
	{
		for (int k=i;k>=0;k--)
		{
			printf("%d ",k);
		}

		printf("\n");
	}

	return 0;
}

