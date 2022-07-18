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
    void solve(TreeNode* root, vector<int> v,int targetSum,int &ans){
        //Base Case
        if(root==NULL) return;
        
        v.push_back(root->val);
        
        solve(root->left,v,targetSum,ans);
        solve(root->right,v,targetSum,ans);
        
        long int sum=0,n=v.size();
        for(int i=n-1;i>=0;i--){
            sum+=v[i];
            
            if(sum==targetSum) ans++;
        }
        
        v.pop_back();

    }
    
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        int ans=0;
        solve(root,v,targetSum,ans);
        
        return ans; 
    }
};