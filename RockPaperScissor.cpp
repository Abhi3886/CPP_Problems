#include <iostream>
#include <cstdlib>
using namespace std;

class RockPaperScissor {
private:
    int playerChoice;
    int computerChoice;

public:
    RockPaperScissor() {} // Default constructor
    ~RockPaperScissor() {} // Destructor

    void playGame() {
        cout << "Choose Rock (1), Paper (2), Scissor (3): ";
        cin >> playerChoice;

        computerChoice = rand() % 3 + 1;

        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win!" << endl;
        } else {
            cout << "You lose!" << endl;
        }
    }
};

int main() {
    RockPaperScissor game;
    game.playGame();
    return 0;
}
