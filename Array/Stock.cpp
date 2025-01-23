//LEETCODE PROBLEM  Best time to buy and sell Stock 
// LINK :https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// submission detail : https://leetcode.com/submissions/detail/1517965857/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = 0;
        int diff = 0;
        int pos =0;
        for(int i = 0;i<prices.size();i++){
            if(min>prices[i]){
                min = prices[i];

            }
            else if(diff <prices[i]-min){
                max = prices[i];
                diff = prices[i]-min;
                pos = i+1;
            }

        }
        return diff;
    }
};
