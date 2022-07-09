// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
 vector<vector<int>> result;
    void solve(int i,int j, vector<vector<int>> grid, vector<int> v,int n, int m){
    
    
        if(i==n-1 && j==m-1){         
            v.push_back(grid[i][j]);
            result.push_back(v);
            return;
        }
    
        if(i>n-1||j>m-1) return; 
        
     
        v.push_back(grid[i][j]);   
        solve(i+1,j,grid,v,n,m);  
        solve(i,j+1,grid,v,n,m);  
        return;
    }
    
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        if(grid.size()==0) return{{}};
        vector<int> v;
        solve(0,0,grid,v,n,m);
        return result;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends