class Solution {
public:
    void recursion(vector<int> &nums,vector<vector<int>> &ans,
                   vector<int> &ds,vector<int> vis) 
    {
        //Base case
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(vis[i]==0){
                ds.push_back(nums[i]);
                vis[i]=1;
                recursion(nums,ans,ds,vis);
                ds.pop_back();
                vis[i]=0;
            }
        }
    }
    
    void spaceOptimised(int index,vector<int> &nums,vector<vector<int>> &ans)
    {
        //Base Case
        if(index==nums.size()-1){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            spaceOptimised(index+1,nums,ans);
            swap(nums[i],nums[index]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // vector<int> ds;
        // vector<int>vis(nums.size(),0);
        // recursion(nums,ans,ds,vis);
        // return ans;
        
        spaceOptimised(0,nums,ans);
        return ans;
     }
};

