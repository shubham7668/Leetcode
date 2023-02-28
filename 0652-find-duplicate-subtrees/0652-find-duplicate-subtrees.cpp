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
    string solution(TreeNode*root, vector<TreeNode*>&ans,unordered_map<string,int>&m){
        if(root == NULL) return "";
        string s = solution(root->left,ans,m) + "," + solution(root->right,ans,m) + "," + to_string(root->val);
        m[s]++;
        if(m[s] == 2) 
        ans.push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>ans;
        unordered_map<string,int>m;
        solution(root,ans,m);
        return ans;
        
    }
};