/*
Question 21:
Write a program to input basic salary of an employee and calculate its Gross
salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include <iostream>
using namespace std;

class Salary {
private:
    double basicSalary;
    double hra, da;
    
public:
    void inputSalary() {
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }
    
    void calculateGrossSalary() {
        if(basicSalary <= 10000) {
            hra = basicSalary * 0.20;
            da = basicSalary * 0.80;
        }
        else if(basicSalary <= 20000) {
            hra = basicSalary * 0.25;
            da = basicSalary * 0.90;
        }
        else {
            hra = basicSalary * 0.30;
            da = basicSalary * 0.95;
        }
        
        double grossSalary = basicSalary + hra + da;
        
        cout << "\nSalary Details:" << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Salary emp;
    emp.inputSalary();
    emp.calculateGrossSalary();
    return 0;
} 