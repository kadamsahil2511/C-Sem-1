/*
Question 28:
Develop a C++ program for a Student Management System that incorporates:
Menu-Driven Approach:
● Adding a new student (SID, SNAME, CLASS THROUGH USER INPUT)
● DISPLAY student DETAILS
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    int sid;
    string sname;
    string sclass;
    
public:
    void addStudent() {
        cout << "\nEnter Student Details:" << endl;
        cout << "Enter Student ID: ";
        cin >> sid;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, sname);
        cout << "Enter Class: ";
        getline(cin, sclass);
    }
    
    void displayStudent() {
        cout << "\nStudent Details:" << endl;
        cout << "ID: " << sid << endl;
        cout << "Name: " << sname << endl;
        cout << "Class: " << sclass << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    vector<Student> students;
    int choice;
    
    do {
        cout << "\n=== Student Management System ===" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                Student s;
                s.addStudent();
                students.push_back(s);
                cout << "Student added successfully!" << endl;
                break;
            }
            case 2: {
                if(students.empty()) {
                    cout << "\nNo students found!" << endl;
                } else {
                    cout << "\nAll Students:" << endl;
                    for(int i = 0; i < students.size(); i++) {
                        students[i].displayStudent();
                    }
                }
                break;
            }
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(choice != 3);
    
    return 0;
} 