class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
//         map<int,int> mp;
//         for(int i=0;i<nums.size();i++) mp[nums[i]]++;

//         for(auto i : mp){
//             if(i.second==1) return i.first;
//         }
//         return 0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};