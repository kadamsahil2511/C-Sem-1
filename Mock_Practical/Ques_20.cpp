/*
Question 20:
Create a class called Max. Calculate the greatest among three numbers using
the else if ladder.
*/

#include <iostream>
using namespace std;

class Max {
private:
    int num1, num2, num3;
    
public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }
    
    int findMax() {
        if(num1 >= num2 && num1 >= num3)
            return num1;
        else if(num2 >= num1 && num2 >= num3)
            return num2;
        else
            return num3;
    }
};

int main() {
    Max m;
    m.input();
    cout << "Greatest number is: " << m.findMax() << endl;
    return 0;
} 