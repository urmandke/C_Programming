#include <stdio.h>
#include <stdbool.h>

void main()
{
    bool isPizzaHealthy = true;
    int temp;
    printf("do you believe in pizza? \n(Please input 1 for yes and 0 for no):");
    scanf(": %d", &temp);

    isPizzaHealthy = temp;
       
   if(isPizzaHealthy)
   {
       // Will the code run?
       printf("Welcome to my pizza APP\n");
   }
    
}
