#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) 
    {
        if (strs.empty()) 
        /*strs是一个std::vector<std::string>，所以应该使用strs.empty()来检查它是否没有元素。
        如果你试图使用strs == ""，编译器会报错，
        因为std::vector<std::string>和const char[1]（""的类型）之间没有定义相等性比较运算符。*/
        {
            return "";
        }

        int minLen = std::min_element(strs.begin(), strs.end(), [](const std::string& s1, const std::string& s2) {
            return s1.size() < s2.size();
        }) -> size();
        /*pflen应该被限制为最短字符串的长度，而不是字符串数组的长度。*/
        /*std::min_element函数返回一个迭代器，这个迭代器指向strs中最短的字符串。
        然后，你可以使用->size()来调用这个最短字符串的size()函数，获取其长度。
        这个长度是一个int型变量，可以直接赋值给minLen。*/

        for (int prefixLen = 0; prefixLen < strs[0].size(); prefixLen++) 
        { 
            char c = strs[0][prefixLen];  //取第 '1' 个字符串的第 'prefixLen + 1' 个字符
            for (int i = 1; i < strs.size(); i++)  //从第 'i + 1' 个字符串开始
            { 
                if (prefixLen == strs[i].size() || strs[i][prefixLen] != c)  
                /*如果第 'i + 1' 个字符串的长度等于 'prefixLen' 或者
                第 'i + 1' 个字符串的第 'prefixLen + 1' 个字符不等于第 '1' 个字符串的第 'prefixLen + 1' 个字符*/
                {
                    return strs[0].substr(0, prefixLen);  //返回第 '1' 个字符串的前 'prefixLen' 个字符
                }
            }
        }
        return strs[0];
    }
};