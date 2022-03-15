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
    int solve(TreeNode* root, int &maxi){
        
        if(root==NULL)
            return 0;
 
        //if(root->left==NULL && root->right==NULL)
         //   return 0;
        
        int l=solve(root->left,maxi);
        int r=solve(root->right,maxi);
        
        if(root->left!=NULL && root->left->val!=root->val){
            l=0;
        }
        if(root->right!=NULL && root->right->val!=root->val){
            r=0;
        }
        maxi=max(maxi,l+r);
        
        return max(l,r)+1;
        
        
        
    }
    int longestUnivaluePath(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        
        int maxi=0;
        
        solve(root, maxi);
        
        return maxi;
        
    }
};