// class Solution {
// public:
//     //BRUTE FORCE
// //     int fun(vector<int> nums,int target){
// //         //Base Case
// //         if(target==0) return 1;
// //         if(target<0) return 0;
        
// //         int cnt=0;
// //         for(int i=0;i<nums.size();i++){
// //             cnt=cnt + fun(nums,target-nums[i]);
// //         }
// //         return cnt;
// //     }
//     int combinationSum4(vector<int>& nums, int target) {
//         return fun(nums,target);
//     }
// };

class Solution {
public:
    
    vector<int> dp;
    
    Solution() {
        dp.resize(1001);
        fill(dp.begin(), dp.end(), -1);
    }
    
    int combinationSum4(vector<int>& nums, int target, int currSum=0) {
        if(currSum > target) return 0;
        if(currSum == target) return 1;
        if(dp[currSum] != -1) return dp[currSum];
        int ways = 0;
        for(int i=0; i<nums.size(); i++) {
            if(currSum + nums[i] <= target)
                ways += combinationSum4(nums, target, currSum + nums[i]);
        }
        return dp[currSum] = ways;
    }
};