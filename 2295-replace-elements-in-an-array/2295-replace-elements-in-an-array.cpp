class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        
        int n=nums.size();
        int m=o.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<m;i++){

            int idx=mp[o[i][0]];
            nums[idx]=o[i][1];
            mp[o[i][1]]=idx;

        }
      
        return nums;
            
    }
};