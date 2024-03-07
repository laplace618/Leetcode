#include <vector>
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice = INT_MAX;  //INT_MAX 是在 <climits> 或 <limits.h> 头文件中定义的常量，表示 int 类型可以表示的最大值。
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) 
        {
            if (prices[i] < minPrice)
                minPrice = prices[i];
            else if (prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};

int main(){
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    int result = s.maxProfit(prices);
    printf("Result: %d\n", result);
    return 0;
}