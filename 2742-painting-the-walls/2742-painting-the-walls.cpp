class Solution {
public:
    vector<vector<int>> memo;  // A memoization table to store computed values
    int n;  // Number of walls
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        n = cost.size();
        memo = vector(n, vector(n + 1, -1));  // Initialize the memo table with -1
        return dp(0, n, cost, time);  // Start the dynamic programming process
    }
    
    int dp(int i, int remain, vector<int>& cost, vector<int>& time) { 
        if (remain <= 0) {  // Base case: No walls left to paint
            return 0;
        }
        
        if (i == n) {  // Base case: No more walls to consider
            return 1e9;  // Return a large value indicating infeasibility
        }
        
        if (memo[i][remain] != -1) {  // If the value is already computed, return it
            return memo[i][remain];
        }
        
        // Try painting the current wall and compute the cost
        int paint = cost[i] + dp(i + 1, remain - 1 - time[i], cost, time);
        
        // Try not painting the current wall
        int dontPaint = dp(i + 1, remain, cost, time);
        
        // Store the minimum cost between painting and not painting the current wall
        memo[i][remain] = min(paint, dontPaint);
        
        return memo[i][remain];  // Return the minimum cost for this state
    }
};
