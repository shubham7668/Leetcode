class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        
       vector<string> str{".-","-...","-.-.","-..",".","..-.","--.",
                    "....","..",".---","-.-",".-..","--","-.",
                    "---",".--.","--.-",".-.","...","-","..-",
                    "...-",".--","-..-","-.--","--.."};
        
        set<string> res;
        for (auto word : words) {
            string curr = "";
            for (auto ch : word)
                curr += str[ch-97];
            res.insert(curr);
        }
        return res.size();
    }
};