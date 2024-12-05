// Write a function to display string value from a user defined function 
#include <iostream>
using namespace std;

string display(){
    string x="This is a test";
    cout<<"String stored is : "<<x;
    return x;
}

int main() {
    display();
    return 0;
}