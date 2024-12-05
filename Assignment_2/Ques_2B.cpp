// Swap 2 variables without using a 3rd variable
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
