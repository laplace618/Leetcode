#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                /*find 函数被用来在 numMap 中查找键为 complement 的元素。
                如果找到了这个键，则返回指向该元素的迭代器；
                如果没找到，则返回指向 numMap 结尾的迭代器。*/
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // 未找到解决方案
    }
};

int main() {
    Solution solution;

    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    auto result1 = solution.twoSum(nums1, target1);
    std::cout << "Example 1: [" << result1[0] << ", " << result1[1] << "]" << std::endl;

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    auto result2 = solution.twoSum(nums2, target2);
    std::cout << "Example 2: [" << result2[0] << ", " << result2[1] << "]" << std::endl;

    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    auto result3 = solution.twoSum(nums3, target3);
    std::cout << "Example 3: [" << result3[0] << ", " << result3[1] << "]" << std::endl;

    return 0;
}
