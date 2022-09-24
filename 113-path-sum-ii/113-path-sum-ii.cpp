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
    vector<vector<int>> ans;
    vector<int> temp;
    
    void dfs(TreeNode* root,int currSum ,int targetSum){
        if(!root) return;
        
        currSum+=root->val;
        temp.push_back(root->val);
        
        if(!root->left && !root->right && currSum==targetSum) ans.push_back(temp);
        
        dfs(root->left,currSum,targetSum);
        dfs(root->right,currSum,targetSum); 
        
        temp.pop_back();
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,0,targetSum);
        return ans;
    }
};