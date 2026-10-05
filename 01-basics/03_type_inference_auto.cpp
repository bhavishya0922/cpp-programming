/**
 * Problem: Type Deductions with auto and const
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <vector>

int main() {
    auto integer_val = 42;
    auto floating_val = 3.14159f;
    auto string_literal = "Computer Science";
    const auto max_capacity = 1000ULL;

    std::cout << "Inferred types executed successfully:\n";
    std::cout << "Integer: " << integer_val << " | Float: " << floating_val << " | Text: " << string_literal << std::endl;
    std::cout << "Constant Max Capacity: " << max_capacity << std::endl;
    return 0;
}
