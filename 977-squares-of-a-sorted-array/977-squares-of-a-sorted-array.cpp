class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Brute force
        int n=nums.size();
//         for(int i=0;i<nums.size();i++){
//             nums[i]=nums[i]*nums[i];
//         }
//         sort(nums.begin(),nums.end());
        
//         return nums;
        
        //optimised approach -> in one pass
        int s=0,e=n-1;
        vector<int> ans(n);
        int pos=n-1; //Pointer in ans vector
        
        while(s<=e){
            if(abs(nums[s])<abs(nums[e])){
                ans[pos]=(nums[e]*nums[e]);
                pos--;
                e--;
            }
            else{
                ans[pos]=(nums[s]*nums[s]);
                pos--;
                s++;
            }
        }
        return ans;
    }
};