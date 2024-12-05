// Create a 1D array with 20 elements and display the elements using a loop.
#include <iostream>
using namespace std;

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) {
        cout << "Enter the value for 1D array : ";
        cin >> arr[i];
    }
    cout<<endl;
    for(int i = 0; i < 20; i++){ 
        cout << arr[i] << " ";
    }
    return 0;
}