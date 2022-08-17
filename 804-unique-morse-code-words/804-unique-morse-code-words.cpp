class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
//         string a=".-",b="-...",c="-.-.",d="-..",e=".",
//         f="..-.",g="--.",h="....",i="..",j=".---",
//         k="-.-",l=".-..",m="--",n="-.",o="---",
//         p=".--.",q="--.-",r=".-.",s="...",
//         t="-",u="..-",v="...-",w=".--",
//         x="-..-",y="-.--",z="--.." ;
        
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