// Write a program to write inline function
#include <iostream>
using namespace std;    

class demo   
{    
    public:    
    inline void displayNum(int num){
        cout<<num<<endl;
    }
};
int main(){
    demo d;
    d.displayNum(5);
    d.displayNum(8);
    d.displayNum(666);
    return 0;
}