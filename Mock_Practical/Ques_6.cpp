/*
Question 6:
Write a C++ program to input 5 integers from the user into an array and find the
largest number in the array
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5], largest;
    
    // Input array elements
    for(int i = 0; i < 5; i++) {
        cout << "Enter number " << (i+1) << ": ";
        cin >> arr[i];
    }
    
    // Find largest element
    largest = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Display the array
    cout << "\nArray elements: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nLargest number in array is: " << largest << endl;
    return 0;
} 