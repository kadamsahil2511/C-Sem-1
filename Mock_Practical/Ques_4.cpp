/*
Create a program in C++ based on Strings
a. Reverse of string
b. Concatenate two strings
c. String Length calculation
*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1, str2, reversedStr1;
    cout << "Enter the first string: ";
    getline(cin, str1);

    reversedStr1 = string(str1.rbegin(), str1.rend());
    cout << "Reversed string: " << reversedStr1 << endl;

    cout << "Enter the second string: ";
    getline(cin, str2);

    string concatenatedStr = str1 + str2;
    cout << "Concatenated string: " << concatenatedStr << endl;

    cout << "Original first string: " << str1 << endl;
    cout << "Length of the original first string: " << str1.length() << endl;
    
    return 0;
}