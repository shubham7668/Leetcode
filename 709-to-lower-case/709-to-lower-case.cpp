class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(int(s[i])>=65 && int(s[i]<=90)){
                s[i]+=32;
            }
        }
        return s;
    }
};