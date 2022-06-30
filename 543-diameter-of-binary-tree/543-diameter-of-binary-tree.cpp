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
    
    
    
    pair<int,int> diameter1(TreeNode* root){
        
        if(root == nullptr ){             //first block=diameter, Second block=height
            pair<int,int> p = make_pair(0,0);
            return p;
        } 
        
        pair<int,int> left = diameter1(root->left);
        pair<int,int> right = diameter1(root->right);
        
        int leftSubTree = left.first; // Left Diameter
        int rightSubTree = right.first; //Right Diamter
        int bothSubTree = left.second + right.second ; //Height
        
        pair<int,int> ans;
        ans.first = max(leftSubTree, max(rightSubTree, bothSubTree));
        ans.second = max(left.second, right.second)+1;
    
        return ans; 
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        //Brute Force
//         if(root == NULL) return 0;
        
//         int leftSubTree = diameterOfBinaryTree(root->left);
//         int rightSubTree = diameterOfBinaryTree(root->right);
//         int bothSubTree = height(root->left) + height(root->right);
        
//         int ans = max(leftSubTree, max(rightSubTree,bothSubTree));
        
//         return ans;
        
        //Optimised using pair
        return diameter1(root).first;
        
        
    }
};