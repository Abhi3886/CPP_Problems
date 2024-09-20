#include <iostream>
#include <string>
using namespace std;

// Text-based adventure game
class Adventure {
    private:
        string location;

    public:
        // Default Constructor
        Adventure() {
            location = "Cave Entrance";
        }

        // Destructor
        ~Adventure() {
            cout << "Adventure game over!" << endl;
        }

        // Function to move to a new location
        void move(string newLocation) {
            location = newLocation;
            displayLocation();
        }

        // Function to display the current location
        void displayLocation() {
            cout << "You are at: " << location << endl;
        }
};

int main() {
    Adventure game;

    game.displayLocation();

    game.move("Dark Forest");
    game.move("Mysterious Castle");

    return 0;
}
