#include <vector>
#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minPrice = INT_MAX;  //INT_MAX ���� <climits> �� <limits.h> ͷ�ļ��ж���ĳ�������ʾ int ���Ϳ��Ա�ʾ�����ֵ��
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