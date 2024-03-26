// Author: Samuel Parente
// Exercise: C++ Polymorphism

#include <iostream>

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Override draw function
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    // Override draw function
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    Shape* shapePtr;
    Circle circle;
    Rectangle rectangle;

    // Polymorphic behavior
    shapePtr = &circle;
    shapePtr->draw();

    shapePtr = &rectangle;
    shapePtr->draw();

    return 0;
}
