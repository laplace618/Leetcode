#include <unordered_map>
#include <string>
#include <iostream>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> count;

        for (char c : magazine) {
            count[c]++;
        }

        for (char c : ransomNote) {
            if (count[c] <= 0) {
                return false;
            }
            count[c]--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    std::string ransomNote1 = "a", magazine1 = "b";
    std::string ransomNote2 = "aa", magazine2 = "ab";
    std::string ransomNote3 = "aa", magazine3 = "aab";

    // Test cases
    std::cout << sol.canConstruct(ransomNote1, magazine1) << std::endl;  // Output: false
    std::cout << sol.canConstruct(ransomNote2, magazine2) << std::endl;  // Output: false
    std::cout << sol.canConstruct(ransomNote3, magazine3) << std::endl;  // Output: true

    return 0;
}
