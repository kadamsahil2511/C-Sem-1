/*
Question 31:
Create Result-sheet Program using student class, having data member:
roll, name, sub1, sub2, sub3, total
Display Result-sheet in following format:
=========================================
Roll No. Name    S1   S2   S3   Total
=========================================
1       A        67   75   88   230
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    int roll;
    string name;
    int sub1, sub2, sub3;
    int total;
    
public:
    void inputDetails() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cin.ignore();
        
        cout << "Enter Name: ";
        getline(cin, name);
        
        cout << "Enter marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter marks for Subject 2: ";
        cin >> sub2;
        cout << "Enter marks for Subject 3: ";
        cin >> sub3;
        
        calculateTotal();
    }
    
    void calculateTotal() {
        total = sub1 + sub2 + sub3;
    }
    
    static void printHeader() {
        cout << "=========================================================" << endl;
        cout << setw(8) << "Roll No." << setw(15) << "Name" 
             << setw(8) << "S1" << setw(8) << "S2" << setw(8) << "S3" 
             << setw(10) << "Total" << endl;
        cout << "=========================================================" << endl;
    }
    
    void displayResult() {
        cout << setw(8) << roll << setw(15) << name 
             << setw(8) << sub1 << setw(8) << sub2 << setw(8) << sub3 
             << setw(10) << total << endl;
    }
};

int main() {
    Student student;
    
    cout << "Enter Student Details:" << endl;
    student.inputDetails();
    
    cout << "\nResult Sheet:" << endl;
    Student::printHeader();
    student.displayResult();
    cout << "=========================================================" << endl;
    
    return 0;
} 