class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int j=0;
            int ans;
            for(;j<nums2.size();j++) if(nums2[j]==nums1[i]) break;
            //cout<<j<<" ";
            j+=1;
            for(;j<nums2.size();j++){ 
                if(nums2[j]>nums1[i]){
                    ans=nums2[j];
                    break;
                }
            }
            if(j==nums2.size()) ans=-1;
            res.push_back(ans);
        }
        return res;
        
    }
};