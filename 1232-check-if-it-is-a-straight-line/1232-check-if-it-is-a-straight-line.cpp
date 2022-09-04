class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& mat) {
        
        // int diff1=mat[1][0]-mat[0][0];
        // int diff2=mat[1][1]-mat[0][1];
        // for(int i=1;i<mat.size()-1;i++){
        //     if(mat[i+1][0]-mat[i][0] != diff1 || 
        //        mat[i+1][1]-mat[i][1] != diff2) return 0; 
        // }
        //  return 1;
        
        ///Using slope
        int dy,dx,ndy,ndx,i;
        dy=mat[1][1] - mat[0][1];
        dx=mat[1][0] - mat[0][0];
        for(i=2;i<mat.size();i++){
            ndy=mat[i][1] - mat[0][1];  // new dy
            ndx=mat[i][0] - mat[0][0];  // new dx
            if(ndx * dy != ndy * dx) return false;
        }
        return true;
    }
};