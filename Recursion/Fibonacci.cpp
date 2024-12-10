// Write a recursive function to calculate the nth Fibonacci number.
#include <iostream>
using namespace std;

class Fibonacci
{
public:
    int calculate(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        return calculate(n - 1) + calculate(n - 2);
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Fibonacci fibonacci;
    cout << "The " << n << "th Fibonacci number is " << fibonacci.calculate(n) << endl;
    return 0;
}