class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> hash(26,0);
        
        for(int i=0;i<sentence.size();i++)
            hash[sentence[i]-'a']++;
        
        for(auto i: hash)
            if(i==0) return 0;
        
        return 1;
    }
};