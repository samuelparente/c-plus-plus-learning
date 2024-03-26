// Author: Samuel Parente
// Exercise: C++ Function Overloading

#include <iostream>

// Function overloading
void print(int num) {
    std::cout << "Integer: " << num << std::endl;
}

void print(double num) {
    std::cout << "Double: " << num << std::endl;
}

int main() {
    int x = 10;
    double y = 3.14;

    // Function call with different arguments
    print(x);
    print(y);

    return 0;
}
