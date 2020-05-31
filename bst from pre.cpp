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
/*
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
    }
};*/
TreeNode* insert(TreeNode* root,int val){
    TreeNode* nw = new TreeNode();
    nw->right=NULL;
    nw->left=NULL;
    nw->val=val;
    if(root == NULL){
        root = nw;
        return root;
    }
    if(root->val > val){
        root->left = insert(root->left,val);
    }else if(root->val <= val){
        root->right = insert(root->right,val);
    }
    return root;
}
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        int size = preorder.size();
        for(int i=0;i<size;i++){
          root = insert(root,preorder[i]);
        }
        return root;
    }
};