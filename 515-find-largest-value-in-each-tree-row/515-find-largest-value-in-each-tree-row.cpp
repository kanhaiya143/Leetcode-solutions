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
    int max(long x, long y){
        if(x<y)
            return y;
        return x;
    }
    vector<int> largestValues(TreeNode* root) {
        
        if(root==NULL)
            return {};
        
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* temp;
        int size;
        int maxi=INT_MIN;
        while(!q.empty()){
            
            size = q.size();
            
            while(size>0){
                temp=q.front();   
                q.pop();
                maxi=max(maxi,(int)temp->val);
                //cout<<temp->val<<endl;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                size--;
            }
            ans.push_back(maxi);
            maxi=INT_MIN;
        }
        return ans;
        
    }
};