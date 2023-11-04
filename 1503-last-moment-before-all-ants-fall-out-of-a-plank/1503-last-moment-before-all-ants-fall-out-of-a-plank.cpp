class Solution {
public:
    
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lastFallTime = 0;
        
        for (int leftPosition : left) {
            lastFallTime = max(lastFallTime, leftPosition);
        }
        
        
        for (int rightPosition : right) {
            lastFallTime = max(lastFallTime, n - rightPosition);
        }
        
        return lastFallTime;
    }
};