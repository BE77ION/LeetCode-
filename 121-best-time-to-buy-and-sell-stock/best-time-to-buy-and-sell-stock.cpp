class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy=p[0];
        int profit=0;
        for(auto i:p){
            if(buy>i){
                buy =i;
            }
            profit=max(profit,i-buy);
        }
        return profit;
    }
};