#include <vector>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) 
    {
        int count = 0;  // count of the majority element
        int candidate = 0;  // the majority element

        for (int num : nums)   // Moore's Voting Algorithm
        {
            if (count == 0) 
            {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};