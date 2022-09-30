class Solution {
public:
    
    void dfs(vector<int> adj[],vector<int>& vis,int i){
        vis[i] = 1;
        for(auto it : adj[i]){
            if(!vis[it])
                dfs(adj,vis,it);      
        }
    }
    
    int findCircleNum(vector<vector<int>>& mat) {
        int n = mat.size();
        vector<int> adj[n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==1 && i != j)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
       vector<int> vis(n, 0);
       int c=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                c++;
                dfs(adj,vis,i);
            }
        }
        return c;
    }
};