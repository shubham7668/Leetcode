class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int n=s.size();
        int i=n-1;
        while(i>=0){
            if(s[i]!=' ') ans++;
            if(ans>0 && s[i]==' ') break;
            i--;
        }
        return ans;
    }
};