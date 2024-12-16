/*
Question 12:
Write a program to demonstrate function overloading by creating functions named max:
- int max(int a, int b) to find the larger of two integers
- double max(double a, double b) to find the larger of two double values
- Program should demonstrate the use of both overloaded functions with example values
*/

#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 20;
    double d1 = 15.5, d2 = 12.7;
    
    cout << "Integer comparison:" << endl;
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << max(num1, num2) << endl;
    
    cout << "\nDouble comparison:" << endl;
    cout << "Maximum of " << d1 << " and " << d2 << " is: " << max(d1, d2) << endl;
    
    return 0;
} 