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
    int findBottomLeftValue(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int size;
        TreeNode* temp;
        int ans=0;
        int flag=0;
        
        while(!q.empty()){
            
            size=q.size();
            
            while(size--){
                
                temp=q.front();
                q.pop();
                if(flag==0){
                    ans=temp->val;
                    flag=1;
                }
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                
            }
            flag=0;
        }
        return ans;
    }
};