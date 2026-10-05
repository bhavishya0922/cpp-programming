/**
 * Problem: Structured Exception Handling with Custom std::exception
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <stdexcept>
#include <string>

class NegativeBalanceException : public std::exception {
private:
    std::string message;
public:
    NegativeBalanceException(double attempted, double current) {
        message = "Transaction Denied: Attempted to withdraw ₹" + std::to_string(attempted)
                + " but current balance is ₹" + std::to_string(current);
    }
    const char* what() const noexcept override {
        return message.c_str();
    }
};

double performWithdrawal(double balance, double amount) {
    if (amount > balance) {
        throw NegativeBalanceException(amount, balance);
    }
    return balance - amount;
}

int main() {
    double currentBalance = 1500.0;
    std::cout << "Current Balance: ₹" << currentBalance << "\n";

    try {
        std::cout << "Attempting valid withdrawal of ₹500...\n";
        currentBalance = performWithdrawal(currentBalance, 500.0);
        std::cout << "Success! Remaining balance: ₹" << currentBalance << "\n";

        std::cout << "\nAttempting invalid withdrawal of ₹2000...\n";
        currentBalance = performWithdrawal(currentBalance, 2000.0);
    } catch (const NegativeBalanceException &e) {
        std::cerr << "[CAUGHT EXCEPTION] " << e.what() << "\n";
    } catch (const std::exception &e) {
        std::cerr << "[GENERIC EXCEPTION] " << e.what() << "\n";
    }

    std::cout << "\nProgram execution continued gracefully after exception handling.\n";
    return 0;
}
