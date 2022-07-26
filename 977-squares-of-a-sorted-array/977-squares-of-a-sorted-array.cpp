class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Brute force
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        
        return nums;
    }
};