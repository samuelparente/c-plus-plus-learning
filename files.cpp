// Author: Samuel Parente
// Exercise: C++ Files

#include <iostream>
#include <fstream>

int main() {
    // Writing to a file
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "This is a sample text.\n";
        outFile << "This is another line of text.\n";
        outFile.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    // Reading from a file
    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        std::string line;
        std::cout << "Contents of the file:" << std::endl;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
