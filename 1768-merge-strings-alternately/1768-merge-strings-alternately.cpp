class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //abc
        //pqr
        int n=word1.size(),m=word2.size();
        string ans="";
        int i=0,j=0,k=0;
        while(i<n && j<m){
            if(k%2==0){
                ans+=word1[i++];
                k++;
            }
            else{
                ans+=word2[j++];
                k++;
            }
        }
        while(i<word1.size()) ans+=word1[i++];
        while(j<word2.size()) ans+=word2[j++];
        
        return ans;
    }
};