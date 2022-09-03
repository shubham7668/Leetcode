class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
         if(s1==s2) return 1;
        for(int i=0;i<s2.size()-1;i++){
            for(int j=i+1;j<s2.size();j++){
                swap(s2[i],s2[j]);
                if(s1==s2) return 1;
                swap(s2[i],s2[j]);
            }
        }
        return 0;
        
        //Optimised -> Wrong (because of multiple swaps)
        // vector<int> v1(26),v2(26);
        // for(int i=0;i<s1.size();i++){
        //     v1[s1[i]-'a']++;
        //     v2[s2[i]-'a']++;
        // }
        // if(v1==v2) return 1;
        // else return 0;
        
    }
};