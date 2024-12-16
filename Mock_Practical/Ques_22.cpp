/*
Question 22:
Create a program for "Student Grading System"
90% and above: Grade A
75% - 89%: Grade B
50% - 74%: Grade C
Below 50%: Grade F
*/

#include <iostream>
using namespace std;

class GradingSystem {
private:
    float percentage;
    
public:
    void inputMarks() {
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    
    char calculateGrade() {
        if(percentage >= 90)
            return 'A';
        else if(percentage >= 75)
            return 'B';
        else if(percentage >= 50)
            return 'C';
        else
            return 'F';
    }
    
    void displayResult() {
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    GradingSystem student;
    student.inputMarks();
    student.displayResult();
    return 0;
} 