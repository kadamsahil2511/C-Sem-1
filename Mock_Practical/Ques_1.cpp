/*
Question 1:
Write a program that defines a class Rectangle with the following:
- Two private data members: length and width
- A default constructor that initializes length and width to 1
- A member function area() to calculate and return the area of the rectangle
- A main() function to create an object of the Rectangle class, call the area() function, 
  and print the result
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    // Default constructor
    Rectangle(int l = 1, int w = 1) {
        length = l;
        width = w;
    }
    
    // Function to calculate area
    int area() {
        return length * width;
    }
};

int main() {
    int length, width;
    
    cout << "Enter length (default is 1): ";
    if (!(cin >> length)) {
        length = 1;
    }
    
    cout << "Enter width (default is 1): ";
    if (!(cin >> width)) {
        width = 1;
    }
    
    Rectangle r(length, width);
    cout << "Area of rectangle is: " << r.area() << endl;
    
    return 0;
}