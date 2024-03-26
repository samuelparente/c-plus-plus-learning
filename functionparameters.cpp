// Author: Samuel Parente
// Exercise: C++ Function Parameters

#include <iostream>

// Function declaration with parameters
void printNumber(int num) {
    std::cout << "The number is: " << num << std::endl;
}

int main() {
    int x = 10;

    // Function call with argument
    printNumber(x);

    return 0;
}
