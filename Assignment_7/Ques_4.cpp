// Swap 2 numbers using poiters and referecne variable
#include <iostream>
using namespace std;
void swap(int *ptr_a, int *ptr_b) {
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}
int main(){
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Before swapping : a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "After swapping : a = " << a << " b = " << b << endl;
    return 0;
}