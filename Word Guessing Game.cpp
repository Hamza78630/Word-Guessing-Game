#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void maskWord(const string& word, string& masked, char difficulty)
{
    masked = word;

    for (int i = 0; i < word.length(); i++)
    {
        if (difficulty == '0')
        {
            if (i % 4 == 0)
                masked[i] = '*';
        }
        else
        {
            if (i % 2 == 0)
                masked[i] = '*';
        }
    }
}

bool updateMaskedWord(const string& word, string& masked, char guess)
{
    bool found = false;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == guess && masked[i] == '*')
        {
            masked[i] = guess;
            found = true;
        }
    }

    return found;
}

int main()
{
    srand((unsigned)time(0));

    string dictionary[4] = {
        "refrigerator",
        "unbelievable",
        "independence",
        "substitution"
    };

    int wins = 0, losses = 0;
    char choice;

    do
    {
        string word = dictionary[rand() % 4];
        string masked;

        char difficulty;
        cout << "Select difficulty (0 = Easy, 1 = Hard): ";
        cin >> difficulty;

        while (difficulty != '0' && difficulty != '1')
        {
            cout << "Invalid choice. Enter again: ";
            cin >> difficulty;
        }

        maskWord(word, masked, difficulty);

        int lives = 5;

        while (lives > 0)
        {
            cout << "\nWord: " << masked << endl;
            cout << "Lives left: " << lives << endl;

            char guess;
            cout << "Enter a letter: ";
            cin >> guess;

            if (updateMaskedWord(word, masked, guess))
            {
                cout << "Correct guess!\n";
            }
            else
            {
                cout << "Wrong guess!\n";
                lives--;
            }

            if (masked == word)
            {
                cout << "\nYou Win! The word was: " << word << endl;
                wins++;
                break;
            }
        }

        if (lives == 0)
        {
            cout << "\nYou Lost! The word was: " << word << endl;
            losses++;
        }

        cout << "\nPlay again? (y/n): ";
        cin >> choice;

    } while (choice == 'y');

    cout << "\nGame Over\n";
    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl;

    return 0;
}