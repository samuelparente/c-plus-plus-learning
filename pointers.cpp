// Author: Samuel Parente
// Exercise: C++ Pointers

#include <iostream>

int main() {
    int x = 10;
    int *ptr = &x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value stored in the pointer: " << *ptr << std::endl;

    return 0;
}
