// Check if a variable is positive or negative
#include <iostream>
using namespace std;

int main() {
    int num = -5;
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    return 0;
}