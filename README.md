# Dice Rolling Game

## Table of Contents
- [1. Description](#1-Description)
    - [1.1. What I Learned](#11-What-I-Learned)
- [2. Gameplay](#2-Gameplay)
    - [2.1. Rolling the Dice](#21-Rolling-the-Dice)
    - [2.2. Displaying Results](#22-Displaying-Results)
    - [2.3. Ending the Game](#23-Ending-The-Game)
- [3. Implementations](#3-Implementations)
    - [3.1. Advanced Error Detection](#31-Advanced-Error-Detection)
    - [3.2. Number Generation](#32-Number-Generation)
    - [3.3. Advanced Memory](#33-Advanced-Memory)
    - [3.4. Multi-File-System](#34-Multi-File-System)
    - [3.5. Shell Commands](#35-Shell-Commands)
- [4. Flow Chart](#4-Flow-Chart)
- [5. The End](#5-The-End)
    - [5.1. Contact](#51-Contact)
  
# 1. Description
This game is a simple dice-rolling game. It is written in C, made with a multi-file system, with a build-clean system to compile the files, and clean them once they have been run. **_This game is meant to be played in the terminal._**

When played, the game will roll two dice for both the player and the computer. Then, it will add up the values of the two rolls for both and then compare the two values. 
Whichever roll got the most points will be declared the winner with a message. If there is a tie, the game will also declare a tie, and no one will get a point. 
Then, the game will store what each player's score was inside an array, along with what round it was in. 

## 1.1. What I Learned
Throughout this capstone project, I learned many fundamentals of C, including: 
- **Arrays**
- **Project management using shell commands and Makefile**
- Character and string arrays
- Multi-file system

# 2. Gameplay
The dice rolling game has three options in the main menu. Each option can be selected by entering a number from 1 to 3. 
The options are:

- Roll Dice (Select 1)
- Show Results (Select 2)
- End Game (Select 3)

Example: 

``` 
Welcome to the Dice Rolling Game!
Please select an option:
1. Play a Round
2. Show results
3. Exit
Please enter your selection:
```

## 2.1. Rolling the Dice
If the player selects 1, the game will instantly roll two dice for the player and the computer. Then, their rolls will be added up and stored in an array, along with what round they are 
currently on. Whichever player's roll is higher will be declared the winner, and their number of wins will be increased by one. If there is a tie, the game will say so, and neither the player nor the game will receive a point.
**_The maximum number of rounds the player can play is 100._**

### Examples: 
Player wins: 
```
Please enter your selection: 1

You rolled: 2 and 5. Total = 7
Computer rolled: 3 and 1. Total = 4

You won this round!
```

Computer wins: 
```
Please enter your selection: 1

You rolled: 5 and 1. Total = 6
Computer rolled: 6 and 3. Total = 9

The computer won this round!
```
Tie: 
```
Please enter your selection: 1

You rolled: 2 and 3. Total = 5
Computer rolled 4 and 1. Total = 5

It's a tie!
```

## 2.2. Displaying Results
After the player plays some rounds, they will want to view their results. When selection 2 is entered, the player will be brought to the results page. Here, information such as **Games Played**, **Round #**,
**Scores for the player and computer**, **Wins**, and **Ties** will be shown. 

```
Please enter your selection: 2

Round results:

Rounds played: 3

Round 1: You: 7, Computer: 4
Round 2: You: 6, Computer: 9
Round 3: You: 5, Computer: 5

Wins = You: 1. Computer: 1. Ties: 1

// Main menu
Welcome to the Dice Rolling Game!
```

## 2.3. Ending the Game
Once the player has played enough rounds, they will want to end the game. To end the game, simply select 3. 
```
Please enter your selection: 3

Game is ending...

//Game ended
riverchen@Mac Capstone 3-Dice-Rolling-Game
```

# 3. Implementations
This simple Dice Rolling Game features many implementations, including: 

This dice rolling game has many implementations, including: 

- Advanced error detection for characters, numbers, etc.
- Continue running after errors
- Number generation
- Memory for rounds, scores, wins, ties
- Multi-File System
- Shell commands

## 3.1. Advanced Error Detection
Becuase this game needs the user's input in the main menu, I have added error detection so the game can detect characters, strings, and numbers other than 1, 2, or 3.

Number too high:  
``` 
Please enter your selection: 5

Invalid input! Please try again!
```

Number too low: 
```
Please enter your selection: 0

Invalid input! Please try again!
```

Character inputted:
```
Please enter your selection: c

Invalid input! Please try again!
```

String inputted:
```
Please enter your selection: I'm confused

Invalid input! Please try again!
```

After an error is detected, the code will return to the main menu to let the user try again. 
```
Please enter your selection: I'm confused

Invalid input! Please try again!

// Returned to main menu
Welcome to the dice rolling game!
Please select an option: 
1. Play a round 
2. Show results 
3. Exit 
Please enter your selection: 
```
## 3.2. Number Generation
This dice rolling requires four numbers between 1 and 6 to be generated, to imitate rolling two dice. The game will roll for the player, and the computer the player is competing against. 
To be able to roll these dice, the game will roll the dice twice for the player and computer, then the two rolls will be stored into an array to be printed and added up. 
To generate these numbers, I used a for loop that loops twice to generate 2 numbers and store them into an array. When another round clears, the numbers inside the array will be reset, and new numbers will be generated. This allows the game to generate fresh numbers for each round. 

Three-round example: 

**Round 1:**
```
Please enter your selection: 1

You rolled: 5 and 3. Total = 8 
Computer rolled: 1 and 3. Total = 4 
 
You won this round! 

```

**Round 2:**
```
Please enter your selection: 1

You rolled: 6 and 2. Total = 8 
Computer rolled: 1 and 6. Total = 7 
 
You won this round! 
```

**Round 3:**
```
Please enter your selection: 1

 
You rolled: 1 and 3. Total = 4 
Computer rolled: 4 and 6. Total = 10 
 
The computer won this round!
```

As you can see, after each round, the numbers generated change. After the total is calculated for both the player and computer, it will be stored in these two arrays:
```
playerResult[100]
computerResult[100]
```

## 3.3. Advanced "Memory"
To make selection 2 work (display results), this game needs to be able to store the results of the player and computer, of each round. Becuase it's impossible to make an endless array, The maximum number of rounds that can be played is 100. 
```
int rounds = 100;

int playerResult[100];
int computerResult[100];
```
With a max cap of 100, the game can now store the score of each round. To have it match the round number when printed, the game adjusts the first print so it doesn't say round 0.
```
rounds[i] = rounds[i] + 1;
```
The game also keeps track of the number of wins and losses the player and computer have, and how many ties occurred.

All this data can be accessed by selecting 2 in the main menu.

Example after 10 rounds played:
```
Please enter your selection: 2

Round Results: 
 
Games played: 10 
 
Round 1: You: 4, Computer: 9 
Round 2: You: 8, Computer: 4 
Round 3: You: 8, Computer: 7 
Round 4: You: 4, Computer: 10 
Round 5: You: 4, Computer: 10 
Round 6: You: 6, Computer: 10 
Round 7: You: 9, Computer: 5 
Round 8: You: 5, Computer: 5 
Round 9: You: 5, Computer: 7 
Round 10: You: 4, Computer: 8 

Wins = You: 3. Computer: 6. Ties: 1. 
```
_Note that the results are the dice rolls added up, not each separate dice roll._

## 3.4. Multi-File System
Because of the length of the code in this game, I must split it into three different files. One to make functions, one to declare arrays and variables, and one file to put everything together and make it run. 
File Examples:
```
game.c // what each function does
game.h // declarations
main.c // main file, puts everything together
```

## 3.5. Shell Commands
To run the code, compile it, and clean up files, a shell script is used. This script compiles the game, creating an executable file that can be run. It then cleans up the generated files after the game is played.

**Files before**
```
build-clean.sh //shell
game.c
game.h
main.c 
```

**Compiling**
To compile, run this in the terminal:
```
./build-clean.sh build
```
After, the code should print:
```
./build-clean.sh build
Building project...
Build completed //Confirms code was compiled
riverchen@Mac Capstone-3-Dice-Rolling-Game % 
```

After the game is compiled, main.out, and a folder will be generated:
```
main.out.DYSM
main.out
```

To run the game, just type in:
```
./main.out
```

**Cleaning**
After playing the game, you will need to clean up the files, as you don't want any extra files. To clean up extra files, type this in the terminal:
```
./build-clean.sh clean
```

This will delete:
```
main.out.DYSM
main.out
```

Use these simple steps to run, clean, and manage the game. 

# 4. Flow Chart
This is a simple flow chart I made to show how my game's logic works.
<img width="720" height="627" alt="image" src="https://github.com/user-attachments/assets/90dec4c1-239c-4509-b6e5-87fdf1e38698" />


# 5. The End
This concludes the README about my simple Dice Rolling Game! Thanks for reading!

## 5.1 Contact
If you really enjoyed this README, have any questions, comments, or suggestions, feel free to contact me via email at riverchen0510@gmail.com. **_No spam please!_**












        
