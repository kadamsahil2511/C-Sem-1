// Take user input for 1D and 2D array and display the array elements using loops
#include <iostream>
using namespace std;

int main(){
    int arr[3];
    int arr2D[2][2];
    for (int i = 0; i < 3; i++) {
        cout << "Enter the value for 1D array : ";
        cin >> arr[i];
    }
    cout<<endl;
    for(int i = 0; i < 3; i++){ 
        cout << arr[i] << " ";
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter the value for 2D array : ";
            cin >> arr2D[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}