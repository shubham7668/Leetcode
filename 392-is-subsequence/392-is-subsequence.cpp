class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        
        while(i<t.size()){
            char c=s[j];
            if(c==t[i]) j++;
            i++;
        }
        cout<<j;
        if(j==s.size()) return true;
        else
            return false;
    }
};