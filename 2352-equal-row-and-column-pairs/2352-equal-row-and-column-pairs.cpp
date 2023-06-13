class Solution {
public:
    int equalPairs(vector<vector<int>>& shubham) {
        int n=shubham.size();
        map<vector<int>,int>mpp1,mpp2;
        
        for(int i=0;i<n;i++){
            vector<int>vec;
            for(int j=0;j<n;j++){
                vec.push_back(shubham[i][j]);
            }
            mpp1[vec]++;
        }
        
         for(int j=0;j<n;j++){
            vector<int> v;
            for(int i=0;i<n;i++){
                v.push_back(shubham[i][j]);
            }
            mpp2[v]++;
        }
        int ans=0;
        
        for(auto i:mpp1){
            ans+=mpp1[i.first]*mpp2[i.first];
        }
        return ans;
    }
};