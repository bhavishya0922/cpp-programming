/**
 * Problem: Pass by Value vs Pass by Reference
 * Author: Bhavishya Dewangan
 */
#include <iostream>

void modifyByValue(int x) {
    x += 10;
}

void modifyByReference(int &x) {
    x += 10;
}

int main() {
    int val = 50;
    std::cout << "Initial Value: " << val << std::endl;

    modifyByValue(val);
    std::cout << "After modifyByValue: " << val << " (Unchanged)" << std::endl;

    modifyByReference(val);
    std::cout << "After modifyByReference: " << val << " (Modified in-place)" << std::endl;
    return 0;
}
