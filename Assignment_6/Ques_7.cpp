// Write a function to call by value and call by reference in the same program and display the output.
#include <iostream>
using namespace std;

void callByValue(int a) {
    int c = a + 10;
    cout<<"Value of a "<<c<<endl;
}
void callByReference(int &a) {
    a=a+10;
    cout<<"Value of a "<<a;
}
int main() {
    int x = 10;
    callByValue(x);
    cout<<x;
    callByReference(x);
    cout<<x;
    return 0;
}