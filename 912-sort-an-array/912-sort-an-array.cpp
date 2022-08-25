class Solution {
public:
    
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans=nums;
        sort(ans.begin(),ans.end());
        return ans;
    }
};