class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);
        
        for(int i=0;i<s.length();i++){
            v[s[i]-'a']++;
        }
        
        sort(v.begin(),v.end(),greater<int>());  //Sort in decreasing order
        
        int freq=v[0];       //Maximum allowed frequency
        int ans=0;
        
        for(int i=0;i<v.size();i++){
            if(v[i]>freq)
            {
                if(freq>0) ans+=(v[i]-freq);
                else
                    ans+=v[i];
            }
            freq=min(freq-1,v[i]-1);
        }
        return ans;
    }
};