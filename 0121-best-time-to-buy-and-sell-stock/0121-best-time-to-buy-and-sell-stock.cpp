class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        //Brute force ->O(n^2)
        // int maxProfit=INT_MIN;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         int profit=nums[j]-nums[i];
        //         maxProfit=max(maxProfit,profit);
        //     }
        // }
        // if(maxProfit<0) return 0;
        // return maxProfit;
        
        //Optimised -> O(n)
        int buy=INT_MAX,profit=INT_MIN;
        for(int i=0;i<n;i++){
            if(buy>nums[i]) buy=nums[i];
            // buy=min(buy,nums[i]);
            if(profit<nums[i]-buy) profit=nums[i]-buy;
            // profit=max(profit,nums[i]-buy);
        }
        return profit;
    }
};