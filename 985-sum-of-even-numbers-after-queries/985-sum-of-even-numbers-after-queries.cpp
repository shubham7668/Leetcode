class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
         //1,0
        //-3,1
        //-4,0
         //2,3
        
        //Brute Force
        vector<int> ans;
        int sum=0;
        for(auto i:nums) if(i%2==0) sum+=i;
        
        // for(int i=0;i<queries.size();i++){
        //     nums[queries[i][1]]+=queries[i][0];
        //     int sum=0;
        //     for(auto i:nums) cout<<i<<" ";
        //     cout<<endl;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]%2==0) sum+=nums[j];
        //     }
        //     ans.push_back(sum);
        // }
        // return ans;
        
       
        for(int i=0;i<queries.size();i++){
            
            int val=queries[i][0];
            int index=queries[i][1];
            
            if (nums[index]%2==0) sum-=nums[index];
            
            nums[index]+=val;
    
            if(nums[index]%2==0) sum+=nums[index];
            
            ans.push_back(sum);
        }
        return ans;
    }
};