// Author: Samuel Parente
// Exercise: C++ Encapsulation

#include <iostream>

// Class declaration
class BankAccount {
private:
    std::string ownerName;
    double balance;

public:
    // Constructor
    BankAccount(std::string name, double initialBalance) {
        ownerName = name;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful." << std::endl;
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    // Member function to display account details
    void display() {
        std::cout << "Owner Name: " << ownerName << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    // Creating an object of BankAccount class
    BankAccount account("John Doe", 1000.0);

    // Depositing and withdrawing money
    account.deposit(500.0);
    account.withdraw(200.0);

    // Displaying account details
    account.display();

    return 0;
}
