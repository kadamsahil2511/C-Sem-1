/*
Question 25:
Write a C++ program to demonstrate different types of inheritance by creating 
a hierarchy for a university management system.
The program should include:
● Base Class (Person): Contains common attributes like name and age
● Derived Class (Student): Inherits from Person and includes roll number and course
● Derived Class (Faculty): Inherits from Person and includes employee ID and department
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    
public:
    void inputPersonDetails() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }
    
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;
    
public:
    void inputStudentDetails() {
        inputPersonDetails();
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter course: ";
        getline(cin, course);
    }
    
    void displayStudentDetails() {
        cout << "\nStudent Details:" << endl;
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Faculty : public Person {
private:
    string employeeId;
    string department;
    
public:
    void inputFacultyDetails() {
        inputPersonDetails();
        cout << "Enter employee ID: ";
        cin.ignore();
        getline(cin, employeeId);
        cout << "Enter department: ";
        getline(cin, department);
    }
    
    void displayFacultyDetails() {
        cout << "\nFaculty Details:" << endl;
        displayPersonDetails();
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student;
    Faculty faculty;
    
    cout << "Enter Student Information:" << endl;
    student.inputStudentDetails();
    
    cout << "\nEnter Faculty Information:" << endl;
    faculty.inputFacultyDetails();
    
    student.displayStudentDetails();
    faculty.displayFacultyDetails();
    
    return 0;
} 