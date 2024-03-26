// Author: Samuel Parente
// Exercise: C++ OOP

#include <iostream>

// Class declaration
class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate area
    double area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Creating an object of Circle class
    Circle circle(5.0);

    // Calling member function to calculate area
    std::cout << "Area of the circle: " << circle.area() << std::endl;

    return 0;
}
