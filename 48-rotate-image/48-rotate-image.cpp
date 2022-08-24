class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        //Transpose a matrix then swap columns
        
        int rows=mat.size(),cols=mat[0].size();
        
        for(int i=0;i<rows;i++){
            for(int j=i;j<cols;j++)
                swap(mat[i][j],mat[j][i]); //Transpose
         }
        
        
        for(int i=0;i<rows;i++){
            int k=0,l=cols-1;
            while(k<=l){
                swap(mat[i][k],mat[i][l]);
                k++;
                l--;
            }
        }
    }
};