class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        if(words.size() == 1) return true;
        int order_map[26];
        int ind = 0;
        for(auto ch : order) order_map[ch-97] = ind++;
        
        int str1_size = 0, str2_size = 0;
        int lexi_rule_followed = true;
        int limit_internal = 0;
    
        int compare1 = 0, compare2 = 0;
        for(int i = 0; i < words.size()-1; i++){
            str1_size = words[i].size();
            str2_size = words[i+1].size();
            limit_internal = str1_size <= str2_size ? str1_size : str2_size;
            for(int j = 0; j < limit_internal; j++){
                compare1 = order_map[words[i][j]-97];
                compare2 = order_map[words[i+1][j]-97];
                if(compare1 < compare2){
                    lexi_rule_followed = true;
                    break;
                }
                else if(compare1 > compare2) return false;
            }
            if(compare1 == compare2){
                if(str1_size > str2_size) return false;
             }
        }
        return lexi_rule_followed;
    }
};