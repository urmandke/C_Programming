// Cable gave a coding chanllenge to create a program that will take input of two numbers and output the_
// length of the hypotenuse of a right triangle formed with side equal to the two numbers.

#include <stdio.h>
#include <math.h>

int main()
{
    double num1, num2, hypotenuse;
    num1 = num2 = hypotenuse = 0;
    
    printf("Please enter the first number:\n");
    scanf("%lf", &num1);

    printf("Please enter the first number:\n");
    scanf("%lf", &num2);
   
    hypotenuse = sqrt(num1*num1 + num2*num2);

    printf("The hypotenuse of right traingle from the given numbers is: %f \n",hypotenuse);

    return 0;
}