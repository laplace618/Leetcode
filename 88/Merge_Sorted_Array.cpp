#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] < nums2[p2]) {
                nums1[p] = nums2[p2];
                p2--;
            } else {
                nums1[p] = nums1[p1];
                p1--;
            }
            p--;
        }
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;
    while (p1 >= 0 && p2 >= 0) {
        if (nums1[p1] < nums2[p2]) {
            nums1[p] = nums2[p2];
            p2--;
        } else {
            nums1[p] = nums1[p1];
            p1--;
        }
        p--;
    }
    while (p2 >= 0) {
        nums1[p] = nums2[p2];
        p2--;
        p--;
    }
}

vector<int> parseInput(string input) {
    vector<int> output;
    stringstream ss(input.substr(1, input.length() - 2));
    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        output.push_back(stoi(substr));
    }
    return output;
}