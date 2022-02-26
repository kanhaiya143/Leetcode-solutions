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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root==NULL)
            return {};
        vector<vector<int>>ans;
        vector<int>temp;
        
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* tmp;
        int curQsize;
        
        while(!q.empty()){
            curQsize=q.size();
            
            while(curQsize>0){
                tmp=q.front();
                temp.push_back(tmp->val);
                q.pop();
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                curQsize--;
            }
            ans.push_back(temp);
            temp.clear();
            
        }
        return ans;
    }
};