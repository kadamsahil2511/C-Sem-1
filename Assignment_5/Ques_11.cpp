//W.A.P. to check whether number is prime number or not
#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Not a prime number";
            break;
        }
    }
    if (i == n) {
        cout << "Prime number";
    }
    return 0;
}

//W.A.P. to check whether given number is amrstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp, r;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (n > 0) {
        r = n % 10;
        sum += pow(r, 3);
        n /= 10;
    }
    if (temp == sum) {
        cout << "Armstrong number";
    } else {
        cout << "Not an Armstrong number";
    }
    return 0;
}