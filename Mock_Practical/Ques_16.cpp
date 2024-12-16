/*
Question 16:
Create a simple Bank Account class with a method to withdraw money. 
Throw an exception if the withdrawal amount exceeds the account balance.
*/

#include <iostream>
using namespace std;

class InsufficientBalanceException : public exception {
public:
    const char* what() const throw() {
        return "Insufficient balance for withdrawal";
    }
};

class BankAccount {
private:
    double balance;
    
public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientBalanceException();
        }
        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }
    
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);  // Initial balance of 1000
    double amount;
    
    cout << "Current balance: " << account.getBalance() << endl;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    
    try {
        account.withdraw(amount);
    } catch (const InsufficientBalanceException& e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
} 