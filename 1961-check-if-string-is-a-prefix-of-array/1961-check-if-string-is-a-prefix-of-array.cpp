class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string str="";
        for(int i=0;i<words.size();i++){
            str+=words[i];
            if(str==s) return 1;
         }
        return 0;
    }
};