// Author: Samuel Parente
// Exercise: C++ Constructors

#include <iostream>

// Class declaration
class Rectangle {
private:
    int length;
    int width;

public:
    // Parameterized constructor
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
    // Creating objects of Rectangle class
    Rectangle rect1(5, 3);
    Rectangle rect2(4, 6);

    // Calculating area for each rectangle
    std::cout << "Area of rect1: " << rect1.area() << std::endl;
    std::cout << "Area of rect2: " << rect2.area() << std::endl;

    return 0;
}
