class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0,s,e,closest=nums[0]+nums[1]+nums[2];
        
        sort(nums.begin(),nums.end());
        
        if(n<3) return 0;
        
        
        for(int i=0;i<n;i++){
            s = i+1;
            e = n-1;
            while(s<e){
                sum=nums[i]+nums[s]+nums[e];
        
                if(sum==target) return sum;
                
                
                if(abs(target-sum)<abs(target-closest)) closest = sum;
                
                else if(sum>target) e--;
                
                else s++;
            }
        }
        return closest;
    }
};