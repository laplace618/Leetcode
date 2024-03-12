#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) 
    {
        if (strs.empty()) 
        /*strs��һ��std::vector<std::string>������Ӧ��ʹ��strs.empty()��������Ƿ�û��Ԫ�ء�
        �������ͼʹ��strs == ""���������ᱨ��
        ��Ϊstd::vector<std::string>��const char[1]��""�����ͣ�֮��û�ж�������ԱȽ��������*/
        {
            return "";
        }

        int minLen = std::min_element(strs.begin(), strs.end(), [](const std::string& s1, const std::string& s2) {
            return s1.size() < s2.size();
        }) -> size();
        /*pflenӦ�ñ�����Ϊ����ַ����ĳ��ȣ��������ַ�������ĳ��ȡ�*/
        /*std::min_element��������һ�������������������ָ��strs����̵��ַ�����
        Ȼ�������ʹ��->size()�������������ַ�����size()��������ȡ�䳤�ȡ�
        ���������һ��int�ͱ���������ֱ�Ӹ�ֵ��minLen��*/

        for (int prefixLen = 0; prefixLen < strs[0].size(); prefixLen++) 
        { 
            char c = strs[0][prefixLen];  //ȡ�� '1' ���ַ����ĵ� 'prefixLen + 1' ���ַ�
            for (int i = 1; i < strs.size(); i++)  //�ӵ� 'i + 1' ���ַ�����ʼ
            { 
                if (prefixLen == strs[i].size() || strs[i][prefixLen] != c)  
                /*����� 'i + 1' ���ַ����ĳ��ȵ��� 'prefixLen' ����
                �� 'i + 1' ���ַ����ĵ� 'prefixLen + 1' ���ַ������ڵ� '1' ���ַ����ĵ� 'prefixLen + 1' ���ַ�*/
                {
                    return strs[0].substr(0, prefixLen);  //���ص� '1' ���ַ�����ǰ 'prefixLen' ���ַ�
                }
            }
        }
        return strs[0];
    }
};