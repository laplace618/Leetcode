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
                /*�����е� nums[i] = nums[j]; ��һ�д��룬ʵ�����ǽ����ظ���Ԫ�ظ��Ƶ������ǰ����
                �����������ǰ����ֻ�����˲��ظ���Ԫ�أ����ظ���Ԫ���򱻸��ǵ��ˡ�
                ���磬�������� [1,1,2,2,3]���������к����齫��Ϊ [1,2,3,2,3]��
                ����Կ�����ǰ����Ԫ���ǲ��ظ���Ԫ�أ���������Ԫ���Ǳ����ǵ�Ԫ�ء�*/
            }
        }
        return i + 1;
    }
};