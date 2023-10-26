class Solution {
public:
    #define mod 1000000007
    #define ll long long
    
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        ll ans=0;
        unordered_map<ll,ll> mp;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
            ll currAns=1;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]) continue;
                
                ll num1=arr[j];
                ll num2=arr[i]/arr[j];
                
                currAns = (currAns+(mp[num1]*mp[num2])%mod)%mod;
            }
            mp[arr[i]]=currAns;
            ans=(ans+currAns)%mod;
        }
        
        return int(ans);
    }
};