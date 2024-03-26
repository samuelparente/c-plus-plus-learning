// Author: Samuel Parente
// Exercise: C++ Break/Continue

#include <iostream>

int main() {
    // Using break
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            std::cout << "Encountered 5. Breaking loop." << std::endl;
            break;
        }
        std::cout << i << std::endl;
    }

    // Using continue
    for (int i = 0; i < 5; i++) {
        if (i == 2) {
            std::cout << "Skipping 2." << std::endl;
            continue;
        }
        std::cout << i << std::endl;
    }

    return 0;
}
