#include <iostream>
#include <string>
using namespace std;

// Class for managing trading
class Trade {
    private:
        string stockName;
        int quantity;
        double price;

    public:
        // Default Constructor
        Trade() {
            stockName = "Unknown";
            quantity = 0;
            price = 0.0;
        }

        // Destructor
        ~Trade() {
            cout << "Trade for " << stockName << " is completed." << endl;
        }

        // Function to place a trade
        void placeTrade(string sName, int qty, double p) {
            stockName = sName;
            quantity = qty;
            price = p;
        }

        // Function to display trade details
        void displayTradeInfo() {
            cout << "Stock Name: " << stockName << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Price: $" << price << endl;
        }
};

int main() {
    Trade trade1;

    // Placing a trade
    trade1.placeTrade("Apple", 50, 150.75);

    // Display trade information
    trade1.displayTradeInfo();

    return 0;
}
