/*
Question 11:
Write a C++ program to calculate the sum of all even numbers and the product of all odd
numbers between 1 and n (inclusive).
- Program should prompt user for a positive integer n
- Calculate sum of all even numbers from 1 to n
- Calculate product of all odd numbers from 1 to n
- Display both results
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int evenSum = 0;
    long long oddProduct = 1;  // Using long long to handle larger products
    
    cout << "Enter a positive integer n: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            evenSum += i;
        } else {
            oddProduct *= i;
        }
    }
    
    cout << "Sum of even numbers from 1 to " << n << ": " << evenSum << endl;
    cout << "Product of odd numbers from 1 to " << n << ": " << oddProduct << endl;
    
    return 0;
} 