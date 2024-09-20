#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee() {} // Default constructor
    ~Employee() {} // Destructor

    void inputDetails() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displaySalary() {
        cout << "Employee: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee employee;
    employee.inputDetails();
    employee.displaySalary();
    return 0;
}
