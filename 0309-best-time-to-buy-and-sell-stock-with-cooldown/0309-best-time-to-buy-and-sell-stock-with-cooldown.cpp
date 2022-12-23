class Solution {
public:

 int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+2,vector<int> (2,0));
        int n=prices.size();
        for(int idx=n-1;idx>=0;idx--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                if(buy)
                {
                    dp[idx][buy]=max(-prices[idx]+dp[idx+1][0],0+dp[idx+1][1]);
                }
                else
                {
                    dp[idx][buy]=max(prices[idx]+dp[idx+2][1],0+dp[idx+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};
