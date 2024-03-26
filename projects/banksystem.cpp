/*
Author: Samuel Parente
Description: Console-based Banking System Simulation in C++
*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

// Account class to represent bank accounts
class Account {
private:
    std::string accountNumber;
    double balance;
public:
    Account(std::string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    std::string getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << std::fixed << std::setprecision(2) << amount << " successful." << std::endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << std::fixed << std::setprecision(2) << amount << " successful." << std::endl;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    void display() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    }
};

// Bank class to manage accounts
class Bank {
private:
    std::vector<Account> accounts;
public:
    void createAccount(std::string accNumber, double initialBalance) {
        accounts.push_back(Account(accNumber, initialBalance));
        std::cout << "Account created successfully!" << std::endl;
    }

    void deposit(std::string accNumber, double amount) {
        auto it = std::find_if(accounts.begin(), accounts.end(), [&](const Account& acc) { return acc.getAccountNumber() == accNumber; });
        if (it != accounts.end()) {
            it->deposit(amount);
        } else {
            std::cout << "Account not found." << std::endl;
        }
    }

    void withdraw(std::string accNumber, double amount) {
        auto it = std::find_if(accounts.begin(), accounts.end(), [&](const Account& acc) { return acc.getAccountNumber() == accNumber; });
        if (it != accounts.end()) {
            it->withdraw(amount);
        } else {
            std::cout << "Account not found." << std::endl;
        }
    }

    void displayAccount(std::string accNumber) const {
        auto it = std::find_if(accounts.begin(), accounts.end(), [&](const Account& acc) { return acc.getAccountNumber() == accNumber; });
        if (it != accounts.end()) {
            it->display();
        } else {
            std::cout << "Account not found." << std::endl;
        }
    }
};

int main() {
    Bank bank;
    std::string command;

    std::cout << "Banking System Simulation" << std::endl;
    std::cout << "Commands: create <account_number> <initial_balance>, deposit <account_number> <amount>, withdraw <account_number> <amount>, display <account_number>, exit" << std::endl;

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (command == "exit") {
            std::cout << "Exiting program." << std::endl;
            break;
        } else if (command.substr(0, 6) == "create") {
            std::string accNumber;
            double initialBalance;
            std::istringstream iss(command.substr(7));
            iss >> accNumber >> initialBalance;
            bank.createAccount(accNumber, initialBalance);
        } else if (command.substr(0, 7) == "deposit") {
            std::string accNumber;
            double amount;
            std::istringstream iss(command.substr(8));
            iss >> accNumber >> amount;
            bank.deposit(accNumber, amount);
        } else if (command.substr(0, 8) == "withdraw") {
            std::string accNumber;
            double amount;
            std::istringstream iss(command.substr(9));
            iss >> accNumber >> amount;
            bank.withdraw(accNumber, amount);
        } else if (command.substr(0, 7) == "display") {
            std::string accNumber = command.substr(8);
            bank.displayAccount(accNumber);
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
