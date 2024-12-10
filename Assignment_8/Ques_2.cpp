// Multilevel - Inheritance in C++
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
// Intermediate class
class demo2 : public demo1
{
public:
    int c;
    void square(int a){
        c = a*a;
    }

};   
// Derived class
class demo3 : public demo2
{
    public:
    void display(){
        getdata();
        square(a);
        cout << "Square of a is: " << c << endl;
    }
};
// Calling function
int main (){
    demo3 d;
    d.display();
    return 0;
}