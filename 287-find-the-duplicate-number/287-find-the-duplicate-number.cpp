class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Brute Force1 ->O(nlog(n))+O(n)
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++) 
        //     if(nums[i]==nums[i+1]) 
        //         return nums[i];
        // return -1;
        
        //Brute Force2 -> 
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        for(auto i: mp) if(i.second>1) return i.first;
        return -1;
    }
    
};