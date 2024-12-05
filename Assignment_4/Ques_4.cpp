// Write a program to calculate sum of given numbers using loops.
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         int num;
//         cout << "Enter the number: ";
//         cin >> num;
//         sum += num;
//     }
//     cout << "The sum of the numbers is: " << sum << endl;
//     return 0;
// }

// Write the Program to find the sum of digits of given number.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    while (n > 0) {
        sum += n - (n / 10) * 10;
        n /= 10;
    }
    cout << "The sum of the digits is: " << sum << endl;
    return 0;
}
