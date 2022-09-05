class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        //2,8,7
        //7,1,3
        //1,9,5
        int ans=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};