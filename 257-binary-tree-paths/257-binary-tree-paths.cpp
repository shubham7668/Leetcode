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
    void recursion(TreeNode* root,string temp,vector<string> &ans){
        
        if(!root) return;
        
        if(root->left==NULL && root->right==NULL){
            temp+=to_string(root->val); 
            ans.push_back(temp);
        }
        
        temp+=(to_string(root->val)+"->");
        
        recursion(root->left,temp,ans);
        recursion(root->right,temp,ans);
    }
   
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp="";
       
        recursion(root,temp,ans);
        
        return ans;
        
    }
};