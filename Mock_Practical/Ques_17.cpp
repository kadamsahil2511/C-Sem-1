/*
Question 17:
Create a C++ program for Library management system HAVING DATA MEMBERS:
- BOOKID
- BOOKNAME
- AUTHOR
PERFORM OPERATION TO ADD AND DISPLAY
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string bookName;
    string author;
    
public:
    void addBook() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();  // Clear input buffer
        
        cout << "Enter Book Name: ";
        getline(cin, bookName);
        
        cout << "Enter Author Name: ";
        getline(cin, author);
    }
    
    void displayBook() {
        cout << "\nBook Details:" << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book;
    
    cout << "=== Library Management System ===" << endl;
    cout << "\nAdd Book Details:" << endl;
    book.addBook();
    
    cout << "\nDisplaying Book Information:" << endl;
    book.displayBook();
    
    return 0;
} 