class Solution {
public:
    vector<int> answerQueries(vector<int>& a, vector<int>& q) {
        sort(a.begin(), a.end());
        for(int i=1; i<a.size(); i++) a[i] += a[i-1];
        
        vector<int> ans;
        for(int i: q){
            int sum=0;
            int j;
            for(j=0; j<a.size();j++){
                if(sum+a[j]>i) break;
            }
            ans.push_back(j);
        }
        return ans;
    }
};