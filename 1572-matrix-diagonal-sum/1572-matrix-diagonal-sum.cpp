class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //1,2,3,10    0,0 0,1 0,2 0,3
        //4,5,6,11    1,0 1,1 1,2 1,3   [i][n-1-i]
        //7,8,9,12    2,0 2,1 2,2 2,3
        //0,0,0,13    3,0 3,1 3,2 3,3
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){           
            for(int j=0;j<n;j++){
                if(i==j || j==(n-1-i)) sum+=mat[i][j];
            }
        }
        return sum;
    }
};