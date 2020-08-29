
#include <stdio.h>

/* This is a game that randomly genererates spikes at top or bottom. The user is expected to take input w to jump top and s to crawl on the ground.
    The user must press s then spikes are at the top  and w when when spikes are at the bottom. The user may also press c as cheat to instantly refill the health. 
*/



int generateSpikes(){

//Generate Spikes randomly outputs 1, 0. 1 indicates spikes on top and 0 indicates spikes on bottom

}


int main()
{
	printf("Hello, welcome to Dungeon of Doom, you are walking through a dark cave and there are spikes in front of you!\n\n\
!-----------!Every step you take there are deinitely spikes!!\n\
!-----------!But you don't know if there are on the ceiling (when you must crawl) or they are on the ground(you must jump).\n\
!-----------!Have faith and enter w for jump and s for crawl.\n\
!-----------!Every step you move if you guessed right, you score will increase.\n\
!-----------!You have maximum of 10 hit points and the cave is 100 steps long, lets us see if you can reach the end.\n\
!-----------!If you know the cheat key, press it to regain all your health points but lost half you steps\n");
    int health = 10;
	
    int *addressHealth = &health;

    int spikePosition = 0;
    char userInput; //Only valid inputs are w, s or c

    int score = 0;

    while (health > 0){
        spikePosition = generateSpikes();
        prinf("Please enter w or s, you may also enter the cheat key but only the Dungeon Masters knows that...!");
        printf("Press to q to exit \n");
        scanf("%c",&userInput);
        getchar();

        //Validate input:w, s or c
        if(userInput != 's' || userInput !='w'|| userInput !='c' || userInput !='q'){
            continue;
        }
       
        //If user inputs c, send message that cheatmode activated score will be halfed,
        if(userInput == 'c')
        {
            //set health to 10
            health = 10;
            //half the score
            score = score/2; //interger divison is acceptable (floor division)
        }
            
        //Compare spike position against user input.
            //If user input is w and spikes are 1 and If user input is s and spikes are 0.
        if((spikePosition == 1 && userInput == 'w')||(spikePosition == 0 && userInput == 's'))
        {
            health = health - 1;     
        }else 
        {
            score = score + 1;
        }

         if (userInput == 'e')
        {
            printf("Exiting now... you score was %d and you still had %d health left", score, health);
            break;
        }


        //If score = 100 .. break,user wins
        if (score == 100)
        {
            printf("You see the light for a first time in a while,\n YOU WIN !!!");
            break;
        }

    }

    printf("Thank you for playing Dungeon of Doom");
    return 0;
}

