// Author: Samuel Parente
// Exercise: C++ Structures

#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main() {
    // Creating an instance of the Person structure
    Person person1;
    person1.name = "John";
    person1.age = 30;

    // Printing the details of the person
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;

    return 0;
}
