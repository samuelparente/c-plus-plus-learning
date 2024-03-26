// Author: Samuel Parente
// Exercise: C++ Switch

#include <iostream>

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            std::cout << "Option 1 selected" << std::endl;
            break;
        case 2:
            std::cout << "Option 2 selected" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}
