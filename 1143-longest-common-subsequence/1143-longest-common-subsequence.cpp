class Solution {
private:
    int func(int i ,int j ,int t1_size,int t2_size,string& text1,string& text2,vector<vector<int>>& dp){
        if(i==t1_size || j==t2_size)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(text1[i]==text2[j]){
            return dp[i][j]= 1 + func(i+1, j+1, t1_size, t2_size, text1, text2, dp);
        }
        return dp[i][j] = max(func(i+1 ,j ,t1_size, t2_size, text1, text2, dp) , 
                            func(i ,j+1 ,t1_size, t2_size, text1, text2, dp));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int t1_size = text1.size();
        int t2_size = text2.size();
        vector<vector<int>> dp(t1_size, vector<int>(t2_size,-1));
        return func(0 ,0 ,t1_size, t2_size, text1, text2, dp);
    }
};