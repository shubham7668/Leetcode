class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int rows=matrix.size(), cols=matrix[0].size();
        vector <int> dum1(rows,-1), dum2(cols,-1);
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    dum1[i]=0;
                    dum2[j]=0;
                }
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dum1[i]==0 || dum2[j]==0) matrix[i][j]=0;
            }
       }
   }
};