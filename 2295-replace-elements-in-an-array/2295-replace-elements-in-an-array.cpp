class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        
        vector<int>ans;
        int n=nums.size();
        int m=o.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<m;i++){
            if(mp.find(o[i][0])!=mp.end()){
                int idx=mp[o[i][0]];
                mp.erase(o[i][0]);
                mp[o[i][1]]=idx;
            }
        }
        map<int,int>mpp;
        for(auto it:mp){
            mpp[it.second]=it.first;
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
            
    }
};