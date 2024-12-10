// Write a program to add 2 and 3 numbers using function overloading
#include <iostream>
using namespace std;

class demo
{
    public:
    void add(int a, int b)
    {
        cout << "Addition is " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Addition is " << a + b + c << endl;
    }
};
int main ()
{
    demo d;
    d.add(10, 20);
    d.add(10, 20, 30);
    return 0;
}