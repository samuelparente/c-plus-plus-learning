// Author: Samuel Parente
// Exercise: C++ Classes

#include <iostream>

// Class declaration
class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    int area() {
        return length * width;
    }
};

int main() {
    // Creating an object of Rectangle class
    Rectangle rect(5, 3);

    // Calling member function to calculate area
    std::cout << "Area of the rectangle: " << rect.area() << std::endl;

    return 0;
}
