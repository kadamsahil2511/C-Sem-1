/*
Question 26:
Write a C++ program to create a simple text file. The program should provide:
1. APPEND: Allow the user to write new content to a text file. Existing content should NOT be overwritten.
2. Read: Display the entire content of the text file to the user.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler {
public:
    void appendToFile() {
        ofstream file("data.txt", ios::app);
        string content;
        
        cout << "Enter content to append (type 'END' on new line to stop):" << endl;
        while(getline(cin, content) && content != "END") {
            file << content << endl;
        }
        file.close();
        cout << "Content appended successfully!" << endl;
    }
    
    void readFile() {
        ifstream file("data.txt");
        string line;
        
        cout << "\nFile Contents:" << endl;
        cout << "------------------------" << endl;
        while(getline(file, line)) {
            cout << line << endl;
        }
        cout << "------------------------" << endl;
        file.close();
    }
};

int main() {
    FileHandler fh;
    int choice;
    
    do {
        cout << "\n1. Append to file" << endl;
        cout << "2. Read file" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();
        
        switch(choice) {
            case 1:
                fh.appendToFile();
                break;
            case 2:
                fh.readFile();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 3);
    
    return 0;
} 