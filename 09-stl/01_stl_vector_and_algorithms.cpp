/**
 * Problem: STL Vector Manipulation with <algorithm> & Modern Lambdas
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> numbers = {45, 12, 89, 23, 7, 64, 31};

    // 1. Sort using standard algorithm
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted Vector: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << "\n";

    // 2. Accumulate sum
    int total = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Vector Sum: " << total << std::endl;

    // 3. Lambda filtering: count elements > 30
    auto countOver30 = std::count_if(numbers.begin(), numbers.end(), [](int n) {
        return n > 30;
    });
    std::cout << "Count of elements > 30: " << countOver30 << std::endl;
    return 0;
}
