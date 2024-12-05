// Write a program to check whether a given number is prime or not using loops.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << n << " is a Prime Number." << endl;
    } else {
        cout << n << " is not a Prime Number." << endl;
    }
    return 0;
}
// write the pseudo code for the above program.
// Step 1: Start
// Step 2: Declare variables n, isPrime and i.
// Step 3: Read the number n from the user.
// Step 4: Set isPrime to true.
// Step 5: Run a loop from i = 2 to n-1.
// Step 6: If n is divisible by i, set isPrime to false and break the loop.
// Step 7: If isPrime is true, print n is a Prime Number.
// Step 8: Else, print n is not a Prime Number.
// Step 9: End