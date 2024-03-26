// Author: Samuel Parente
// Exercise: C++ Class Methods

#include <iostream>

// Class declaration
class Person {
private:
    std::string name;
    int age;

public:
    // Setter method
    void setDetails(std::string n, int a) {
        name = n;
        age = a;
    }

    // Getter method
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Creating an object of Person class
    Person person;

    // Setting details using setter method
    person.setDetails("John", 30);

    // Displaying details using getter method
    person.display();

    return 0;
}
