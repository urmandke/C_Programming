
#include <stdio.h>

/* This is a game that randomly genererates spikes at top or bottom. The user is expected to take input w to jump top and s to crawl on the ground.
    The user must press s then spikes are at the top  and w when when spikes are at the bottom. The user may also press c as cheat to instantly refill the health. 
*/



int generateSpikes(){

//Generate Spikes randomly outputs 1, 0. 1 indicates spikes on top and 0 indicates spikes on bottom

}


int main()
{
	printf("Hello, welcome to Dungeon of Doom, you are walking through a dark cave and there are skipes in front of you!\n\n\
!-----------!Every step you take there are spikes!!\n\
!-----------!But you don't know if there are on the ceiling and you must crawl or they are on the ground and you must jump.\n\
!-----------!Have faith and enter w for jump and s for crawl.\n\
!-----------!You have maximum of 10 hit points, Let us see how long you survive.\n\
!-----------!If you know the cheat key, press it to regain all your health points\n");
    int health = 10;
	return 0;
    int *addressHealth = &health;

    int spikePosition = 0;

    while (health > 0){
        spikePosition = generateSpikes();
        //Provide a comment to user to enter w or s
        //Validate input:w, s or c
        //If user inputs c, send message that cheatmode activated score will be halfed,
            //set health to 10
            //half the score
        //Compare spike position against user input:
            //If user input is w and spikes are 1. health = health -1
            //If user input is s and spikes are 0. health = health -1
            //else score is score + 1 
        //If score = 100 .. User break,user wins
        // return 0; and exit program
    }
}

