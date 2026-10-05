/**
 * Problem: Compile-Time Function Overloading
 * Author: Bhavishya Dewangan
 */
#include <iostream>

int calculateArea(int side) {
    return side * side; // Square
}

int calculateArea(int length, int breadth) {
    return length * breadth; // Rectangle
}

double calculateArea(double radius) {
    return 3.14159 * radius * radius; // Circle
}

int main() {
    std::cout << "Square Area (s=5)        : " << calculateArea(5) << std::endl;
    std::cout << "Rectangle Area (l=4, b=8): " << calculateArea(4, 8) << std::endl;
    std::cout << "Circle Area (r=3.5)      : " << calculateArea(3.5) << std::endl;
    return 0;
}
