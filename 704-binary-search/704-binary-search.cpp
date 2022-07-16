class Solution {
public:
    int binary(vector<int> nums,int s,int e,int target){
      
        if(s<=e){
            int mid=s+(e-s)/2;
            if(target==nums[mid]) return mid;
            
            else if(target>nums[mid]) return binary(nums,mid+1,e,target);
            
            else
                return binary(nums,s,mid-1,target);
        }
        
        return -1; //target not found
    }
    
    int search(vector<int>& nums, int target) {
        //Iterative
        int start=0,end=nums.size()-1;
        
//         while(start<=end){
//             int mid=start+(end-start)/2;
            
//             if(target==nums[mid]) return mid;
            
//             if(target>nums[mid]) start=mid+1;
//             else
//                 end=mid-1;
//         }
//         return -1;
        
        //Recursive
        return binary(nums,start,end,target);
    }
};