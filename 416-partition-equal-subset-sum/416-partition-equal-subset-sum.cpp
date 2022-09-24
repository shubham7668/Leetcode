class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2!=0)return 0;
        
        int target=sum/2;
        
        int t[n+1][target+1];
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=target;j++){
                if(i==0)t[i][j]=0;
                if(j==0)t[i][j]=1;
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                
                if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
                }
                else t[i][j]=t[i-1][j];
            }
        }
        
        return t[n][target];
    }
};