/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

TreeNode* makeBST(vector<int>& nums,int start,int end)
{
    if(start>end) return NULL;
    if(start==end){
        TreeNode* ans = new TreeNode(nums[start]);
        return ans;
    }
    
    int mid=start+(end-start)/2;
    int data = nums[mid];
    
    TreeNode* left = makeBST(nums,start,mid-1);
    TreeNode* right = makeBST(nums,mid+1,end);
    
    TreeNode* ans=new TreeNode(data,left,right);
    return ans;
}
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeBST(nums,0,nums.size()-1);
    }
};