class Solution {
public:
    string removeStars(string s) {
        multiset<int> star, nos;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '*') star.insert(i);
            else nos.insert(i);
        }
        for(int i: star){
            auto it = --(nos.lower_bound(i));
            nos.erase(it);
        }
        string nehal;
        for(int i: nos) nehal += s[i];
        return nehal;
    }
};