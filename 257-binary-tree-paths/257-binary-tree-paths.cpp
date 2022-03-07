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
    void solve(TreeNode* root, vector<string>&ans, string path){
        
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(path + to_string(root->val));
        }
        
        solve(root->left, ans, path + to_string(root->val) + "->");
        solve(root->right, ans, path + to_string(root->val) + "->");
        
        //path.pop_back();
        
    }
               
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>ans;
        string path = "";
        
        solve(root,ans,path);
        
        return ans;
        
    }
};