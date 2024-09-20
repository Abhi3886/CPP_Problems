#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    Student() {} // Default constructor
    ~Student() {} // Destructor

    void inputDetails() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's ID: ";
        cin >> id;
    }

    void displayDetails() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student student;
    student.inputDetails();
    student.displayDetails();
    return 0;
}
