#include <iostream>
using namespace std;

class Student {
private:
    float cgpa;

public:
    Student() : cgpa(0.0) {} // Default constructor
    ~Student() {} // Destructor

    void inputCGPA() {
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayCGPA() {
        cout << "Your CGPA is: " << cgpa << endl;
    }
};

int main() {
    Student student;
    student.inputCGPA();
    student.displayCGPA();
    return 0;
}
