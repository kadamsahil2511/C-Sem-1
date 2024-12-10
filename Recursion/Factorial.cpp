// Write a program to write a recursive function to calculate the factorial of a number
#include <iostream>
using namespace std;

class FactorialCalculator {
public:
    int calculate(int n) {
        if (n == 0)
            return 1;
        else
            return n * calculate(n - 1);
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    FactorialCalculator calculator;
    cout << "Factorial of " << n << " is " << calculator.calculate(n) << endl;
    return 0;
}