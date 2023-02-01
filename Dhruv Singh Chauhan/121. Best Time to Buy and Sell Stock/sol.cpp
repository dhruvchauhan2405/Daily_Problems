class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsofar= prices[0];
        int maxprofit=0;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minsofar){
                minsofar=prices[i];
            }
            profit=prices[i]-minsofar;
            if(profit>maxprofit){
                maxprofit=profit;
            }
        }
        return maxprofit;
    }
};