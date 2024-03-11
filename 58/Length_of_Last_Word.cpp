#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int length = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ')  //如果我们只使用 >，那么当 i 为0时，循环就会停止，这意味着我们会忽略掉字符串的第一个字符。
        {
            i--;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ')  //如果我们只使用 >，那么当 i 为0时，循环就会停止，这意味着我们会忽略掉字符串的第一个字符。
        {
            length++;
            i--;
        }

        return length;
    }
};