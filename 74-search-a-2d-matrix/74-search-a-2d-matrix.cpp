class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Brute force
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target) return 1;
        //     }
        // }
        // return 0;
        
        //Optimised
        int rows=matrix.size();
        int cols=matrix[0].size();
        int i=0,j=cols-1;
        while(i<rows && j>=0){
            if(matrix[i][j]==target) return 1;
            if(matrix[i][j]<target) i++;
            else j--;
        }
        return 0;
    }
};