class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        int n=routes.size();
        
        // map to store station(key) -> buses(values)
        unordered_map<int,vector<int>> stationBusMap;
        
        // fill the stationBusMap
        for(int i=0;i<n;i++){
            for(auto station:routes[i]){
                stationBusMap[station].push_back(i);
            }
        }
        
        // to track visited bus
        vector<bool> busVisited(n,0);
        // to track visited stations
        set<int> stationVisited;
        // level, we have to traverse all the stations of one bus at one time 
        int level=0;
        
        // queue which will contains the stations
        queue<int> q;
		// start from source
        q.push(source);
        
        while(!q.empty()){
            int size=q.size();
            
			// iteration for all the stations for particular level
            while(size--){
                //current station
                int front=q.front();
                q.pop();
                
                //found target return level
                if(front==target) return level;
                
                // check all the busues for current station
                for(auto bus:stationBusMap[front]){
                    // if bus visited continue
                    if(busVisited[bus]) continue;
                    
                    // else check all the stations of this bus and push them to queue if not visited
                    for(auto station:routes[bus]){
                        if(stationVisited.find(station)==stationVisited.end()){
                            q.push(station);
                            stationVisited.insert(station); // mark station visited
                        }
                    }
                    
                    busVisited[bus]=true; // mark bus visited
                }
            }
            
            level++; // make level up by 1
        }
        
        return -1;
    }
};