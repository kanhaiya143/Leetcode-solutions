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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        if(root==NULL)
            return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int curQsize;
        TreeNode* tmp;
        vector<int>temp;
        
        while(!q.empty()){
            curQsize=q.size();
            
            while(curQsize>0){
                tmp=q.front();
                q.pop();
                
                temp.push_back(tmp->val);
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                curQsize--;
                
            }
            ans.push_back(temp);
            temp.clear();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};