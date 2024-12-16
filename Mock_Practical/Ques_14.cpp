/*
Question 14:
Write a program where a base class defines a display() function, and the
derived class overrides it to provide its implementation.
Why is the virtual keyword necessary for overriding?
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* ptr;
    Derived derivedObj;
    
    ptr = &derivedObj;
    // Without virtual keyword, this would call Base::display()
    // With virtual, it calls Derived::display()
    ptr->display();
    
    return 0;
} 