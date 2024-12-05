// Swap 2 variables using a 3rd variable
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, temp;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

