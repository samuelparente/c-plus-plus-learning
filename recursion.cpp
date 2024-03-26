// Author: Samuel Parente
// Exercise: C++ Recursion

#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;

    // Function call to calculate factorial
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    return 0;
}
