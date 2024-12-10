// Write a recursive function to whether a number is Armstrong number or not
#include <iostream>
#include <cmath>
using namespace std;

class Armstrong
{
public:
    int calculate(int n)
    {
        if (n == 0)
            return 0;
        return pow(n % 10, 3) + calculate(n / 10);
    }
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Armstrong armstrong;
    if (n == armstrong.calculate(n))
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
    return 0;
}