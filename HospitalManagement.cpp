#include <iostream>
#include <string>
using namespace std;

// Class for managing hospital records
class Patient {
    private:
        string name;
        int age;
        string disease;
        string doctor;

    public:
        // Default Constructor
        Patient() {
            name = "Unknown";
            age = 0;
            disease = "None";
            doctor = "Unassigned";
        }

        // Destructor
        ~Patient() {
            cout << "Record of " << name << " is deleted." << endl;
        }

        // Function to admit a patient
        void admitPatient(string pName, int pAge, string pDisease, string pDoctor) {
            name = pName;
            age = pAge;
            disease = pDisease;
            doctor = pDoctor;
        }

        // Function to display patient details
        void displayPatientInfo() {
            cout << "Patient Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Disease: " << disease << endl;
            cout << "Doctor Assigned: " << doctor << endl;
        }
};

int main() {
    Patient p1;

    // Admitting a patient
    p1.admitPatient("John Doe", 35, "Flu", "Dr. Smith");

    // Display patient information
    p1.displayPatientInfo();

    return 0;
}
