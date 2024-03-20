#include <sstream>
#include <unordered_map>
#include <vector>

bool wordPattern(std::string pattern, std::string str) {
    std::unordered_map<char, int> patternMap;
    std::unordered_map<std::string, int> strMap;
    std::istringstream in(str);
    /*std::istringstream in(str);������һ��istringstream����in������str��Ϊ����Դ��
    Ȼ����while (in >> word)ѭ���У�in��������������>>�������������ж�ȡ���ָ�����ʣ�����word�С�
    ������̻�һֱ���У�ֱ��in��û�и���ĵ���Ϊֹ��*/
    std::vector<std::string> words;
    std::string word;
    while (in >> word) {  // ��ȡ���ָ������
        words.push_back(word);
    }
    if (pattern.size() != words.size()) {  // ���pattern��words�ĳ��Ȳ�һ��������false
        return false;
    }
    for (int i = 0; i < pattern.size(); ++i) {  // ����pattern��words
        if (patternMap[pattern[i]] != strMap[words[i]]) {  // ���pattern��words�е�Ԫ�ز�ƥ�䣬����false
            return false;
        }
        patternMap[pattern[i]] = i + 1;  // ����patternMap��strMap
        strMap[words[i]] = i + 1;
    }
    return true;
}