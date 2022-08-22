class Solution {
public:
     int maxSubArray(vector<int>& nums) {
//         //Brute force ->O(n^2)
//         if(nums.size()==1) return nums[0];
//         int max_sum=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             int sum=0;
//             for(int j=i;j<nums.size();j++){
//                 sum+=nums[j];
//                 if(sum>max_sum) max_sum=sum;
//             }
            
//         }
//         return max_sum;
        
        //Optimised using kadanes algorithm -> O(n)
        
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi) maxi=sum;
            if(sum<0) sum=0;
        }
        return maxi;
    }
};