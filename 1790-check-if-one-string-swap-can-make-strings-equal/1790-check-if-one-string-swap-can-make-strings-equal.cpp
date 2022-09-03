class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2) return 1;
       //Pure brute force -> O(N^2)
       for(int i=0;i<s2.size()-1;i++){
           for(int j=i+1;j<s2.size();j++){
               swap(s2[i],s2[j]);
               if(s1==s2) return 1;
               swap(s2[i],s2[j]);
           }
       }
        return 0;
        
        
    }
};