#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) 
    {
        std::unordered_map<char, int> roman_map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int total = 0;
        int prev_value = 0;  // To keep track of the previous value
        
        for (int i = s.length() - 1; i >= 0; --i)   // Start from the end of the string
        {
            int current_value = roman_map[s[i]];
            
            if (current_value < prev_value)
                total -= current_value;
            else
                total += current_value;
            
            prev_value = current_value;
        }
        
        return total;
    }
};