class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector < int > v(256, -1);
        int left = 0, right = 0;
        int n = s.size();
        int len = 0;
        while (right < n){
            if (v[s[right]] != -1)
                left = max(v[s[right]] + 1, left);
           
            v[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }
        return len;
    }
};