class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        }
        vector<vector<int>>ans(n+1);
        
        for(auto it:mp){
            ans[it.second].push_back(it.first);
        }
        
        reverse(ans.begin(),ans.end());
        vector<int>res;
        
        for(int i=0;i<ans.size();i++){
            
            for(int j=0;j<ans[i].size();j++){
                
                res.push_back(ans[i][j]);
                
                if(res.size()==k)
                    return res;
            }
        }
        return res;
        
    }
};