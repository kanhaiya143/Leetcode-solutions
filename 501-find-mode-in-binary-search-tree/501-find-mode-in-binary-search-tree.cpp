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
    static bool comp(pair<int,int>&a, pair<int,int>&b){
        
        return a.second>b.second;
    }
    
    void solve(TreeNode* root, unordered_map<int,int>&mp){
        
        if(root==NULL)
            return;
        
        mp[root->val]++;
        
        solve(root->left,mp);
        solve(root->right,mp);
        
    }
    
    vector<int> findMode(TreeNode* root) {
        
        if(root==NULL)
            return {};
        
        unordered_map<int,int>mp;
        int maxiCnt=0;
        vector<int>ans;
        
        solve(root,mp);
        
        vector<pair<int,int>>temp;

        for(auto it:mp){
            temp.push_back({it.first, it.second});
        }
        
        sort(temp.begin(),temp.end(), comp);
        
        
        ans.push_back(temp[0].first);
        
        for(int i=1;i<temp.size();i++){
            //cout<<temp[i].first<<" "<<temp[i].second<<endl;
            
            if(temp[i].second==temp[i-1].second){
                ans.push_back(temp[i].first);
            }
            else{
                //ans.push_back(temp[i].first);
                break;
            }
        }
        
        return ans;
    }
};