class Solution {
public:
     vector<int> findOrder(int n, vector<vector<int>>& pr) {
         //this map will store the edges that exist between nodes
        map<int,vector<int>>gr;
        for(int i=0;i<pr.size();i++)
         //for (ai,bi) we will establish a directed edge from ai to bi
          gr[pr[i][1]].push_back(pr[i][0]);
        //this vector will store indegree of every node
        vector<int>indeg(n,0);
        for(auto x:gr)
        {
            //every neighbour of nodes will be incremented as they are being directed
            for(auto nds:x.second)
                indeg[nds]++;
        }
        
        //FROM HERE WE WILL IMPLEMENT TOPOLOGICAL SORT
        
        //this will keep the nodes having indegree as 0
        queue<int>q;
        //add all the 0 indegree nodes to queue
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
                q.push(i);
        }
        //this will store the topological sort 
        vector<int>topo;
        while(!q.empty())
        {
            //get the current node
            int curr=q.front();
            //insert it to our topo vector
            topo.push_back(curr);
            q.pop();
            //traverse it's neighbours
            for(auto x:gr[curr])
            {
                //reduce the indegree of neighbour nodes
                indeg[x]--;
                //if indegree becomes 0 then add it to queue
                if(indeg[x]==0)
                    q.push(x);
            }
        }
        //if we were able to make topological sort then it's size will be equal to total nmbr of nodes and hence we will return it 
        if(topo.size()==n)
            return topo;
        return {};
    }
};