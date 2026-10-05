/**
 * Problem: Associative Containers (std::unordered_map & std::set)
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <unordered_map>
#include <set>
#include <string>

int main() {
    // Fast O(1) Key-Value Lookup
    std::unordered_map<std::string, int> subjectCredits = {
        {"Data Structures", 4},
        {"OOP with C++", 3},
        {"Computer Organization", 4},
        {"Discrete Math", 3}
    };

    std::cout << "Academic Subject Credits (unordered_map):\n";
    for (const auto &[subject, credits] : subjectCredits) {
        std::cout << "  - " << subject << ": " << credits << " credits\n";
    }

    // Unique Ordered Collection
    std::set<std::string> uniqueTechStack = {"C++", "C", "Python", "JavaScript", "C++", "SQL"};
    std::cout << "\nUnique Deduplicated Tech Stack (std::set):\n";
    for (const auto &tech : uniqueTechStack) {
        std::cout << "  * " << tech << "\n";
    }
    return 0;
}
