class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if (nums.size() == 0) return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) 
        {
            if (nums[j] != nums[i]) 
            {
                i++;
                nums[i] = nums[j];
                /*程序中的 nums[i] = nums[j]; 这一行代码，实际上是将不重复的元素复制到数组的前部。
                这样，数组的前部就只包含了不重复的元素，而重复的元素则被覆盖掉了。
                例如，对于数组 [1,1,2,2,3]，程序运行后，数组将变为 [1,2,3,2,3]。
                你可以看到，前三个元素是不重复的元素，而后两个元素是被覆盖的元素。*/
            }
        }
        return i + 1;
    }
};