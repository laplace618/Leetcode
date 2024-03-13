#include <iostream>
#include <string>

class Solution {
public:
    int findIndex(const std::string& haystack, const std::string& needle) {
            size_t found = haystack.find(needle);
            if (found != std::string::npos)  
            // string::nposΪhaystack��fing()��������ֵ,��ʾδ�ҵ�needle��haystack�е�һ�γ��ֵ�λ��
            //size_t��C++��������޷����������ͣ����ڴ洢���鳤�ȡ������ȷǸ�ֵ��
            {
                return static_cast<int>(found);  // static_cast<int>()����ǿ������ת��
            } else 
            {
                return -1;
            }
        }
};

int main() {
    std::string haystack1 = "sadbutsad";
    std::string needle1 = "sad";
    std::cout << "Index of first occurrence: " << findIndex(haystack1, needle1) << std::endl;

    std::string haystack2 = "leetcode";
    std::string needle2 = "leeto";
    std::cout << "Index of first occurrence: " << findIndex(haystack2, needle2) << std::endl;

    return 0;
}