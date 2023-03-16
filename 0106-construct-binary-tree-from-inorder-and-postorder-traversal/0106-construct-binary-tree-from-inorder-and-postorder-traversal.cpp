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
     TreeNode* fun(vector<int> in, vector<int> post ,int &index,
                  int inStart,int inEnd,int size,map<int,int> &mpp){
        
        //Base case
        if(index<0|| inStart>inEnd) return NULL;
        
        int element = post[index--];
        TreeNode* root = new TreeNode(element);
        
        //Finding postion in inorder array
        // int pos=-1;
        // for(int i=0;i<size;i++){
        //     if(in[i] == element) pos=i;
        // }
        
        int pos=mpp[element];
        
        //Recursive Calls
        root->right = fun(in,post,index,pos+1,inEnd,size,mpp);
        root->left = fun(in,post,index,inStart,pos-1,size,mpp);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n=in.size();
        //Create Mapping
        map<int,int> valToInd;
        for(int i=0;i<n;i++){
            valToInd[in[i]]=i;
        }
        int postIndex=n-1;
        TreeNode* ans=fun(in,post,postIndex,0,n-1,n,valToInd);
        
        return ans;
    }
};