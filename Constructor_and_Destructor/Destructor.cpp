#include <iostream>
using namespace std;

class Display {
public:
    Display(int num) {
        cout << "Constructor: The value of the variable is: " << num << endl;
    }
    ~Display() {
        cout << "Destructor: Display object is being destroyed" << endl;
    }
};

class Swap {
public:
    Swap(int &a, int &b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
        cout << "Constructor: Swapped values: a = " << a << ", b = " << b << endl;
    }
    ~Swap() {
        cout << "Destructor: Swap object is being destroyed" << endl;
    }
};

class Swap2 {
public:
    Swap2(int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "Constructor: Swapped values without temp: a = " << a << ", b = " << b << endl;
    }
    ~Swap2() {
        cout << "Destructor: Swap2 object is being destroyed" << endl;
    }
};

class ArithmeticOperations {
public:
    ArithmeticOperations(int num1, int num2) {
        int addition = num1 + num2;
        int subtraction = num1 - num2;
        cout << "Constructor: Addition: " << num1 << " + " << num2 << " = " << addition << endl;
        cout << "Constructor: Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
    }
    ~ArithmeticOperations() {
        cout << "Destructor: ArithmeticOperations object is being destroyed" << endl;
    }
};

class FindSum {
public:
    FindSum(int num1, int num2, int num3) {
        int sum = num1 + num2 + num3;
        cout << "Constructor: The sum of the variables is: " << sum << endl;
    }
    ~FindSum() {
        cout << "Destructor: FindSum object is being destroyed" << endl;
    }
};

class Multiply {
public:
    Multiply(int num1, int num2) {
        int product = num1 * num2;
        cout << "Constructor: Multiplication: " << num1 << " * " << num2 << " = " << product << endl;
    }
    ~Multiply() {
        cout << "Destructor: Multiply object is being destroyed" << endl;
    }
};

class CelsiusToFahrenheit {
public:
    CelsiusToFahrenheit(float celsius) {
        float fahrenheit = (celsius * 9/5) + 32;
        cout << "Constructor: Temperature in Fahrenheit: " << fahrenheit << endl;
    }
    ~CelsiusToFahrenheit() {
        cout << "Destructor: CelsiusToFahrenheit object is being destroyed" << endl;
    }
};

class Divide {
public:
    Divide(int num1, int num2) {
        if (num2 != 0) {
            float division = (float)num1 / num2;
            cout << "Constructor: Division: " << num1 << " / " << num2 << " = " << division << endl;
        } else {
            cout << "Constructor: Error: Division by zero is not allowed." << endl;
        }
    }
    ~Divide() {
        cout << "Destructor: Divide object is being destroyed" << endl;
    }
};

class CalculateSimpleInterest {
public:
    CalculateSimpleInterest(float principal, float rate, float time) {
        float simpleInterest = (principal * rate * time) / 100;
        cout << "Constructor: Simple Interest: " << simpleInterest << endl;
    }
    ~CalculateSimpleInterest() {
        cout << "Destructor: CalculateSimpleInterest object is being destroyed" << endl;
    }
};

class RemainderUsingModulus {
public:
    RemainderUsingModulus() {
        int dividend = 17, divisor = 5;
        int remainder = dividend % divisor;
        cout << "Constructor: Remainder: " << remainder << endl;
    }
    ~RemainderUsingModulus() {
        cout << "Destructor: RemainderUsingModulus object is being destroyed" << endl;
    }
};

class PerimeterOfRectangle {
public:
    PerimeterOfRectangle() {
        int length = 10, breadth = 5;
        int perimeter = 2 * (length + breadth);
        cout << "Constructor: Perimeter of Rectangle: " << perimeter << endl;
    }
    ~PerimeterOfRectangle() {
        cout << "Destructor: PerimeterOfRectangle object is being destroyed" << endl;
    }
};

class AreaOfCircle {
public:
    AreaOfCircle() {
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        float area = 3.14159 * radius * radius;
        cout << "Constructor: Area of Circle: " << area << endl;
    }
    ~AreaOfCircle() {
        cout << "Destructor: AreaOfCircle object is being destroyed" << endl;
    }
};

class CheckPositiveOrNegative {
public:
    CheckPositiveOrNegative(int num) {
        if (num > 0) {
            cout << "Constructor: The number is positive." << endl;
        } else if (num < 0) {
            cout << "Constructor: The number is negative." << endl;
        } else {
            cout << "Constructor: The number is zero." << endl;
        }
    }
    ~CheckPositiveOrNegative() {
        cout << "Destructor: CheckPositiveOrNegative object is being destroyed" << endl;
    }
};

class CheckEvenOrOdd {
public:
    CheckEvenOrOdd(int num) {
        if (num % 2 == 0) {
            cout << "Constructor: The number is even." << endl;
        } else {
            cout << "Constructor: The number is odd." << endl;
        }
    }
    ~CheckEvenOrOdd() {
        cout << "Destructor: CheckEvenOrOdd object is being destroyed" << endl;
    }
};

class CheckVowelOrConsonant {
public:
    CheckVowelOrConsonant(char ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "Constructor: The character is a vowel." << endl;
        } else {
            cout << "Constructor: The character is a consonant." << endl;
        }
    }
    ~CheckVowelOrConsonant() {
        cout << "Destructor: CheckVowelOrConsonant object is being destroyed" << endl;
    }
};

int main() {
    // Display
    int num = 10;
    Display display(num);

    // Swapping with 3rd variable
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    Swap swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Swapping without 3rd variable
    a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    Swap2 swap2(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Arithmetic Operations
    ArithmeticOperations arithmeticOperations(10, 20);

    // Find Sum
    FindSum findSum(10, 20, 30);

    // Multiply
    Multiply multiply(10, 20);

    // Celsius to Fahrenheit converter
    float celsius;
    cout << "Enter the Temperature in Celsius: ";
    cin >> celsius;
    CelsiusToFahrenheit celsiusToFahrenheit(celsius);

    // Division
    Divide divide1(10, 20);
    Divide divide2(10, 0);

    // Simple interest calculation
    CalculateSimpleInterest calculateSimpleInterest(1000, 10, 1);

    // Remainder using modulus
    RemainderUsingModulus remainderUsingModulus;

    // Perimeter of rectangle
    PerimeterOfRectangle perimeterOfRectangle;

    // Area of Circle
    AreaOfCircle areaOfCircle;

    // Check whether number is positive or negative
    CheckPositiveOrNegative checkPositiveOrNegative(num);

    return 0;
}