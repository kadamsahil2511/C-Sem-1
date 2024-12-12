// Write a program to input 8 numbers into an array and count how many of them are even and how many are odd.
#include <iostream>
using namespace std;

int main() {
    int arr[8], even = 0, odd = 0;
    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Number of even numbers: " << even << endl;
    return 0;
}