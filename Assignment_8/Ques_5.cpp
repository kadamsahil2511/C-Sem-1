// Implement addition of a and b in hybrid inheritance
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

// Derived class

class demo4 : public demo2
{
    public:
    void display(){
        
        cout << "Sum of a and b is: " << a + b<< endl;
    }
};

// Calling function

int main (){
    demo4 d;
    d.getdata();
    d.getdata2();
    d.display();
    return 0;
}