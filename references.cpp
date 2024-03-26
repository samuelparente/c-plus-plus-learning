// Author: Samuel Parente
// Exercise: C++ References

#include <iostream>

int main() {
    int x = 5;
    int &ref = x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    return 0;
}
