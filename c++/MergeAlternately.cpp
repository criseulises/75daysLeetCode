#include <iostream>
#include <string>

std::string mergeAlternately(const std::string &word1, const std::string word2) {

    std::string merged;
    size_t length = std::max(word1.length(), word2.length());

    for (size_t i = 0; i < length; i++) {
        if (word1.length() > i) {
            merged += word1[i];
        }
        if (word2.length() > i) {
            merged += word2[i];
        }
    }

    return merged;
}

int main() {
    std::cout << mergeAlternately("abc", "ZP") << std::endl;
    std::cout << mergeAlternately("world", "HELL") << std::endl;
    std::cout << mergeAlternately("number", "CORRIEND") << std::endl;
    std::cout << mergeAlternately("coding", "EXACTL") << std::endl;
    std::cout << mergeAlternately("working", "TRE") << std::endl;
    return 0;
}