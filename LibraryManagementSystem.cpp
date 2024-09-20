#include <iostream>
#include <string>
using namespace std;

// Class for managing library records
class Book {
    private:
        string title;
        string author;
        bool isIssued;

    public:
        // Default Constructor
        Book() {
            title = "Untitled";
            author = "Unknown";
            isIssued = false;
        }

        // Destructor
        ~Book() {
            cout << "Book record of '" << title << "' is deleted." << endl;
        }

        // Function to add a new book
        void addBook(string bTitle, string bAuthor) {
            title = bTitle;
            author = bAuthor;
            isIssued = false;
        }

        // Function to issue a book
        void issueBook() {
            if (!isIssued) {
                isIssued = true;
                cout << "Book '" << title << "' is issued." << endl;
            } else {
                cout << "Book '" << title << "' is already issued." << endl;
            }
        }

        // Function to display book details
        void displayBookInfo() {
            cout << "Book Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Issued: " << (isIssued ? "Yes" : "No") << endl;
        }
};

int main() {
    Book b1;

    // Adding a book
    b1.addBook("The Great Gatsby", "F. Scott Fitzgerald");

    // Displaying book details
    b1.displayBookInfo();

    // Issuing the book
    b1.issueBook();

    return 0;
}
