/**
 * Problem: Inline Functions and Default Arguments
 * Author: Bhavishya Dewangan
 */
#include <iostream>

inline int cube(int x) {
    return x * x * x;
}

void displayLog(const std::string &message, const std::string &level = "INFO") {
    std::cout << "[" << level << "] " << message << std::endl;
}

int main() {
    std::cout << "Cube of 6: " << cube(6) << std::endl;
    displayLog("System initialized.");
    displayLog("Null pointer guard triggered.", "WARN");
    return 0;
}
