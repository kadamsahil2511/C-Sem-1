/*
Question 19:
Write a program to simulate an online purchase. If the debit card number is
invalid or the balance is insufficient, throw exceptions for each case and handle
them in separate catch blocks.
*/

#include <iostream>
#include <string>
using namespace std;

class InvalidCardException : public exception {
public:
    const char* what() const throw() {
        return "Invalid card number!";
    }
};

class InsufficientBalanceException : public exception {
public:
    const char* what() const throw() {
        return "Insufficient balance!";
    }
};

class OnlinePurchase {
private:
    double balance;
    string validCardNumber;
    
public:
    OnlinePurchase() {
        balance = 1000;  // Initial balance
        validCardNumber = "1234567890";  // Valid card for demo
    }
    
    void processPayment(string cardNumber, double amount) {
        // Check card validity
        if(cardNumber != validCardNumber) {
            throw InvalidCardException();
        }
        
        // Check balance
        if(amount > balance) {
            throw InsufficientBalanceException();
        }
        
        // Process payment
        balance -= amount;
        cout << "Payment successful! Remaining balance: " << balance << endl;
    }
};

int main() {
    OnlinePurchase purchase;
    string cardNumber;
    double amount;
    
    cout << "Enter card number: ";
    cin >> cardNumber;
    
    cout << "Enter purchase amount: ";
    cin >> amount;
    
    try {
        purchase.processPayment(cardNumber, amount);
    } 
    catch(const InvalidCardException& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch(const InsufficientBalanceException& e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
} 