class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Brute Force1 ->O(nlog(n))+O(n)
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++) 
        //     if(nums[i]==nums[i+1]) 
        //         return nums[i];
        // return -1;
        
        //Brute Force2 -> tc=O(n)+O(n)   sc=O(n)
        //unordered_map<int,int> mp;
        //for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        //for(auto i: mp) if(i.second>1) return i.first;
        //return -1;
        
        //Optimised 
        vector<int> hash(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]]!=0) return nums[i];
            hash[nums[i]]++;
        }
        for(int i=0;i<hash.size();i++) if(hash[i]>1) return i+1;
        return -1;
    }
    
};