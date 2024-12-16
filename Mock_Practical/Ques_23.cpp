/*
Question 23:
Create an Array having 20 integer inputs from user and print the following:
● number of positive numbers
● number of negative numbers
● number of odd numbers
● number of even numbers
● number of 0s
*/

#include <iostream>
using namespace std;

class ArrayAnalyzer {
private:
    int arr[20];
    int positive, negative, odd, even, zeros;
    
public:
    void inputArray() {
        cout << "Enter 20 integers:" << endl;
        for(int i = 0; i < 20; i++) {
            cout << "Enter number " << (i+1) << ": ";
            cin >> arr[i];
        }
    }
    
    void analyze() {
        positive = negative = odd = even = zeros = 0;
        
        for(int i = 0; i < 20; i++) {
            if(arr[i] > 0) positive++;
            if(arr[i] < 0) negative++;
            if(arr[i] == 0) zeros++;
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }
    }
    
    void displayResults() {
        cout << "\nArray Analysis:" << endl;
        cout << "Positive numbers: " << positive << endl;
        cout << "Negative numbers: " << negative << endl;
        cout << "Odd numbers: " << odd << endl;
        cout << "Even numbers: " << even << endl;
        cout << "Number of zeros: " << zeros << endl;
    }
};

int main() {
    ArrayAnalyzer analyzer;
    analyzer.inputArray();
    analyzer.analyze();
    analyzer.displayResults();
    return 0;
} 