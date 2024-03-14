#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t){
        int i = 0, j = 0;
        while (i < s.length() && j < t.length()){
            if (s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == s.length();
    }
};

int main(){
    Solution sol;
    string s = "abc", t = "ahbgdc";
    cout << sol.isSubsequence(s, t) << endl;
    s = "axc", t = "ahbgdc";
    cout << sol.isSubsequence(s, t) << endl;
    return 0;
}