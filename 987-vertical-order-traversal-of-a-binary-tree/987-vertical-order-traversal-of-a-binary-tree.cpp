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
    void solve(TreeNode* root,  map<int, map<int, multiset<int>>>&mp, int dir, int level){
        
        if(root==NULL)
            return;
        
        mp[dir][level].insert(root->val);
        solve(root->left, mp, dir-1, level+1);
        solve(root->right, mp, dir+1, level+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int, map<int,multiset<int>>>mp;
        vector<vector<int>>ans;
        
        solve(root,mp,0,0);
       
        for (auto p : mp) {
            vector<int> col;
            for (auto q : p.second) {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
        
    }
};