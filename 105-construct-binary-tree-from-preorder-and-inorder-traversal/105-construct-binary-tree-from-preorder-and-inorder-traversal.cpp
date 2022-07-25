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
    TreeNode* fun(vector<int> pre, vector<int> in ,int &index,
                  int inStart,int inEnd,int size){
        
        //Base case
        if(index>=size || inStart>inEnd) return NULL;
        
        int element = pre[index++];
        TreeNode* root = new TreeNode(element);
        
        //Finding postion in inorder array
        int pos=-1;
        for(int i=0;i<size;i++){
            if(in[i] == element) pos=i;
        }
        
        //Recursive Calls
        root->left = fun(pre,in,index,inStart,pos-1,size);
        root->right = fun(pre,in,index,pos+1,inEnd,size);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int preIndex=0;
        int n=pre.size();
        
        TreeNode* ans=fun(pre,in,preIndex,0,n-1,n);
        
        return ans;
    }
};