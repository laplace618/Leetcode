#include <vector>
#include <iostream>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val)
        /*std::vector��C++��һ��ģ���࣬���ڱ�ʾ�ɱ��С�����顣
        <int>��ʾ���vector�洢����int���͵�Ԫ�ء�
        &��ʾ���������һ�����ã�Ҳ����˵�������ں����ڲ��޸�numsʱ����ʵ���������޸Ĵ��ݸ�������ԭʼvector��*/
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
��C++�У�using namespace std;�������������std�����ռ���������Ƶġ�
��������Ϳ���ֱ��ʹ��std�����ռ��е����ƣ�������Ҫ��ÿ������ǰ�����std::ǰ׺��
Ȼ����ʹ��using namespace std;���Ҳ��һЩǱ�ڵ����⡣
����Ҫ�������ǣ������ܻᵼ��������ͻ��
���磬�����Ĵ����ж�����һ����Ϊvector�ı�����Ȼ����ʹ����using namespace std;��䣬��ô���vector�����ͻ���std::vector������ͻ��
����Ĵ����У���ѡ������ʽ��ʹ��std::ǰ׺��������ʹ��using namespace std;��䡣
��������Ϳ��Ա���������������ͻ���⣬������Ĵ���Ҳ����������Ϊ���߿�������������ʹ�õ���std�����ռ��е����ơ�
*/