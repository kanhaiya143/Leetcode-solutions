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
    int length(TreeNode* root){
        
        if(root==NULL)
            return 0;
        
        return max(length(root->left), length(root->right))+1;
    }
    void traverse(TreeNode* root, int& ans){
        if(root==NULL)
            return;
        
        ans=max(ans,length(root->left)+length(root->right)+1);
        
        traverse(root->left,ans);
        traverse(root->right,ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int ans=0;
        
        traverse(root,ans);
        return ans-1;
    }
};