#include <iostream>
using namespace std;

int main() {
    // accessing array elements using pointer address and pointer value
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << *ptr<< endl;
        cout << "Element " << i << ": " << ptr << endl;
        ptr++;
    }
    return 0;
}