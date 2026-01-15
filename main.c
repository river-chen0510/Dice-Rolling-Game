#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    while(1){
        greeting();
    
        if(selection < 1 || selection > 3){
            printf("Invalid input! Please try again! \n \n \n ");
        }

        if(selection == 1){
            rollDice();
        }

        if(selection == 2){
            displayResults();
        }

        if(selection == 3){
            printf("Game is ending...");
            break;
        }
    }

    return 0;
}