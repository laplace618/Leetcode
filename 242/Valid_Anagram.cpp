#include <iostream>
#include <unordered_map>

bool isAnagram(std::string s, std::string t) {
    if (s.length() != t.length()) {
        return false;
    }

    std::unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    for (char c : t) {
        count[c]--;
        if (count[c] < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string s1 = "anagram";
    std::string t1 = "nagaram";
    std::cout << isAnagram(s1, t1) << std::endl;  // Output: 1 (true)

    std::string s2 = "rat";
    std::string t2 = "car";
    std::cout << isAnagram(s2, t2) << std::endl;  // Output: 0 (false)

    return 0;
}
