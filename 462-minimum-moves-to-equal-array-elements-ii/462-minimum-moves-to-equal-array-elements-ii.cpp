class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        //int sum=0,ans=0,minAns=INT_MAX;
        int ans=0;
        
        sort(nums.begin(),nums.end());
        
//         for(auto i : nums) cout<<i<<" ";
//         for(auto i : nums ) sum+=i;
        
//         int avg=(sum/n);
        
//        //  for(int i=avg;i>=nums[0];i--){
//        //      for(int j=0;j<n;j++){
//        //         if(nums[j]>=i) ans+=nums[j]-i;
//        //         else ans+=i-nums[j];
//        //     }
//        //     minAns=min(ans,minAns);
//        // }
        
        
//             for(auto j : nums){
//                 if(j>=avg) ans+=j-avg;
//                 else ans+=avg-j;
//             }
        
        for(int i=0;i<n/2;i++){
            ans+=nums[n-1-i]-nums[i];
        }
        return ans;
    }
};