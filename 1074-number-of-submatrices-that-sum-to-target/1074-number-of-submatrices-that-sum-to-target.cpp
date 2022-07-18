class Solution {
public:
      int numSubmatrixSumTarget(vector<vector<int>>& A, int target) {
        int res = 0, m = A.size(), n = A[0].size();
        for (int i = 0; i < m; i++)
            for (int j = 1; j < n; j++)
                A[i][j] += A[i][j - 1];

        unordered_map<int, int> counter;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                counter = {{0,1}};
                int curr = 0;
                for (int k = 0; k < m; k++) {
                    curr += A[k][j] - (i > 0 ? A[k][i - 1] : 0);
                    res += counter.find(curr - target) != counter.end() ? counter[curr - target] : 0;
                    counter[curr]++;
                }
            }
        }
        return res;
    }

};