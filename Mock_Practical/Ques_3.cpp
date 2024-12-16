/*
Question 3:
Write a program that defines a function int add(int a, int b) to calculate and return
the sum of two integers.
- Call this function from main() with two user-input values
- Display the returned result
*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    int result = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;
    
    return 0;
} 