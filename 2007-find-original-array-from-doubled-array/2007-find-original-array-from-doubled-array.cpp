class Solution {
public:
    vector<int> findOriginalArray(vector<int>& arr) {
        //Brute-> O(n^2+nlogn)
        int n=arr.size();
        if(n%2==1) return {};
        
        sort(arr.begin(),arr.end());
        vector<int> ans;
        
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]*2==arr[j]){
//                     if(arr[j]==-1) continue;
//                     ans.push_back(arr[i]);
//                     arr[j]=-1;
//                     break;
//                 }
//             }
//         }
//         if(ans.size()!=n/2) return {};
//         return ans;
        
        map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        // for(auto i : mp) cout<<i.first<<"->"<<i.second<<endl;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==0) continue;
            if(mp[arr[i]*2]==0) return {};
            ans.push_back(arr[i]);
            mp[arr[i]]--;
            mp[arr[i]*2]--;
            
        }
        
        return ans;
    }
};
