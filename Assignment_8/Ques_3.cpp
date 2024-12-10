// Write a program to add 2 numbers using multilevel inheritance in C++.
#include <iostream>
using namespace std;
// Base class
class demo1
{
    public:
    int a;
    void getdata()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }
};
// Intermediate class 1
class demo2 : public demo1
{
    public:
    int b;
    void getdata2()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
};
// Intermediate class 2
class demo3 : public demo2
{
    public:
    int c;
    void add(){
        c = a + b;
    }
};
// Derived class
class demo4 : public demo3
{
    public:
    void display(){
        getdata();
        getdata2();
        add();
        cout << "Sum of a and b is: " << c << endl;
    }
};
// Calling function
int main (){
    demo4 d;
    d.display();
    return 0;
}