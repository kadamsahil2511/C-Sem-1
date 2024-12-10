// Hierachical Inheritance
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

class demo3 : public demo1
{
    public:
    int c;
    void getdata3()
    {
        cout << "Enter the value of c: ";
        cin >> c;
    }
};
/*
// Derived class
class demo4 : public demo2, public demo3
{
    public:
    void display(){
        
        cout << "Sum of a, b and c is: " << a + b + c << endl;
    }
};*/
// Calling function
int main (){
    demo2 d;
    demo3 d2;
d.getdata();
d.getdata2();
d2.getdata();
d2.getdata3();
   
   
    return 0;
}