// Declaring an Multi dimensional array and printing it using pointers
#include <iostream>
using namespace std;

int main() {
   int arr[2][2] = {
    {1,1},
    {2,2}
};
    cout<<arr[0][0];
    cout<<arr[0][1]<<endl;
    cout<<arr[1][0];
    cout<<arr[1][1]<<endl;
    return 0;
}