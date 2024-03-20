#include <unordered_map>
#include <string>

class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        std::unordered_map<char, char> s_to_t;
        std::unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.size(); ++i) {
            if (s_to_t.count(s[i]) && s_to_t[s[i]] != t[i]) {
                return false;
            }
            if (t_to_s.count(t[i]) && t_to_s[t[i]] != s[i]) {
                return false;
            }
            s_to_t[s[i]] = t[i];
            t_to_s[t[i]] = s[i];
        }

        return true;
    }
};