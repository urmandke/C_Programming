#include <stdio.h>
#include <string.h>

int main()
{
	char favFood[50];
	printf("What is your favoriate food?\n");
	

	scanf("%49s", favFood);
	getchar();
	printf("%s\n", favFood);

	int charCount = 0;

	while(favFood[charCount] != '\0')
	{
		charCount++;
	}

	printf("The character count is %d\n", charCount);
	printf("The character count using strlen is %ld \n", strlen(favFood));

	return 0;
}

