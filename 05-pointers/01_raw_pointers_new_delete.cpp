/**
 * Problem: Dynamic Heap Allocation with new and delete
 * Author: Bhavishya Dewangan
 */
#include <iostream>

int main() {
    // Single primitive allocation
    int *valPtr = new int(108);
    std::cout << "Dynamically allocated value: " << *valPtr << " at address: " << valPtr << std::endl;
    delete valPtr;
    valPtr = nullptr; // Dangling pointer mitigation

    // Dynamic array allocation
    int n = 5;
    int *dynamicArray = new int[n];
    for (int i = 0; i < n; i++) dynamicArray[i] = (i + 1) * 10;

    std::cout << "Dynamic array elements: ";
    for (int i = 0; i < n; i++) std::cout << dynamicArray[i] << " ";
    std::cout << std::endl;

    delete[] dynamicArray;
    dynamicArray = nullptr;
    return 0;
}
