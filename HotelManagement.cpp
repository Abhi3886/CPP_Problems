#include <iostream>
#include <string>
using namespace std;

// Class for managing hotel booking
class Booking {
    private:
        string customerName;
        int roomNumber;
        int stayDuration;

    public:
        // Default Constructor
        Booking() {
            customerName = "Unknown";
            roomNumber = 0;
            stayDuration = 0;
        }

        // Destructor
        ~Booking() {
            cout << "Booking of " << customerName << " is canceled." << endl;
        }

        // Function to book a room
        void bookRoom(string cName, int rNumber, int duration) {
            customerName = cName;
            roomNumber = rNumber;
            stayDuration = duration;
        }

        // Function to display booking details
        void displayBookingInfo() {
            cout << "Customer Name: " << customerName << endl;
            cout << "Room Number: " << roomNumber << endl;
            cout << "Stay Duration: " << stayDuration << " days" << endl;
        }
};

int main() {
    Booking b1;

    // Booking a room
    b1.bookRoom("Michael Scott", 101, 3);

    // Display booking information
    b1.displayBookingInfo();

    return 0;
}
