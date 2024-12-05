//Write a program to perform arithmetic operations using switch case.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char o;
    cout << "Enter the Operation to be performed: ";
    cin >> o;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    switch (o) {
        case '+':
            cout << "The sum of the two numbers is: " << (a + b) << endl;
            break;
        case '-':
            cout << "The difference of the two numbers is: " << (a - b) << endl;
            break;
        case '*':
            cout << "The product of the two numbers is: " << (a * b) << endl;
            break;
        case '/':
            cout << "The division of the two numbers is: " << (a / b) << endl;
            break;
        default:
            cout << "Invalid Operation!" << endl;
            break;
    }
    return 0;
}