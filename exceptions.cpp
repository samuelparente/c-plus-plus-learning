// Author: Samuel Parente
// Exercise: C++ Exceptions

#include <iostream>

double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero exception";
    }
    return static_cast<double>(a) / b;
}

int main() {
    int x = 10;
    int y = 0;

    try {
        double result = division(x, y);
        std::cout << "Result of division: " << result << std::endl;
    } catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }

    return 0;
}
