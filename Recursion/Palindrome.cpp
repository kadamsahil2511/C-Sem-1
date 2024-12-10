// Write a program to check whether a string is palindrome or not using recursion
#include <iostream>
#include <string>
using namespace std;

class Palindrome
{
public:
    bool isPalindrome(string str, int start, int end)
    {
        if (start >= end)
            return true;
        if (str[start] != str[end])
            return false;
        return isPalindrome(str, start + 1, end - 1);
    }
};

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    Palindrome palindrome;
    if (palindrome.isPalindrome(str, 0, str.length() - 1))
        cout << "The string is a palindrome" << endl;
    else
        cout << "The string is not a palindrome" << endl;
    return 0;
}