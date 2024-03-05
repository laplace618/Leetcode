#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
void push_forward(vector<int>& nums,int i,int val){
    for(int j=i+1;j<nums.size();j++){
        nums[j-1]=nums[j];
    }
    nums.pop_back();
    if(nums[i]==val){
        removeElement(nums,val);
    }
}
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                push_forward(nums,i,val);
            }
        }
        return nums.size();
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int ret = solution.removeElement(nums, val);
    std::cout << "The number of elements not equal to " << val << " is " << ret << std::endl;
    return 0;
}