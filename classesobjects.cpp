// Author: Samuel Parente
// Exercise: C++ Classes/Objects

#include <iostream>

// Class declaration
class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor
    Car(std::string m, std::string mo, int y) {
        make = m;
        model = mo;
        year = y;
    }

    // Member function to display car details
    void display() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main() {
    // Creating an object of Car class
    Car car("Toyota", "Corolla", 2022);

    // Calling member function to display car details
    car.display();

    return 0;
}
