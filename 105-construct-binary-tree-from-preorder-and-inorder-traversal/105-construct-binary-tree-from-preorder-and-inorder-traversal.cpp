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
                  int inStart,int inEnd,int size,map<int,int> &mpp){
        
        //Base case
        if(index>=size || inStart>inEnd) return NULL;
        
        int element = pre[index++];
        TreeNode* root = new TreeNode(element);
        
        //Finding postion in inorder array
        // int pos=-1;
        // for(int i=0;i<size;i++){
        //     if(in[i] == element) pos=i;
        // }
        
        int pos=mpp[element];
        
        //Recursive Calls
        root->left = fun(pre,in,index,inStart,pos-1,size,mpp);
        root->right = fun(pre,in,index,pos+1,inEnd,size,mpp);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        
        int preIndex=0;
        int n=pre.size();
        map<int,int> valToInd;
        for(int i=0;i<n;i++){
            valToInd[in[i]]=i;
        }
        TreeNode* ans=fun(pre,in,preIndex,0,n-1,n,valToInd);
        
        return ans;
    }
};