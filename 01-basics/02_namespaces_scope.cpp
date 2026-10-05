/**
 * Problem: Namespaces & Scope Resolution
 * Author: Bhavishya Dewangan
 */
#include <iostream>

namespace MathOps {
    constexpr double PI = 3.141592653589793;
    double circle_area(double radius) {
        return PI * radius * radius;
    }
}

namespace PhysicsOps {
    constexpr double GRAVITY = 9.80665;
    double potential_energy(double mass, double height) {
        return mass * GRAVITY * height;
    }
}

int main() {
    double r = 5.0;
    std::cout << "Area of circle (r=" << r << "): " << MathOps::circle_area(r) << std::endl;

    double mass = 10.0, height = 4.5;
    std::cout << "Potential Energy: " << PhysicsOps::potential_energy(mass, height) << " Joules\n";
    return 0;
}
