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
        if(root==NULL) return 0;
        
        int left=height(root->left);
        int right=height(root->right);
        
        
        return max(left,right)+1;
    }
    
    pair<bool,int> bal(TreeNode* root){
        if(root==NULL){
            pair<bool,int> p(true,0);
            return p;
        }
        
        pair<int,int> left=bal(root->left);
        pair<int,int> right=bal(root->right);
        
        bool leftAns=left.first;
        bool rightAns=right.first;
        
        int diff= abs(left.second-right.second); // <=1
        
        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1; //height store in 2nd block
        
        if(leftAns && rightAns && diff<=1){
            ans.first=true;
        }
        else
            ans.first=false;
        
        return ans;
    }
public:
    bool isBalanced(TreeNode* root) {
//         if(root==nullptr) return true;
        
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
        
//         int diff = abs (height(root->left)-height(root->right)) ;
        
//         if(left && right && diff<=1) return true;
//         else
//             return false;
        
        return bal(root).first;
        
    }
};