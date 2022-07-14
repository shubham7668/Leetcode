class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        //Brute Force -> O(n^2)
        // int maxProfit=0;
        // for(int i=0;i<prices.size()-1;i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         int profit=prices[j]-prices[i];
        //         maxProfit=max(profit,maxProfit);
        //     }
        // }
        //return maxProfit;
        
        //Optimised -> O(n) Basically, I have to minimise buy & maximise profit 
        int buy=INT_MAX;
        int profit=0;
        
        for(int i=0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            profit=max(profit,prices[i]-buy);
        }
        return profit;
    }
};