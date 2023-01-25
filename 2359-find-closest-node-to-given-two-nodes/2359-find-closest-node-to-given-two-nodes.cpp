class Solution{
public:
int closestMeetingNode(vector<int>& e,int node1, int node2) {

    int n=e.size();
        vector<int> adj[n];
        for(int i=0;i<e.size();i++){
            if(e[i]!=-1){
                adj[i].push_back(e[i]);
            }
        }
        vector<int> x(n,1e8),y(n,1e8);
        queue<int> q;
        q.push(node1);
        
       x[node1]=0;
        while(!q.empty()){
    
            int sq=q.size();
            for(int i=0;i<q.size();i++){
                auto it=q.front();
                q.pop();
                for(auto itr:adj[it]){
                    if(x[itr]==1e8){
                        x[itr]=x[it]+1;
                        q.push(itr);
                    }
                }
            }
        }
          q.push(node2);
        
       y[node2]=0;
        while(!q.empty()){
    
            int sq=q.size();
            for(int i=0;i<q.size();i++){
                auto it=q.front();
                q.pop();
                for(auto itr:adj[it]){
                    if(y[itr]==1e8){
                        y[itr]=y[it]+1;
                        q.push(itr);
                    }
                }
            }
        }
        int shubham=INT_MAX;
        int nehal=-1;
        for(int i=0;i<n;i++){
            if(x[i]!=1e8&&y[i]!=1e8){
int p=max(x[i],y[i]);
                if(shubham>p){
                    shubham=p;
                    nehal=i;
                }
            }
        }
        return nehal;
 } 
};