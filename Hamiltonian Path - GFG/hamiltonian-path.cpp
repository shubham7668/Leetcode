//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    bool dfs(vector<bool>&visited,unordered_map<int,
    list<int>>&adj,int index,int N,int i){

         if(index==N) return true;
         visited[i]=true;
         
        for(auto y:adj[i]){
             if(visited[y]!=true && dfs(visited,adj,index+1,N,y))
             return true;
        }
        visited[i]=false;
        return false;

    }

    bool check(int N,int M,vector<vector<int>> Edges){

        unordered_map<int,list<int>>adj;
        
        for(auto x:Edges){
            adj[x[0]-1].push_back(x[1]-1);
            adj[x[1]-1].push_back(x[0]-1);
        }
        vector<bool>visited(N,false);
        for(int i=0;i<N;i++){
            if(dfs(visited,adj,1,N,i)){
                return true;
                }
            }
            return false; 
        }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends