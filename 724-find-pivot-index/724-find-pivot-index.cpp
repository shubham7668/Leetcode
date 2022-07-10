class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int left=0;
            int right=0;
            
            for(int j=i-1;j>=0;j--) left+=nums[j]; 
            
            for(int k=i+1;k<nums.size();k++) right+=nums[k];
            
            if(right==left)
                return i;
            else
                i++;
        }
        return -1;
    }
};