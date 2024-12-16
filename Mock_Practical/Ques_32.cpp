/*
Question 32:
WAP in C++ to take the string from the user
Use at least three function of string
*/

#include <iostream>
#include <string>
using namespace std;

class StringOperations {
private:
    string str;
    
public:
    void inputString() {
        cout << "Enter a string: ";
        getline(cin, str);
    }
    
    void performOperations() {
        // 1. length() function
        cout << "\n1. Length of string: " << str.length() << endl;
        
        // 2. substr() function
        cout << "2. Substring (first 3 characters): " << str.substr(0, 3) << endl;
        
        // 3. find() function
        cout << "3. Enter a character to find: ";
        char ch;
        cin >> ch;
        size_t found = str.find(ch);
        if(found != string::npos) {
            cout << "   First occurrence of '" << ch << "' is at position: " << found << endl;
        } else {
            cout << "   Character not found in string" << endl;
        }
    }
};

int main() {
    StringOperations strOp;
    strOp.inputString();
    strOp.performOperations();
    return 0;
} 