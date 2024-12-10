// Write a function for dynamic array of string, take input from the user and display
#include <iostream>
using namespace std;

int main(){
    // Allocating memorys using new keyword
    // int *arr=new string[3];
    // arr[0]="10";
    // arr[1]="20";
    // arr[2]="30";
    
    cout<<"Value of arr[0] is: "<<arr[0]<<endl;
    cout<<"Value of arr[1] is: "<<arr[1]<<endl;
    cout<<"Value of arr[2] is: "<<arr[2]<<endl;
    cout<<"---------------------------"<<endl;

    // Dellocatign memory using delete keyword
    delete [] arr;
    cout<<"Value of arr[0] is: "<<arr[0]<<endl;
    cout<<"Value of arr[1] is: "<<arr[1]<<endl;
    cout<<"Value of arr[2] is: "<<arr[2]<<endl;

    return 0;
}

