class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int j=0,k=n;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(nums[j]);
                j++;
            }
            else{
                ans.push_back(nums[k]);
                k++;
            }
        }
        return ans;
    }
};