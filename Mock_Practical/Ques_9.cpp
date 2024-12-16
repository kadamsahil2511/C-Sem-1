/*
Question 9:
Write a program to take 6 integers as input, store them in an array, and calculate
the sum of all elements in the array.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[6], sum = 0;
    
    // Input array elements
    for(int i = 0; i < 6; i++) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "Sum of all elements in the array is: " << sum << endl;
    return 0;
} 