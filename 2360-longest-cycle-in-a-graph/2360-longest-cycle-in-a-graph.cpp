class Solution {
public:
    vector<vector<int>>g,g1;
    vector<bool>visited;
    priority_queue<pair<int,int>>pq;
    void dfs1(int v,int &t){
        visited[v]=true;
        t++;
        for(auto&child:g[v]){
            if(!visited[child]) dfs1(child,t);
        }
        t++;
        pq.push({t,v});
    }
    void dfs2(int v,int &c){
        visited[v]=true;
        c++;
        for(auto&child:g1[v]){
            if(!visited[child]) dfs2(child,c);
        }
    }
    int longestCycle(vector<int>& shubham) {
        g.resize(shubham.size());
        g1.resize(shubham.size());
        for(int i=0;i<shubham.size();i++){
            if(shubham[i]==-1) continue;
            g[shubham[i]].push_back(i);
            g1[i].push_back(shubham[i]);
        }
        visited.assign(shubham.size(),false);
        int ti=0;
        for(int i=0;i<shubham.size();i++){
            if(!visited[i]) dfs1(i,ti);
        }
        visited.assign(shubham.size(),false);
        int ans=-1;
        while(!pq.empty()){
            auto v=pq.top();
            pq.pop();
            if(!visited[v.second]) {
                int c=0;
                dfs2(v.second,c);
                if(c!=1) ans=max(ans,c);
            }
        }
        return ans;
    }
};