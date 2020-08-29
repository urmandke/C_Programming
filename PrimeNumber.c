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
		else 
		{
			return true;
		}
	}
}

int main()
{

	int number;

	printf("Please enter any whole number below 65535:\n");
	scanf("%d",&number);
	getchar();
	
	//Check for a valid input
	if (number < 0 || number > 65535)
	{
		printf("Please enter a smaller number!\n");
		return 0;
	}else
	{
		printf("input acccepted as %d\n",number);
	}
	
	//Test if number is prime
	if (isPrime(number))
	{
		printf("%d is a prime number\n",number);
	}
	else
	{
		printf("%d is not a prime number\n",number);
	}

	printf("Thank you for using PrimeNumber.c\n");

	return 0;
}

