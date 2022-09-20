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
    void bfs(TreeNode* root,vector<int> &v){
        if(root==nullptr) return;
        
        bfs(root->left,v);
        v.push_back(root->val);
        bfs(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        bfs(root,v);
        
        return v[k-1];
    }
};