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
private:
    int height(TreeNode* root){
        if(root == nullptr) return 0;
        
        int left=height(root->left);
        int right=height(root->right);
        
        int ans= max(left,right)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        //Brute Force
        if(root == NULL) return 0;
        
        int leftSubTree = diameterOfBinaryTree(root->left);
        int rightSubTree = diameterOfBinaryTree(root->right);
        int combo = height(root->left) + height(root->right);
        
        int ans = max(leftSubTree, max(rightSubTree,combo));
        
        return ans;
    }
};