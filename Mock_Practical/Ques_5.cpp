// Write a program to declare an array of size 10, initialize it with the first 10 natural numbers, and print each element on a new line.
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}