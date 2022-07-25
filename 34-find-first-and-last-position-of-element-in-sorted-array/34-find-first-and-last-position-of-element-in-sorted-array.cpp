class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //Brute Force -> O(n)
        vector<int> ans(2, -1);
        int n=nums.size();
        if(n==0){
            return ans;
        }
        // int i;
        // for(i=0;i<n;i++){
        //     if(nums[i]==target){
        //         ans[0]=i;
        //         break;
        //     }
        //     else{
        //         ans[0]=-1;
        //         ans[1]=-1;
        //     }
        // }
        // bool flag=true;
        // for(int j=i;j<n;j++){
        //     if(nums[j]==target) flag = true;
        //     else
        //         flag=false;
        //     if(flag==false){
        //         ans[1]=j-1;
        //         break;
        //     }
        //        if(j==n-1){
        //            ans[1]=j;
        //            break;
        //        }
        // }
        // return ans;
        
        //Optimised -> using binary search -> O(log n)
        
        int i = 0, j = n - 1;
        
        
        while (i<j){            // Search for the left one
            int mid = (i + j) /2;
            if (nums[mid] < target) 
                i = mid + 1;
            else 
                j = mid;
        }
        
        if (nums[i]!=target) return ans;
        else ans[0] = i;
        
        // Search for the right one
        j = n-1;  // We don't have to set i to 0 the second time.
        while (i < j){
            int mid = (i + j) /2 + 1;	// Make mid biased to the right
            if (nums[mid] > target) 
                j = mid - 1;  
            else 
                i = mid;				// So that this won't make the search range stuck.
        }
        ans[1] = j;
        return ans;
    }
};