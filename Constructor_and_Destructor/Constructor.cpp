// Convert all the previous assignments to use constructors.
#include <iostream>
using namespace std;

class Operations {
public:
    Operations(int num) {
        cout << "The value of the variable is: " << num << endl;
    }

    Operations(int &a, int &b, bool isSwap) {
        if (isSwap) {
            int temp = a;
            a = b;
            b = temp;
            cout << "After swapping: a = " << a << ", b = " << b << endl;
        } else {
            a = a + b;
            b = a - b;
            a = a - b;
            cout << "After swapping: a = " << a << ", b = " << b << endl;
        }
    }

    Operations(int num1, int num2, char op) {
        if (op == '+') {
            int addition = num1 + num2;
            cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;
        } else if (op == '-') {
            int subtraction = num1 - num2;
            cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
        } else if (op == '*') {
            int product = num1 * num2;
            cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << endl;
        } else if (op == '/') {
            if (num2 != 0) {
                float division = (float)num1 / num2;
                cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        }
    }

    Operations(int num1, int num2, int num3) {
        int sum = num1 + num2 + num3;
        cout << "The sum of the variables is: " << sum << endl;
    }

    Operations(float celsius) {
        float fahrenheit = (celsius * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }

    Operations(float principal, float rate, float time, bool isInterest) {
        if (isInterest) {
            float simpleInterest = (principal * rate * time) / 100;
            cout << "Simple Interest: " << simpleInterest << endl;
        }
    }

    Operations(bool isModulus) {
        if (isModulus) {
            int dividend = 17, divisor = 5;
            int remainder = dividend % divisor;
            cout << "Remainder: " << remainder << endl;
        } else {
            int length = 10, breadth = 5;
            int perimeter = 2 * (length + breadth);
            cout << "Perimeter of Rectangle: " << perimeter << endl;
        }
    }

    Operations(bool isCircle, float radius) {
        if (isCircle) {
            float area = 3.14159 * radius * radius;
            cout << "Area of Circle: " << area << endl;
        }
    }

    Operations(int num, bool isPositive) {
        if (isPositive) {
            if (num > 0) {
                cout << "The number is positive." << endl;
            } else if (num < 0) {
                cout << "The number is negative." << endl;
            } else {
                cout << "The number is zero." << endl;
            }
        } else {
            if (num % 2 == 0) {
                cout << "The number is even." << endl;
            } else {
                cout << "The number is odd." << endl;
            }
        }
    }

    Operations(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "The character is a vowel." << endl;
        } else {
            cout << "The character is a consonant." << endl;
        }
    }
};

int main() {
    int num = 10;
    Operations display(num);

    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    Operations swap(a, b, true);

    a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    Operations swap2(a, b, false);

    Operations arithmeticAdd(10, 20, '+');
    Operations arithmeticSub(10, 20, '-');
    Operations arithmeticMul(10, 20, '*');
    Operations arithmeticDiv(10, 20, '/');
    Operations arithmeticDivZero(10, 0, '/');

    Operations sum(10, 20, 30);

    float celsius;
    cout << "Enter the Temperature in Celsius: ";
    cin >> celsius;
    Operations tempConvert(celsius);

    Operations interest(1000, 10, 1, true);

    Operations modulus(true);
    Operations perimeter(false);

    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Operations circle(true, radius);

    Operations positiveCheck(num, true);
    Operations evenCheck(num, false);

    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    Operations vowelCheck(ch);

    return 0;
}