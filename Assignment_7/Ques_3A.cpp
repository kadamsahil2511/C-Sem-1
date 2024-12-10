// Swap 2 numbers using reference variable
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Before swapping : a = " << a << " b = " << b << endl;
    int &ref_a = a, &ref_b = b;
    ref_a = ref_a + ref_b;
    ref_b = ref_a - ref_b;
    ref_a = ref_a - ref_b;
    cout<<"After swapping : a = "<<a<<" b = "<<b<<endl;
    return 0;
}