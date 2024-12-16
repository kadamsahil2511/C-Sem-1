/*
Question 29:
Create a program for matrix operations (addition)
*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int matrix[10][10];
    int rows, cols;

public:
    void inputMatrix() {
        cout << "Enter matrix dimensions (rows cols): ";
        cin >> rows >> cols;
        
        cout << "Enter matrix elements:" << endl;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> matrix[i][j];
            }
        }
    }
    
    void displayMatrix() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    void addMatrix(Matrix m1, Matrix m2) {
        if(m1.rows != m2.rows || m1.cols != m2.cols) {
            cout << "Matrix dimensions must be same for addition!" << endl;
            return;
        }
        
        rows = m1.rows;
        cols = m1.cols;
        
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                matrix[i][j] = m1.matrix[i][j] + m2.matrix[i][j];
            }
        }
    }
};

int main() {
    Matrix m1, m2, result;
    
    cout << "Enter first matrix:" << endl;
    m1.inputMatrix();
    
    cout << "\nEnter second matrix:" << endl;
    m2.inputMatrix();
    
    cout << "\nFirst Matrix:" << endl;
    m1.displayMatrix();
    
    cout << "\nSecond Matrix:" << endl;
    m2.displayMatrix();
    
    cout << "\nSum of matrices:" << endl;
    result.addMatrix(m1, m2);
    result.displayMatrix();
    
    return 0;
} 