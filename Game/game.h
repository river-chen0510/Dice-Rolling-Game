#ifndef GAME_H
#define GAME_H

//* variables
extern int selection;
extern int gamesPlayed;

extern int playerTotal;
extern int computerTotal;

extern int computerWins;
extern int playerWins;
extern int ties;

extern int n;

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



