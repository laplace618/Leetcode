#include <vector>
#include <iostream>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val)
        /*std::vector是C++的一个模板类，用于表示可变大小的数组。
        <int>表示这个vector存储的是int类型的元素。
        &表示这个参数是一个引用，也就是说，当你在函数内部修改nums时，你实际上是在修改传递给函数的原始vector。*/
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] != val)
             {
                nums[k++] = nums[i];
            }
        }
        return k;
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

/*
在C++中，using namespace std;语句是用来导入std命名空间的所有名称的。
这样，你就可以直接使用std命名空间中的名称，而不需要在每个名称前面加上std::前缀。
然而，使用using namespace std;语句也有一些潜在的问题。
最主要的问题是，它可能会导致命名冲突。
例如，如果你的代码中定义了一个名为vector的变量，然后你使用了using namespace std;语句，那么你的vector变量就会与std::vector产生冲突。
在你的代码中，你选择了显式地使用std::前缀，而不是使用using namespace std;语句。
这样，你就可以避免上述的命名冲突问题，而且你的代码也更清晰，因为读者可以立即看出你使用的是std命名空间中的名称。
*/