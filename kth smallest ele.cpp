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
    void inorder(TreeNode* root,vector<int> &num,int k)
    {
        if(!root)
            return;
        inorder(root->left,num,k);
        if(++num[0]==k)
        {
            num[1]=root->val;
            return;
        }
        inorder(root->right,num,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector <int> num(2,0);
        inorder(root,num,k);
        return num[1];
    }
};