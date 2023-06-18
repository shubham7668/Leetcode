class Solution {
public:
    #define MAX 1000
    // Function that returns the number of
    int mod = 1e9+7;

    int shubham(vector<vector<int>>& grid, int dp[MAX][MAX],
                                              int n, int m,int x, int y)
{
  
    if (dp[x][y] != -1)
        return dp[x][y];
        int delta[4][2] = { { 0, 1 }, { 1, 0 }, { -1, 0 }, { 0, -1 } };
        int myX, myY;
        int ans = 1;
 
        for (int i = 0; i < 4; i++) {
 
        // new co-ordinates
        myX = x + delta[i][0];
        myY = y + delta[i][1];
 
     
        if (myX >= 0 && myX < n && myY >= 0
            && myY < m && grid[myX][myY] > grid[x][y]) {
            ans += shubham(grid, dp, n, m,myX, myY);
            ans = ans% mod;
        }
    }
   
    return dp[x][y] = ans;
}
 
    int countPaths(vector<vector<int>>& grid) {
        int dp[MAX][MAX];
        int n = grid.size();
        int m= grid[0].size();
 
        for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            dp[i][j] = -1;
 
        int summation = 0;
 

        for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            summation += shubham(grid, dp, n,m, i, j);
            summation = summation% mod;
        }
        
 
        return summation % mod;
    }
};