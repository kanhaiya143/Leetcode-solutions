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
    void solve(TreeNode* root, int left, int right, int &ans){
        if(root==NULL)
            return;
        
        ans=max(ans, left);
        ans=max(ans, right);
        
        solve(root->left, 0, left+1, ans);
        solve(root->right, right+1, 0, ans);
    }
    int longestZigZag(TreeNode* root) {
        
        int ans=0;
        int left=0, right=0;
        
        solve(root, left, right, ans);
        return ans;
    }
};