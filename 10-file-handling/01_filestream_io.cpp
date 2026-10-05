/**
 * Problem: Formatted File I/O with C++ std::fstream
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    const std::string filename = "cpp_coursework.log";

    // Writing to file
    {
        std::ofstream outFile(filename);
        if (!outFile) {
            std::cerr << "Failed to open " << filename << " for writing!\n";
            return 1;
        }
        outFile << "C++ Coursework Stream Log\n";
        outFile << "Student: Bhavishya Dewangan\n";
        outFile << "Status: Verified Compliant C++17\n";
    }

    // Reading from file
    {
        std::ifstream inFile(filename);
        if (!inFile) {
            std::cerr << "Failed to open " << filename << " for reading!\n";
            return 1;
        }
        std::cout << "Contents read from " << filename << ":\n";
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << "  > " << line << "\n";
        }
    }
    return 0;
}
