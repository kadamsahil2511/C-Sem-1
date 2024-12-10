#include <iostream>
using namespace std;

void display(int num) {
    cout << "The value of the variable is: " << num << endl;
}
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap2(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
void arithmeticOperations(int num1, int num2) {
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
}
void findSum(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
    cout << "The sum of the variables is: " << sum << endl;
}
void multiply(int num1, int num2) {
    int product = num1 + num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << product << endl;
}
void celciusToFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}
void divide(int num1, int num2) {
    if (num2 != 0) {
        float division = (float)num1 / num2;
        cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}
void calculateSimpleInterest(float principal, float rate, float time) {
    float simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simpleInterest << endl;
}
void remainderusingmodulus(){
    int dividend = 17, divisor = 5;
    int remainder = dividend % divisor;
    cout << "Remainder: " << remainder << endl;
}
void perimeterOfRectangle() {
    int length = 10, breadth = 5;
    int perimeter = 2 * (length + breadth);
    cout << "Perimeter of Rectangle: " << perimeter << endl;
}
void areaOfCircle() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = 3.14159 * radius * radius;
    cout << "Area of Circle: " << area << endl;
}
void checkPositiveOrNegative(int num) {
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
}
void checkEvenOrOdd(int num) {
    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
}
void checkVowelOrConsonant(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The character is a vowel." << endl;
    } else {
        cout << "The character is a consonant." << endl;
    }
}
int main(){
    // Display
    int num = 10;
    display(num);
    // Swapping with 3rd variable
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    // Swapping without 3rd variable
    a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap2(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    // Arithmetic Operations
    arithmeticOperations(10, 20);
    // Find Sum
    findSum(10, 20, 30);
    // Multiply
    multiply(10, 20);
    // Celsius to Fahrenheit converter
    float celsius;
    cout << "Enter the Temperature in Celsius :";
    cin >> celsius;
    celciusToFahrenheit(celsius);
    // Division
    divide(10, 20);
    divide(10, 0);
    //Simple interest calculation
    calculateSimpleInterest(1000,10,1);
    //Remainder using modulus
    remainderusingmodulus();
    //Perimeter of rectangle
    perimeterOfRectangle();
    //Area of Circle
    areaOfCircle();
    //Check whether number is positive or negative 
    checkPositiveOrNegative(num);

    return 0;
}