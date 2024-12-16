/*
Question 24:
Create a class called Factorial having member function fact() to calculate the
factorial of a given number. Throw an exception if number entered by the user is
negative or zero
*/

#include <iostream>
using namespace std;

class InvalidNumberException : public exception {
public:
    const char* what() const throw() {
        return "Number must be positive!";
    }
};

class Factorial {
private:
    int number;
    
public:
    void input() {
        cout << "Enter a positive number: ";
        cin >> number;
        if(number <= 0) {
            throw InvalidNumberException();
        }
    }
    
    long long fact() {
        long long factorial = 1;
        for(int i = 1; i <= number; i++) {
            factorial *= i;
        }
        return factorial;
    }
};

int main() {
    Factorial f;
    try {
        f.input();
        cout << "Factorial is: " << f.fact() << endl;
    }
    catch(const InvalidNumberException& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
} 