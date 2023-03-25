class Solution {
private:
    long long dfs(int node, vector<int> adj[], vector<bool> &visited){
        visited[node] = 1;
        int len = 1;
        for(auto itr : adj[node]){
            if(!visited[itr]){
                len += dfs(itr, adj, visited);
            }
        }
        return len;
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(auto e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int>v;
        vector<bool>visited(n,0);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                long long len = dfs(i, adj, visited);
                v.push_back(len);
            }
        }
        int m = v.size();
        vector<int> suf(m , 0);
        suf[m-1] = 0;
        for(int i = m-2; i >= 0; i--){
            suf[i] = suf[i+1] + v[i+1];
        }
        long long result = 0;
        for(int i = 0; i < m; i++){
             result += (v[i]*1LL*suf[i]);
        }
        return  result;
    }
};