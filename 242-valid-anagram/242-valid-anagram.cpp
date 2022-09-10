class Solution {
public:
    bool isAnagram(string s, string t) {
        //Brute Force
         if(s.size()!=t.size()) return false;
//         map<char,int> mpp1,mpp2;
//         for(int i=0;i<s.size();i++) mpp1[s[i]]++;
        
//         for(int i=0;i<t.size();i++) mpp2[t[i]]++;
        
//         if(mpp1==mpp2) return true;
//         else return false;
        
        //Brute without space
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) return 0;
        }
        return 1;
      }
};