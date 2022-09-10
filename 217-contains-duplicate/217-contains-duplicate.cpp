class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        // for(auto i : mp) if(i.second>=2) return 1;
        // return 0;
        
        set<int> s;
        for(int i=0;i<nums.size();i++) s.insert(nums[i]);
        return s.size()!=nums.size();
    }
};