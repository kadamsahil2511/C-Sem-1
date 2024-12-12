// Write a program to add 2 numbers using binary operator overloading
#include <iostream>
using namespace std;

class Number
{
    private:
    int n;
    public:
    void get_n(){
        cout<<"Enter a number: ";
        cin>>n;
    }
    void put_n(){
        cout<<"The number is: "<<n<<endl;
    }
    Number operator +(Number Y){
        Number ans;
        ans.n = n + Y.n;
        return ans;
    }
};
int main(){
    Number O1, O2, O3;
    O1.get_n();
    O2.get_n();
    // O3 = O1 + O2;
    O3 = O1.operator+(O2);
    cout<<"The first number is: ";
    O1.put_n();
    cout<<"The second number is: ";
    O2.put_n();
    cout<<"The addition is: ";
    O3.put_n();
    return 0;
}