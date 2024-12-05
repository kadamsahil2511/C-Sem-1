// Write a progrma to check whether given number is armstrong number or not using loops.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n > 0) {
        int rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if (sum == temp) {
        cout << temp << " is an Armstrong Number." << endl;
    } else {
        cout << temp << " is not an Armstrong Number." << endl;
    }
    return 0;
}