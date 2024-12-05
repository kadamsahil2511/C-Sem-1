#include <iostream>
using namespace std;

int main() {
    //reference varianle its a variable that is an alias for another variable
    int x=0;
    int *ptr=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}