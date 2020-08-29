// Doctors Office
// Add a new patient
// View a patient 
// Search Patients
// Exit

#include <stdio.h>

int main()
{
    printf("Choose a menu option 1-4:\n");
    printf("1. Add a new patient\n");
    printf("2. View a patient\n");
    printf("3. Search patient\n");
    printf("4. Exit\n");
    
    int input;

    scanf("%d",&input);

    if(input == 1)
    {
        printf("Adding a patient\n");

    }else if (input == 2)
    {
        printf("Viewing a patient\n");
    }else if (input == 3)
    {
        printf("Searching a patient\n");
    }else if (input == 4)
    {
        printf("Exiting....\n");
    }
    
    
    return 0;
}