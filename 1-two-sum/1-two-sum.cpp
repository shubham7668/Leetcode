class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;  //Hash Table
        
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i]) != mp.end()) 
                return {mp[target-nums[i]],i};
            
            mp[nums[i]]=i;
        }
        return {};
        
    }
};