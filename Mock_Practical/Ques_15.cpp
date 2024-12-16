/*
Question 15:
Write a program to demonstrate the use of a parameterized constructor. 
Create a class Rectangle that accepts the length and width as arguments 
and calculates the area of the rectangle.
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;
    
public:
    // Parameterized constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    
    float calculateArea() {
        return length * width;
    }
    
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    float l, w;
    
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    
    Rectangle rect(l, w);
    rect.display();
    
    return 0;
} 