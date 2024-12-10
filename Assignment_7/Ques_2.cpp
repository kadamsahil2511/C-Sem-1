// Implement a program for string manipulation (reverse)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, revstr;
    // Taking input from user
    cout << "Enter a string : ";
    getline(cin, str);
    // Reversing the string
    for (int i = str.length() -1; i>=0; i--){
        revstr += str[i];
    }
    cout << "The reverse of the string is : " << revstr << endl;
    return 0;
}