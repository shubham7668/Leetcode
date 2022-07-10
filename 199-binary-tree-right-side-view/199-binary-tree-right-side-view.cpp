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
class Solution {
public:
    void recursion(TreeNode* root, int level, vector<int> &ans){
        //Base Case
        if(root==nullptr) return;
        
        //If size==level then push it to ds
        if(ans.size()==level) ans.push_back(root->val);
        
        //Recursion
        recursion(root->right,level+1,ans);
        recursion(root->left,level+1,ans);
    }
    
    vector<int> rightSideView(TreeNode* root) {
       
        vector<int> ans;
        recursion(root,0,ans);
        
        return ans;
    }
};