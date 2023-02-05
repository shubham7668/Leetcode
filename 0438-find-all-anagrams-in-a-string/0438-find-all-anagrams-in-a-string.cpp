class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n=s.size(),window=p.size();
        vector<int> shash(26,0);
        vector<int> phash(26,0);
        vector<int> ans;
        
        if(window>n) return ans;
        
        int l=0,r=0;
        
        while(r<window){
            phash[p[r]-'a']++;
            shash[s[r++]-'a']++;
        }
        r--;
        while(r<n){
            if(phash==shash) ans.push_back(l);
            r++;
            if(r!=n){
                shash[s[r]-'a']++;
                shash[s[l]-'a']--;
            }
            l++;
        }
        
        return ans;
    }
};