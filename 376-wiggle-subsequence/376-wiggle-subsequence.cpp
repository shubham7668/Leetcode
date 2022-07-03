class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int top=1,bottom=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) top=bottom+1;
            else if(nums[i]<nums[i-1]) bottom=top+1;
        }
        return max(top,bottom);
    }
};