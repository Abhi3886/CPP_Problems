#include <iostream>
#include <cmath>
using namespace std;

class ScientificCalculator {
private:
    double num1, num2;

public:
    ScientificCalculator() : num1(0), num2(0) {} // Default constructor
    ~ScientificCalculator() {} // Destructor

    void inputNumbers() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }

    void add() {
        cout << "Sum: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Difference: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Product: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Quotient: " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero." << endl;
    }

    void power() {
        cout << "Power: " << pow(num1, num2) << endl;
    }

    void sqrtFirstNumber() {
        cout << "Square root of first number: " << sqrt(num1) << endl;
    }
};

int main() {
    ScientificCalculator calc;
    calc.inputNumbers();
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    calc.power();
    calc.sqrtFirstNumber();
    return 0;
}
