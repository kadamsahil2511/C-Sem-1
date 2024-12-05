// All String Operations
#include <iostream>
using namespace std;

int main() {
    string str1 = "Hello World";
    string str2 = "C++ Programming is fun";
    string str3 ;

    //length
    cout << "Length of str1: " << str1.length() << endl;

    //Assignment
    str3 = str1;
    cout << "After assignment str3: " << str3 << endl;

    //Concatenation
    str3=str1 + "How are you ?";
    cout << "After concatenation str3: " << str3 << endl;

    //Comparison
    if (str1==str3){
        cout<<"str1 and str3 are equal.\n";
    }

    //Substraction
    string sub = str2.substr(4, 11);
    cout << "Substring of str2: " << sub <<"\n";

    //Find
    size_t pos = str2.find("fun");
    if (pos != string::npos){
        cout << "fun found at position: " << pos << endl;
    } else {
        cout << "fun not found.\n";
    }
    return 0;
}