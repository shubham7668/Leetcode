class Solution {
public:
    char findTheDifference(string s, string t) {
        
        //Brute
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<t.size();i++){
        //     if(t[i]!=s[i]) return t[i];
        // }
        // return '-1';
        
        //Optimised
        vector<int> v(26,0);
        
        for(int i=0;i<s.size();i++) v[s[i]-'a']++;
        
        for(int i=0;i<t.size();i++){
            if(v[t[i]-'a']==0) return t[i];
            
            else v[t[i]-'a']--;
            
        }
        return '1';
    }
};