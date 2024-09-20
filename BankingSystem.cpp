#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount() : balance(0.0) {} // Default constructor
    ~BankAccount() {} // Destructor

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }

    void inputAccountHolder() {
        cout << "Enter account holder name: ";
        cin >> accountHolder;
    }
};

int main() {
    BankAccount account;
    account.inputAccountHolder();
    account.deposit(1000);
    account.withdraw(500);
    account.displayBalance();
    return 0;
}
