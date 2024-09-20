#include <iostream>
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;

public:
    User() {} // Default constructor
    ~User() {} // Destructor

    void registerUser() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        cout << "Registration successful!" << endl;
    }

    bool loginUser() {
        string inputUsername, inputPassword;
        cout << "Enter username: ";
        cin >> inputUsername;
        cout << "Enter password: ";
        cin >> inputPassword;

        if (inputUsername == username && inputPassword == password) {
            cout << "Login successful!" << endl;
            return true;
        } else {
            cout << "Login failed!" << endl;
            return false;
        }
    }
};

int main() {
    User user;
    user.registerUser();
    user.loginUser();
    return 0;
}
