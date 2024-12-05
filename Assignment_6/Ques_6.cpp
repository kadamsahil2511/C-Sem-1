// Write a program to display string value from user defined integer return type function
#include <iostream>
using namespace std;

int display() {
    string x;
    cout<<"Enter string : ";
    getline(cin, x);
    cout<<"String entered is "<<x;
    return 0;
}
int main() {
    display();
    return 0;
}