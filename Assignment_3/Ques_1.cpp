//A simple program to check if a number is positive, negative, or zero
#include <iostream>
using namespace std;

int main() {
        int a;
        cout<<"Enter the number to check : ";
        cin>>a;
        if (a>0){
                cout<<"The number you've entered is positive";
        }
        else if (a<0){
                cout<<"The number you've entered is negative";
        }
        else {
                cout<<"The number you've entered is zero";
        }
        return 0;
}