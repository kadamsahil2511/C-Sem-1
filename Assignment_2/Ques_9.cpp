// Simple interest calculation
#include <iostream>
using namespace std;

int main() {
    double principal = 1000, rate = 10, time = 2;
    double simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simpleInterest << endl;
    return 0;
}
