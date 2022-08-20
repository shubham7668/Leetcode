class Solution {
public:
    
    void subset(vector<int> nums,vector<int> ds,
                vector<vector<int>> &ans,int index){
        
        if(index==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        //exclude
        subset(nums,ds,ans,index+1);
        
        //include 
        ds.push_back(nums[index]);
        subset(nums,ds,ans,index+1);
        
        
    }
        
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        subset(nums,ds,ans,0);
        
        return ans;
    
    }
};