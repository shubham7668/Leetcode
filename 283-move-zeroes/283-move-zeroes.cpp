class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute force
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt++;
            else
                ans.push_back(nums[i]);
        }
        while(cnt>0){
            ans.push_back(0);
            cnt--;
        }
        nums=ans;
    }
};