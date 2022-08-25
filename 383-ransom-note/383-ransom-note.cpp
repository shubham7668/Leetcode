class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int j=0;
        for(int i=0;i<magazine.size();i++){
            if(magazine[i]==ransomNote[j]) j++;
            if(j==ransomNote.size()) return 1;
         }
        return 0;
    }
};