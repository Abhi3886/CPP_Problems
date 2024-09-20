#include <iostream>
#include <string>
using namespace std;

// Class for managing student records
class Student {
    private:
        string name;
        int rollNo;
        string grade;

    public:
        // Default Constructor
        Student() {
            name = "Unknown";
            rollNo = 0;
            grade = "Not assigned";
        }

        // Destructor
        ~Student() {
            cout << "Record of student " << name << " is deleted." << endl;
        }

        // Function to enroll a student
        void enrollStudent(string sName, int sRollNo, string sGrade) {
            name = sName;
            rollNo = sRollNo;
            grade = sGrade;
        }

        // Function to display student details
        void displayStudentInfo() {
            cout << "Student Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Student s1;

    // Enrolling a student
    s1.enrollStudent("Alice Johnson", 12, "A");

    // Display student information
    s1.displayStudentInfo();

    return 0;
}
