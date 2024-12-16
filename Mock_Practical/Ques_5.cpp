/*
Question 5:
Write a recursive function int factorial(int n) that calculates the factorial of a given
number n.
- In main(), prompt user for a positive integer
- Call factorial function to compute result
- Display the result
Example: For input 5, output should be 120
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }
    
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}