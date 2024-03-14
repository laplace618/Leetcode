#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            while (left < right && !isalnum(s[left])) 
            /*isalnum()是C++标准库中的一个函数，用于检查一个字符是否是字母或数字。
            如果字符是字母或数字，则返回非零值；否则返回0。*/
            {
                left++;
            }
            while (left < right && !isalnum(s[right])) 
            {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) 
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
