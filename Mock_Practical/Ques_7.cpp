/*
Question 7:
Write a program to declare an array of size 10, initialize it with the first 10 natural
numbers, and print each element on a new line.
*/

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    // Initialize array with natural numbers
    cout << "First 10 natural numbers:" << endl;
    for(int i = 0; i < 10; i++) {
        arr[i] = i + 1;
        cout << arr[i] << endl;
    }
    
    return 0;
} 