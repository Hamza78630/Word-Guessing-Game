# C++ Word Guessing Game

A robust, terminal-based word guessing game that demonstrates core C++ fundamentals. 

## 🚀 Features
* **Dynamic Difficulty:** Includes 'Easy' (masks every 4th char) and 'Hard' (masks every 2nd char) modes.
* **Smart Masking Logic:** Uses a modular function to handle word obscuring without modifying the original string.
* **Input Validation:** Ensures users only select valid difficulty levels and valid character guesses.
* **State Management:** Tracks lives, wins, and losses across multiple rounds of play.

## 🛠️ Technical Concepts Used
* **Functions:** Pass-by-reference for efficient string handling.
* **Control Flow:** Nested `do-while` and `while` loops for game state loops.
* **Standard Library:** Heavy use of `<string>`, `<ctime>`, and `<iostream>`.
