# Dice Rolling Game

## Table of Contents
- [1. Description](#1-Description)
    - [1.1. What I Learned](#11-What-I-Learned)
- [2. Features](#2-Features)
- [3. Gameplay](#3-Gameplay)
    - [3.1. Rolling the Dice](#31-Rolling-the-Dice)
    - [3.2. Displaying Results](#32-Displaying-Results)
    - [3.3. Ending the Game](#33-Ending-The-Game)
- [4. Implementations](#4-Implementations)
  
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

# 3. Gameplay
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

## 3.1. Rolling the Dice
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

## 3.2. Displaying Results
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

## 3.3. Ending the Game
Once the player has played enough rounds, they will want to end the game. To end the game, simply select 3. 
```
Please enter your selection: 3

Game is ending...

//Game ended
riverchen@Mac Capstone 3-Dice-Rolling-Game
```

# 4. Implementations
This simple Dice Rolling Game features many implementations, including: 

This dice rolling game has many implementations, including: 

- Advanced error detection for characters, numbers, etc.
- Continue running after errors
- Number generation
- Memory for rounds, scores, wins, ties
- Shell commands

## 4.1. Advanced Error Detection
Becuase this game need's the user's input in the main menu, I have added error detection so the game can detect characters, strings, and numbers other than 1, 2, or 3.

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
Please enter your selection: im confused

Invalid input! Please try again!
```

After an error is detected, the code will return to the main menu to let the user try again. 
```
Please enter your selection: im confused

Invalid input! Please try again!

// Returned to main menu
Welcome to the dice rolling game!
Please select an option: 
1. Play a round 
2. Show results 
3. Exit 
Please enter your selection: 
```
## 4.2. Number Generation
This dice rolling requires four numbers between 1 and 6 to be generated, to imitate rolling two dice. The game will roll for the player, and the computer the player is competing against. 
To be able to roll these dice, the game will roll the dice twice for the player and computer, then the two rolls will be stored into an array to be printed and added up. 
To generate these numbers, I used a for loop that loops twice to generate 2 numbers and store them into an array. When another round clears, the numbers inside the array will be reset, and new numbers will be generated. This allows the game to generate fresh numbers for each round. 

Three round example: 

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














        
