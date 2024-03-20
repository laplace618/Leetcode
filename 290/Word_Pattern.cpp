#include <sstream>
#include <unordered_map>
#include <vector>

bool wordPattern(std::string pattern, std::string str) {
    std::unordered_map<char, int> patternMap;
    std::unordered_map<std::string, int> strMap;
    std::istringstream in(str);
    /*std::istringstream in(str);创建了一个istringstream对象in，并将str作为输入源。
    然后，在while (in >> word)循环中，in被用作输入流，>>运算符从这个流中读取并分割出单词，存入word中。
    这个过程会一直进行，直到in中没有更多的单词为止。*/
    std::vector<std::string> words;
    std::string word;
    while (in >> word) {  // 读取并分割出单词
        words.push_back(word);
    }
    if (pattern.size() != words.size()) {  // 如果pattern和words的长度不一样，返回false
        return false;
    }
    for (int i = 0; i < pattern.size(); ++i) {  // 遍历pattern和words
        if (patternMap[pattern[i]] != strMap[words[i]]) {  // 如果pattern和words中的元素不匹配，返回false
            return false;
        }
        patternMap[pattern[i]] = i + 1;  // 更新patternMap和strMap
        strMap[words[i]] = i + 1;
    }
    return true;
}