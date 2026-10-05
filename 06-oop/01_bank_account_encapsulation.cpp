/**
 * Problem: Encapsulation & Data Hiding in C++
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolder;
    double balance;

public:
    BankAccount(const std::string &accNo, const std::string &holder, double initialBalance)
        : accountNumber(accNo), accountHolder(holder), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited ₹" << amount << ". New Balance: ₹" << balance << "\n";
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew ₹" << amount << ". Remaining Balance: ₹" << balance << "\n";
            return true;
        }
        std::cout << "Insufficient funds or invalid withdrawal amount!\n";
        return false;
    }

    void displayDetails() const {
        std::cout << "Account: " << accountNumber << " | Holder: " << accountHolder
                  << " | Balance: ₹" << balance << "\n";
    }
};

int main() {
    BankAccount myAcc("SBI-2026-0922", "Bhavishya Dewangan", 5000.0);
    myAcc.displayDetails();
    myAcc.deposit(2500.0);
    myAcc.withdraw(1200.0);
    return 0;
}
