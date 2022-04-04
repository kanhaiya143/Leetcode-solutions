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
    int prev=INT_MAX;
    void solve(TreeNode* root, int& mini){
        
        if(root==NULL)
            return;
        
        solve(root->left, mini);
        
        mini = min(mini, abs(root->val - prev));
        prev = root->val;
        
        solve(root->right, mini);
        
    }
    int getMinimumDifference(TreeNode* root) {
        int mini=INT_MAX;
        
        
        if(root==NULL)
            return 0;
        
        solve(root, mini);
        
        return mini;
        
    }
};