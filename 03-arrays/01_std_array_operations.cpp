/**
 * Problem: Fixed-Size Arrays with std::array
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 6> scores = {88, 92, 79, 95, 84, 90};

    std::cout << "Array Size: " << scores.size() << std::endl;
    std::cout << "Front element: " << scores.front() << " | Back element: " << scores.back() << std::endl;

    std::sort(scores.begin(), scores.end());

    std::cout << "Sorted Scores: ";
    for (const auto &score : scores) {
        std::cout << score << " ";
    }
    std::cout << std::endl;
    return 0;
}
