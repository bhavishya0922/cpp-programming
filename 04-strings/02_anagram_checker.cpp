/**
 * Problem: Anagram Validation Using Frequency Array
 * Author: Bhavishya Dewangan
 */
#include <iostream>
#include <string>
#include <vector>

bool isAnagram(const std::string &s1, const std::string &s2) {
    if (s1.length() != s2.length()) return false;
    std::vector<int> freq(26, 0);

    for (char c : s1) freq[tolower(c) - 'a']++;
    for (char c : s2) freq[tolower(c) - 'a']--;

    for (int count : freq) {
        if (count != 0) return false;
    }
    return true;
}

int main() {
    std::string a = "listen";
    std::string b = "silent";

    std::cout << "'" << a << "' & '" << b << "' -> "
              << (isAnagram(a, b) ? "Valid Anagrams" : "Not Anagrams") << std::endl;
    return 0;
}
