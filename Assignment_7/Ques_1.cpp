// Create a program for matrix (2x2) operation (Addition)
#include <iostream>
using namespace std;


int main() {
    int a[2][2], b[2][2], c[2][2];
    cout << "Enter the elements of first matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of second matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
    cout << "The sum of the two matrices is: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}