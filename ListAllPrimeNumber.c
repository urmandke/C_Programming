#include <stdio.h>
#include <stdbool.h>

//To take user input of a whole number
//To output all prime numbers including and lower then the given number.

bool isPrime (int num){
	for(int i = 2;i<num;i++)
	{
		if (num % i == 0)
		{
			return false;
		}
		
	}

	return true;
}

int main()
{

	int number;

	printf("Please enter any whole number below 65535 and greater than 2:\n");
	scanf("%d",&number);
	getchar();
	
	//Check for a valid input
	if (number < 2 || number > 65535)
	{
		printf("Please enter a smaller number or Please enter any other number than 1!\n");
		return 0;
	}else
	{
		printf("input acccepted as %d\n",number);
	}
	
	//Print all primes number till input
	for(int j=2;j<=number;j++){
		if (isPrime(j))
		{
			printf("%d\n",j);
		}
	}
	printf("Thank you for using ListAllPrimeNumber.c\n");

	return 0;
}

