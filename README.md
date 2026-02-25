# Word Guessing Game in C++

I built this project to practice the fundamentals of C++. I wanted to move beyond just writing simple "hello world" scripts and actually build something interactive that people could play. 

## What it is
It’s a terminal-based game where you try to figure out a hidden word before you run out of lives. I added a difficulty toggle (0 for Easy, 1 for Hard) which changes how many letters stay hidden using a modulo-based masking logic.

## Why I built it this way
I spent some time making sure the logic was separated properly. Instead of putting everything in one big main() function, I used two specific helper functions:
* maskWord: This handles the logic for hiding letters based on the difficulty you pick. 
* updateMaskedWord: This checks your guesses against the original word and updates the screen.

Using pass-by-reference (the & symbol in my function parameters) was a conscious choice here because it allows the program to update the strings directly without wasting memory on extra copies.

## The technical side
* Randomness: I used srand(time(0)) so the word selection feels random every time you restart the game.
* State Management: The program keeps track of your total wins and losses throughout the session.
* Loops: I used a do-while loop for the main game restart logic and while loops for the input validation and guess turns.
