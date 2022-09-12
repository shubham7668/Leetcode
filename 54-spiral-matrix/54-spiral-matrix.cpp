class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int left=0,right=n-1,up=0,bottom=m-1;  //Pointers
        int cnt=0,total=m*n;
        vector<int> ans;
        
        while(cnt<total){
            //For 1st row
            for(int i=left;i<=right && cnt<total ;i++){
                ans.push_back(matrix[up][i]);
                cnt++;
            }
            up++;
            
            //For last col
            for(int i=up;i<=bottom && cnt<total ;i++){
                ans.push_back(matrix[i][right]);
                cnt++;
            }
            right--;
            
            //For last sol
            for(int i=right;i>=left && cnt<total ;i--){
                ans.push_back(matrix[bottom][i]);
                cnt++;
            }
            bottom--;
            
            //For 1st col
            for(int i=bottom;i>=up && cnt<total ;i--){
                ans.push_back(matrix[i][left]);
                cnt++;
            }
            left++;
        }
        return ans;
    }
};