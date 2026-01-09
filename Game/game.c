#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//* variables
int selection = 0;
int gamesPlayed = 0;

int playerTotal = 0;
int computerTotal = 0;

int computerWins = 0;
int playerWins = 0;
int ties = 0;

int n = 0;

//* arrays
int player_roll[2];
int computer_roll[2];
int playerResult[100];
int computerResult[100];


int rounds[100];

int rollDice(){
    rounds[n] = n;

    //* Generate player number
    for(int i = 0; i < 2; i++){
        player_roll[i] = rand() % 6 + 1;
    }

    //* Print player roll
    playerTotal = player_roll[0] + player_roll[1];
    printf("You rolled: %d and %d. Total = %d \n", player_roll[0], player_roll[1], playerTotal);
    playerResult[n] = playerTotal;

    //* Generate computer number
    for(int i = 0; i < 2; i++){
        computer_roll[i] = rand() % 6 + 1;
    }

    //* Print computer roll
    computerTotal =  computer_roll[0] + computer_roll[1];
    printf("Computer rolled: %d and %d. Total = %d \n \n", computer_roll[0], computer_roll[1], computerTotal);
    computerResult[n] = computerTotal;
    
    //* ifs
    if(playerTotal > computerTotal){
        printf("You won this round! \n \n \n");
        playerWins++;
    }

    if(computerTotal > playerTotal){
        printf("The computer won this round! \n \n \n");
        computerWins++;
    }

    if(playerTotal == computerTotal){
        printf("It's a tie! \n");
        ties++;
    }

    gamesPlayed++;
    n++;

    // TODO: in main.c, put srand(time(0)) when calling rollDice();
}

int displayResults(){
        int size = 1;

        printf("Round Results: \n \n");

        printf("Games played: %d \n \n", gamesPlayed);

        for(int i = 0; i < gamesPlayed; i++){

            rounds[i] = rounds[i] + 1;

            printf("Round %d: ", rounds[i]);
            printf("You: %d, ", playerResult[i]);
            printf("Computer: %d \n", computerResult[i]);

            }

        printf("\n \n");

        printf("Wins = You: %d. Computer: %d. Ties: %d. \n", playerWins, computerWins, ties);
}

int greeting(){
    while(1){
        printf("Welcome to the dice rolling game! \n");
        printf("Please select an option: \n \n");

        printf("1. Play a round \n");
        printf("2. Show results \n");
        printf("3. Exit \n");
        
        printf("Please enter your selection: ");
        scanf(" %d", &selection);

        printf("\n \n");

        //* Buffer clear
        while (getchar() != '\n');

        if(selection == 1){
            rollDice();
        }

        if(selection == 2){
            displayResults();
            // TODO: Do testing once multi-file system is made
        }

        if(selection == 3){
            // TODO: Do testing once multi-file system is made
        }


    }
}

//! Testing
int main(){
    greeting();
    rollDice();
    displayResults();


    return 0;
}