// Author: Samuel Parente
// Exercise: C++ Arrays

#include <iostream>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing elements of the array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
