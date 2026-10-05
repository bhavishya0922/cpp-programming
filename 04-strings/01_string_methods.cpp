/**
 * Problem: Standard String Operations
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <string>

int main() {
    std::string text = "Computer Science and Engineering";
    std::cout << "Original Text: " << text << std::endl;
    std::cout << "Length: " << text.length() << " chars" << std::endl;

    // Substring
    std::string sub = text.substr(9, 7); // "Science"
    std::cout << "Extracted Substring: " << sub << std::endl;

    // Find and Replace
    size_t pos = text.find("Engineering");
    if (pos != std::string::npos) {
        text.replace(pos, 11, "Systems Architecture");
    }
    std::cout << "Modified String: " << text << std::endl;
    return 0;
}
