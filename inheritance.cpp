// Author: Samuel Parente
// Exercise: C++ Inheritance

#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }

    void sleep() {
        std::cout << "Animal is sleeping." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat(); // Accessing base class method
    dog.sleep(); // Accessing base class method
    dog.bark(); // Accessing derived class method

    return 0;
}
