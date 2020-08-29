//The user have to guess a number 0 to 5
//output whether or not hte person is correct

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Generate a random number
    //psuedo random number
    //p
    //suedo random number seed
    int maxValue = 5;
  
    srand(time(NULL));
    int randomNumber = rand() % (maxValue + 1);


    printf("%d\n", randomNumber);

    //modulus operator can be used to get a number in range. Eg. for value between 0-5. Used random number % 6
    
    printf("Guess a number  0-%d:", maxValue);
   
    int input = -1;
    scanf("%d",&input);

    if(input == randomNumber)
    {
        printf("You win!\n");
    }
    else
    {
         printf("You dont win! Try again!\n");
    }
      
    return 0;
}