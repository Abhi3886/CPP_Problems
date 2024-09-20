#include <iostream>
#include <string>
using namespace std;

// Class for simulating a basic search engine
class SearchEngine {
    private:
        string query;

    public:
        // Default Constructor
        SearchEngine() {
            query = "None";
        }

        // Destructor
        ~SearchEngine() {
            cout << "Search ended for query: " << query << endl;
        }

        // Function to enter a query
        void enterQuery(string q) {
            query = q;
            search();
        }

        // Function to simulate a search
        void search() {
            cout << "Searching for: " << query << endl;
            cout << "Results found: [Simulated Results]" << endl;
        }
};

int main() {
    SearchEngine engine;

    // User enters a search query
    engine.enterQuery("Object Oriented Programming in C++");

    return 0;
}
