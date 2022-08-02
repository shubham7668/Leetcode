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
    
    int minimum(TreeNode* root){
        
        while(root->left){
            root=root->left;
        }
        return root->val;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        
        if(root->val==key){
            //0 child
            if(root->left==NULL && root->right==NULL){
                delete(root);
                return NULL;
            }
            //1 child
            
            //i>Left child
            if(root->left && root->right==NULL){
                TreeNode* temp = root->left;
                delete(root);
                return temp;
            }
            //ii>Right child
            if(root->left==NULL && root->right){
                TreeNode* temp = root->right;
                delete(root);
                return temp;
            }
            
            //2 child
            if(root->left && root->right){
                int mini = minimum(root->right); //Minimum value from right subtree
                root->val=mini;                  //Copy mini in curr node
                root->right = deleteNode(root->right,mini);
                return root;
            }
        }
        
        if(root->val>key)
            root->left=deleteNode(root->left,key);
        else
            root->right=deleteNode(root->right,key);
        
        return root;
    }

};