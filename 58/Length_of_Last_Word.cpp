#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int length = 0;
        int i = s.size() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ')  //�������ֻʹ�� >����ô�� i Ϊ0ʱ��ѭ���ͻ�ֹͣ������ζ�����ǻ���Ե��ַ����ĵ�һ���ַ���
        {
            i--;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ')  //�������ֻʹ�� >����ô�� i Ϊ0ʱ��ѭ���ͻ�ֹͣ������ζ�����ǻ���Ե��ַ����ĵ�һ���ַ���
        {
            length++;
            i--;
        }

        return length;
    }
};