class Solution {
public:
    int strStr(string h, string n) {
        size_t pos = h.find(n);
        if (pos != string::npos) {
            return pos;
        } else {
            return -1;
        }
    }
};
