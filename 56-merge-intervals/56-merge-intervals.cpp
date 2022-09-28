class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        
        vector<vector<int>> ans;
        ans.push_back(v[0]);
        
        int j=0;
        for(int i=1;i<v.size();i++){
            if(v[i][0]<=ans[j][1]) 
                ans[j][1]=max(ans[j][1],v[i][1]);
            else{
                j++;
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};