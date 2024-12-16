/*
Question 27:
Write a program to print following pattern
*
* *
* * *
* * * *
* * * * *
*/

#include <iostream>
using namespace std;

class Pattern {
public:
    void printPattern(int rows) {
        for(int i = 1; i <= rows; i++) {
            // Print i stars in each row
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    int rows = 5;  // Number of rows in pattern
    p.printPattern(rows);
    return 0;
} 