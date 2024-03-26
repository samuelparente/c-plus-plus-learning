/*
Author: Samuel Parente
Date: [Insert Date]
Description: Console-based Inventory Management System in C++
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip> // Include iomanip for formatting output

// Product class to represent inventory items
class Product {
private:
    std::string name;
    int quantity;
    double price;
public:
    Product(std::string name, int quantity, double price) : name(name), quantity(quantity), price(price) {}

    std::string getName() const {
        return name;
    }

    int getQuantity() const {
        return quantity;
    }

    double getPrice() const {
        return price;
    }

    void restock(int amount) {
        quantity += amount;
        std::cout << "Restocked " << amount << " units of " << name << std::endl;
    }

    void sell(int amount) {
        if (amount <= quantity) {
            quantity -= amount;
            std::cout << "Sold " << amount << " units of " << name << std::endl;
        } else {
            std::cout << "Insufficient stock for " << name << std::endl;
        }
    }

    void display() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Quantity: " << quantity << std::endl;
        std::cout << "Price: $" << std::fixed << std::setprecision(2) << price << std::endl;
    }
};

// Inventory class to manage products
class Inventory {
private:
    std::vector<Product> products;
public:
    void addProduct(const Product& product) {
        products.push_back(product);
        std::cout << "Product added successfully!" << std::endl;
    }

    void restockProduct(const std::string& name, int amount) {
        auto it = std::find_if(products.begin(), products.end(), [&](const Product& p) { return p.getName() == name; });
        if (it != products.end()) {
            it->restock(amount);
        } else {
            std::cout << "Product not found." << std::endl;
        }
    }

    void sellProduct(const std::string& name, int amount) {
        auto it = std::find_if(products.begin(), products.end(), [&](const Product& p) { return p.getName() == name; });
        if (it != products.end()) {
            it->sell(amount);
        } else {
            std::cout << "Product not found." << std::endl;
        }
    }

    void displayInventory() const {
        if (products.empty()) {
            std::cout << "No products in the inventory." << std::endl;
        } else {
            std::cout << "Products in the inventory:" << std::endl;
            for (const auto& product : products) {
                product.display();
                std::cout << std::endl;
            }
        }
    }
};

int main() {
    Inventory inventory;
    std::string command;

    std::cout << "Inventory Management System" << std::endl;
    std::cout << "Commands: add <name> <quantity> <price>, restock <name> <amount>, sell <name> <amount>, display, exit" << std::endl;

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (command == "exit") {
            std::cout << "Exiting program." << std::endl;
            break;
        } else if (command.substr(0, 3) == "add") {
            std::string name;
            int quantity;
            double price;
            std::istringstream iss(command.substr(4));
            iss >> name >> quantity >> price;
            inventory.addProduct(Product(name, quantity, price));
        } else if (command.substr(0, 7) == "restock") {
            std::string name;
            int amount;
            std::istringstream iss(command.substr(8));
            iss >> name >> amount;
            inventory.restockProduct(name, amount);
        } else if (command.substr(0, 4) == "sell") {
            std::string name;
            int amount;
            std::istringstream iss(command.substr(5));
            iss >> name >> amount;
            inventory.sellProduct(name, amount);
        } else if (command == "display") {
            inventory.displayInventory();
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
