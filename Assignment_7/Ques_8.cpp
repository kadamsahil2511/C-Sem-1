// Copy constructor in C++ is used to copy data from one object to another
#include <iostream>
using namespace std;

class demo {
    private:
        int num1, num2;
    public:
        demo(int a, int b) {
            num1 = a;
            num2 = b;
        }
        int addition() {
            return num1 + num2;
        }
};
int main(){
    demo demo1(10,10);
    cout<<"demo 1 constructor value "<<demo1.addition()<<endl;
    demo demo2=demo1;
    cout<<"demo 2 constructor copy value of demo1 "<<demo2.addition()<<endl;
    return 0;
}
