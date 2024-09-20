#include <iostream>
#include <string>
using namespace std;

class Hangman {
private:
    string word;
    string guessedWord;
    int attempts;

public:
    Hangman() : attempts(6) { // Default constructor
        word = "hangman";
        guessedWord = string(word.length(), '_');
    }
    ~Hangman() {} // Destructor

    void guessLetter(char letter) {
        bool found = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == letter) {
                guessedWord[i] = letter;
                found = true;
            }
        }
        if (!found) {
            attempts--;
            cout << "Wrong guess! Attempts left: " << attempts << endl;
        } else {
            cout << "Good guess! " << guessedWord << endl;
        }
    }

    bool isGameOver() {
        return (guessedWord == word || attempts == 0);
    }

    bool isWin() {
        return (guessedWord == word);
    }
};

int main() {
    Hangman game;
    char guess;
    while (!game.isGameOver()) {
        cout << "Guess a letter: ";
        cin >> guess;
        game.guessLetter(guess);
    }

    if (game.isWin()) {
        cout << "You win!" << endl;
    } else {
        cout << "Game Over! The word was: hangman" << endl;
    }
    return 0;
}
