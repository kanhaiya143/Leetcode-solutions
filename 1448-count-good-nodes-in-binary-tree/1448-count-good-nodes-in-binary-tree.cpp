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
    void goodCount(TreeNode* root, int maxi, int& count){
        
        if(root==NULL)
            return;
        if(root->val>=maxi){
            count++;
            maxi=root->val;
        }
        
        goodCount(root->left,maxi,count);
        goodCount(root->right,maxi,count);
    }
    int goodNodes(TreeNode* root) {
        
        int maxi=INT_MIN;
        int count=0;
        
        goodCount(root,maxi,count);
        return count;
    }
};