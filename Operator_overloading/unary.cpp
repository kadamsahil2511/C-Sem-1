// Write a program to increment and decrement a number usnig unary operation on a number using operator overloading
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
    Number operator ++(){
        Number ans;
        ans.n = n + 1;
        return ans;
    }
    Number operator --(){
        Number ans;
        ans.n = n - 1;
        return ans;
    }
};
int main(){
    Number O1, O2, O3;
    O1.get_n();
    O2 = ++O1;
    O3 = --O1;
    cout<<"The number is: ";
    O1.put_n();
    cout<<"The incremented number is: ";
    O2.put_n();
    cout<<"The decremented number is: ";
    O3.put_n();
    return 0;
}