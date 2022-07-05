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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        bool leftToRight=1;
        //Base case
        if(root == nullptr) return ans;
        
        while(!q.empty()){
            int n=q.size();
            vector<int> temp(n);
            
            for(int i=0;i<n;i++){
                TreeNode* curr=q.front();
                q.pop();
                
                //Find position to fill curr node's value
                int index = leftToRight ? i : (n-1-i);
                
                temp[index]=curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            leftToRight=!leftToRight;
            ans.push_back(temp);
        }
        return ans;
    }
};