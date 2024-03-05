/*
1072. Flip Columns For Maximum Number of Equal Rows

You are given an m x n binary matrix matrix.
You can choose any number of columns in the matrix and flip every cell in that column 
(i.e., Change the value of the cell from 0 to 1 or vice versa).
Return the maximum number of rows that have all values equal after some number of flips.

Example 1:
Input: matrix = [[0,1],[1,1]]
Output: 1
Explanation: After flipping no values, 1 row has all values equal.

Example 2:
Input: matrix = [[0,1],[1,0]]
Output: 2
Explanation: After flipping values in the first column, both rows have equal values.

Example 3:
Input: matrix = [[0,0,0],[0,0,1],[1,1,0]]
Output: 2
Explanation: After flipping values in the first two columns, the last two rows have equal values.

Constraints:
m == matrix.length
n == matrix[i].length
1 <= m, n <= 300
matrix[i][j] is either 0 or 1.
*/

#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> count;
        for (auto& row : matrix) {
            if (row[0] == 1) {
                for (auto& cell : row) {
                    cell ^= 1;
                }
            }
            string row_str;
            for (auto& cell : row) {
                row_str += to_string(cell);
            }
            count[row_str]++;
        }
        int max_count = 0;
        for (auto it = count.begin(); it != count.end(); ++it) {
            max_count = max(max_count, it->second);
        }
        return max_count;
    }
};

int main() {
    Solution solution;
    string input;
    getline(cin, input);
    input = input.substr(10, input.size() - 11); // remove "matrix = ["
    vector<vector<int>> matrix;
    size_t pos = 0;
    while ((pos = input.find("],[")) != string::npos) {
        vector<int> row;
        string row_str = input.substr(1, pos - 1); // remove "["
        size_t pos_row = 0;
        while ((pos_row = row_str.find(",")) != string::npos) {
            row.push_back(stoi(row_str.substr(0, pos_row)));
            row_str.erase(0, pos_row + 1);
        }
        row.push_back(stoi(row_str));
        matrix.push_back(row);
        input.erase(0, pos + 3);
    }
    vector<int> row;
    string row_str = input.substr(1, input.size() - 2); // remove "["
    size_t pos_row = 0;
    while ((pos_row = row_str.find(",")) != string::npos) {
        row.push_back(stoi(row_str.substr(0, pos_row)));
        row_str.erase(0, pos_row + 1);
    }
    row.push_back(stoi(row_str));
    matrix.push_back(row);
    int result = solution.maxEqualRowsAfterFlips(matrix);
    cout << "Output: " << result << endl;
    return 0;
}