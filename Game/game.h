#ifndef GAME_H
#define GAME_H

//* variables
extern int selection = 0;
extern int gamesPlayed = 0;

extern int playerTotal = 0;
extern int computerTotal = 0;

extern int computerWins = 0;
extern int playerWins = 0;
extern int ties = 0;

extern int n = 0;

//* arrays
extern int player_roll[2];
extern int computer_roll[2];
extern int playerResult[100];
extern int computerResult[100];

extern int rounds[100];

void greeting();
void displayResults();
void rollDice();

#endif



