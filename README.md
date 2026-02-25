I built this project as a way to practice the fundamentals of C++. I wanted to move beyond just writing simple "hello world" scripts and actually build something interactive that people could play.

What it is
It’s a terminal-based game where you try to figure out a hidden word before you run out of lives. I added a difficulty toggle (0 for Easy, 1 for Hard) which changes how many letters stay hidden.

Why I built it this way
I spent some time making sure the logic was separated properly. Instead of putting everything in one big "main" function, I used two specific functions:

maskWord: This handles the logic for hiding letters based on the difficulty you pick.

updateMaskedWord: This checks your guesses against the original word and updates the screen.

Using pass-by-reference here was important because it allowed me to update the game state without wasting memory on extra copies of strings.

The technical side
Randomness: I used srand(time(0)) so the word changes every time you restart the game.

State Management: The program keeps track of your wins and losses throughout the session, not just for a single round.

Loops: I used nested loops to keep the game running until the player actually wants to quit.
