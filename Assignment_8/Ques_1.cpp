// Inheritance in C++
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
// Derived class
class demo2 : public demo1
{
    public:
    void display(){
        getdata();
        cout << "Value of a is: " << a << endl;
    }
};
// Calling function
int main (){
    demo2 d;
    d.display();
    return 0;
}