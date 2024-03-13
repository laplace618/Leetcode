#include <iostream>
#include <string>

class Solution {
public:
    int findIndex(const std::string& haystack, const std::string& needle) {
            size_t found = haystack.find(needle);
            if (found != std::string::npos)  
            // string::npos为haystack。fing()函数返回值,表示未找到needle在haystack中第一次出现的位置
            //size_t是C++所定义的无符号整数类型，用于存储数组长度、索引等非负值。
            {
                return static_cast<int>(found);  // static_cast<int>()用于强制类型转换
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