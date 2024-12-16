/*
Question 2:
Write a C++ program to define a class Student with the following:
- Private data members: name and age
- A parameterized constructor to initialize the name and age
- A copy constructor to create a copy of an existing Student object
- A member function display() to print the details of the student
- In main(), create objects using both constructors and display their details
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    
public:
    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }
    
    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
    }
    
    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    string name;
    int age;
    
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    
    // Create object using parameterized constructor
    Student s1(name, age);
    
    // Create object using copy constructor
    Student s2(s1);
    
    cout << "\nStudent 1 details:" << endl;
    s1.display();
    
    cout << "\nStudent 2 details (copied from Student 1):" << endl;
    s2.display();
    
    return 0;
} 