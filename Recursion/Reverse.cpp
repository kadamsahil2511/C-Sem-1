// Write a program to reverse a string using recursion function
#include <iostream>
#include <string>
using namespace std;

class Reverse
{
public:
    string reverse(string str)
    {
        if (str.length() == 0)
            return str;
        return reverse(str.substr(1)) + str[0];
    }
};

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    Reverse reverse;
    cout << "Reverse of the string is " << reverse.reverse(str) << endl;
    return 0;
}
