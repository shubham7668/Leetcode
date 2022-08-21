class Solution {
public:
    void backtracking(vector<int> nums,int target,
                      vector<int>& ds,int index,vector<vector<int>> &ans )
    {
        if(index==nums.size() || target<0) return;
        if(target==0){
            ans.push_back(ds);
            return;
        }
        
        //Include
        if(nums[index]<=target){
            ds.push_back(nums[index]);
            backtracking(nums,target-nums[index],ds,index,ans);
            ds.pop_back();
        }
        //Exclude
        backtracking(nums,target,ds,index+1,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        backtracking(nums,target,ds,0,ans);
        return ans;
    }
};