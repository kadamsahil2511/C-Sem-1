// Convert Celsius to Fahrenheit
#include <iostream>
using namespace std;

int main() {
    float celsius;
    cout<<"Enter the Temperature in Celsius :";
    cin>>celsius;
    float fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}
