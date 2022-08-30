class Solution {
public:
    int newsize(vector<int> &nums){
        vector<int> temp;
        int j=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                temp.push_back(nums[i]);
                j++;
            }
        }
        temp.push_back(nums[nums.size()-1]);
        nums=temp;
        return j+1;
    }
    int removeDuplicates(vector<int>& nums) {
        
        return newsize(nums);
        
    }
};