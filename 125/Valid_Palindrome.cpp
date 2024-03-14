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
            /*isalnum()��C++��׼���е�һ�����������ڼ��һ���ַ��Ƿ�����ĸ�����֡�
            ����ַ�����ĸ�����֣��򷵻ط���ֵ�����򷵻�0��*/
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
