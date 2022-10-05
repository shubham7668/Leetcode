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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode* newNode1 = new TreeNode(val);            
        TreeNode* newNode2 = new TreeNode(val); 
        
        if(root == NULL){
            return NULL;
        }else if(depth == 1){
            newNode1-> left = root;
            return newNode1;
        }else if(depth <= 2 && root-> left == NULL && root-> right == NULL){
            root-> left = newNode1;
            root-> right = newNode2;
            return root;
        }else if(depth <= 2 && root-> left == NULL && root-> right != NULL){
            TreeNode* right = root-> right;
            root-> left = newNode1;
            root-> right = newNode2;
            newNode2-> right = right;
            return root;
        }else if(depth <= 2 && root-> left != NULL && root-> right == NULL){
            TreeNode* left = root-> left;
            root-> left = newNode1;
            root-> right = newNode2;
            newNode1-> left = left;
            return root;
        }else if(depth <= 2 && root-> left != NULL && root-> right != NULL){
            TreeNode* left = root-> left;
            TreeNode* right = root-> right;
            root-> left = newNode1;
            root-> right = newNode2;
            newNode1-> left = left;
            newNode2-> right = right;
            return root;
        }
        
        TreeNode* left = addOneRow(root-> left, val, depth-1);
        TreeNode* right = addOneRow(root-> right, val, depth-1);
        
        return root;
    }
};