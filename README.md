# Dice Rolling Game

# 1: Description
This game is a simple dice-rolling game. It is written in C, made with a multi-file system, with a build-clean system to compile the files, and clean them once they have been run. **_This game is meant to be played in the terminal._**

When played, the game will roll two dice for both the player and the computer. Then, it will add up the values of the two rolls for both and then compare the two values. 
Whichever roll got the most points will be declared the winner with a message. If there is a tie, the game will also declare a tie, and no one will get a point. 
Then, the game will store what each player's score was inside of an array, along with what round it was in. 

# 1.1: What I Learned
Throughout this capstone project, I learned many fundamentals of C, including: 
- **Arrays**
- **Project management using string and Makefile**
- Character arrays
- Multi file system
- 
# 2: Gameplay
The dice rolling game has three options in the main menu. Each option can be selected by entering a number from 1-3. 
The options are:

- Roll Dice (Select 1)
- Show Results (Select 2)
- End Game (Select 3)

Example: 

<img width="297" height="108" alt="image" src="https://github.com/user-attachments/assets/dde5cf7f-e813-43b1-b59c-733ee924984a" />

If there is an invalid input such as if the user enters a number other than 1, 2, or 3, or if a character is entered, the game will detect it, and will display an error message,
and then it will prompt the user to try again. 

Possible Errors: 


<img width="287" height="75" alt="image" src="https://github.com/user-attachments/assets/5cd6c568-151c-4678-a7a3-e38ad36bd61a" /> <img width="294" height="72" alt="image" src="https://github.com/user-attachments/assets/155cf69f-9291-4ec2-a005-03ff9931212b" /> <img width="281" height="77" alt="image" src="https://github.com/user-attachments/assets/be54d7bd-d568-4488-a017-75b8abc0eb28" />


## 2.1: Rolling the Dice
If the player selects 1, the game will instantly roll two dice, for the player and the computer. Then, their rolls will be added up and stored into an array, along with with what round they are 
currently on. Whoever's roll is higher will be declared the winner, and the amount of wins they have will be increased by one. If there is a tie, the game will say so, and neither the player or game will recieve a point.
**_The maxinum amount of rounds the player can play is 100._**

### Examples: 
Player win: 

<img width="321" height="124" alt="image" src="https://github.com/user-attachments/assets/713ddbd9-eb52-4616-9c92-5d8b45e87d26" />

Computer win: 

<img width="319" height="127" alt="image" src="https://github.com/user-attachments/assets/6d5a31a7-e59d-4249-b1fe-6e06af0564b3" />

Tie: 

<img width="313" height="120" alt="image" src="https://github.com/user-attachments/assets/b44a5db1-4b33-4893-ab99-19fca6870be7" />

## 2.2: Displaying Results
After the player plays some rounds, they will want to view their results. When selection 2 is entered, the player will be brought to the results page. Here, information such as **Games Played**, **Round #**,
**Scores for the player and computer**, **Wins**, and **Ties** will be shown. 

<img width="316" height="358" alt="image" src="https://github.com/user-attachments/assets/98453b0e-4767-42c8-96d2-438dcbbd5d23" />

## 2.3: Ending the Game
Once the player has played enough rounds, they will want to end the game. To end the game, simply select 3. 

<img width="407" height="88" alt="image" src="https://github.com/user-attachments/assets/1cde02df-9120-413d-b615-a2b66582f127" />










        
