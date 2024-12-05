// Program to change elemets of the array 
#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[5]=20;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}