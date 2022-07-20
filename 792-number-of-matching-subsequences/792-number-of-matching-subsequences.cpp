class Solution {
public:
    //BRUTE FORCE -> O(N^2)
//     bool isSubsequence(string s,string temp){
//         int i=0,j=0;
//         while(i<s.size()){
//             if(temp[j]==s[i]) j++;
//             i++;
//         }
//         if(j==temp.size()) return true;
//         else return false;
//     }
    
//     int numMatchingSubseq(string s, vector<string>& words) {
//         bool flag=0;
//         int cnt=0;
        
//         for(int i=0;i<words.size();i++){
//             string temp=words[i];
//             flag=isSubsequence(s,temp);
            
//             if(flag) cnt++;
//         }
//         return cnt;
    
    //OPTIMISED
    

    bool hasMatches(string &curr, string &s) {
        int pos = 1;
        int i = s.find(curr[0]);
        if (i == -1)
            return false;
        while (pos < curr.length()) {
            i = s.find(curr[pos], i + 1);
            if (i == -1)
                return false;
            pos++;
        }
        return true;
    }
    
     int numMatchingSubseq(string s, vector<string>& words) {
        int count = 0;
        for (string str : words)
            if (hasMatches(str, s))
                count++;
        
        return count;
    }
};