#include <iostream>
#include <string>
using namespace std;

class InventoryItem {
private:
    string itemName;
    int quantity;

public:
    InventoryItem() {} // Default constructor
    ~InventoryItem() {} // Destructor

    void inputDetails() {
        cout << "Enter item name: ";
        cin >> itemName;
        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void displayDetails() {
        cout << "Item: " << itemName << ", Quantity: " << quantity << endl;
    }
};

class InventorySystem {
private:
    InventoryItem item;

public:
    InventorySystem() {} // Default constructor
    ~InventorySystem() {} // Destructor

    void addItem() {
        item.inputDetails();
        item.displayDetails();
    }
};

int main() {
    InventorySystem system;
    system.addItem();
    return 0;
}
