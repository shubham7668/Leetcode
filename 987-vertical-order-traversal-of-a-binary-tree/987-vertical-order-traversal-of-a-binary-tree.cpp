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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,map<int,multiset<int>>> nodes;
        
        queue<pair<TreeNode*,pair<int,int>>> q; //Node, verticalLvl, HorizontalLvl
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            auto curr=q.front();  //node,(vl,hl)
            q.pop();
            
            TreeNode* temp=curr.first;
            int vl=curr.second.first;  //Vertival Level
            int hl=curr.second.second; // Horizontal Level
            
            nodes[vl][hl].insert(temp->val); //Update Data Structure
            
            if(temp->left) q.push({temp->left,{vl-1,hl+1}});
            if(temp->right) q.push({temp->right,{vl+1,hl+1}});
        }
        vector<vector<int>> ans;
        for(auto i:nodes){
            vector<int> col;
            for(auto j:i.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};