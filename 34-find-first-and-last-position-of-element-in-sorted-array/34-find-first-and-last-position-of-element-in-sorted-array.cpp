class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        int n=nums.size();
        if(n==0){
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        int i;
        for(i=0;i<n;i++){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }
            else{
                ans[0]=-1;
                ans[1]=-1;
            }
        }
        bool flag=true;
        for(int j=i;j<n;j++){
            if(nums[j]==target) flag = true;
            else
                flag=false;
            if(flag==false){
                ans[1]=j-1;
                break;
            }
               if(j==n-1){
                   ans[1]=j;
                   break;
               }
        }
        return ans;
    }
};