#include <iostream>
#include <cstdlib>
using namespace std;

class CasinoNumberGuessingGame {
private:
    int secretNumber;
    int guess;

public:
    CasinoNumberGuessingGame() : secretNumber(rand() % 100 + 1) {} // Default constructor
    ~CasinoNumberGuessingGame() {} // Destructor

    void playGame() {
        do {
            cout << "Enter your guess (1-100): ";
            cin >> guess;
            if (guess > secretNumber)
                cout << "Too high!" << endl;
            else if (guess < secretNumber)
                cout << "Too low!" << endl;
        } while (guess != secretNumber);

        cout << "Congratulations! You guessed the number." << endl;
    }
};

int main() {
    CasinoNumberGuessingGame game;
    game.playGame();
    return 0;
}
