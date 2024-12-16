/*
Question 8:
Write a program to reverse the elements of an array. For example, if the array is
{1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1}
*/

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int temp;
    
    cout << "Original array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    // Reverse array
    for(int i = 0; i < 5/2; i++) {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
    
    cout << "\nReversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
} 