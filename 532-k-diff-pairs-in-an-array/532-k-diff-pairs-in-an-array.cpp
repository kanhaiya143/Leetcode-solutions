class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans=0;
        if(k==0){
            for(auto it:mp){
            
                if(it.second>1)
                    ans++;
            }
            return ans;
        }
        for(auto it:mp){
            
            if(mp.find(k+it.first)!=mp.end()){
                 ans++;
             }
            
        }
        
        return ans;
    }
};