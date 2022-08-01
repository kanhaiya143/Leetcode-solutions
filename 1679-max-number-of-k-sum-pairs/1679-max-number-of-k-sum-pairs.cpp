class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        
        int n=nums.size();
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int mini;
        for(auto it:mp){
            if(k-it.first==it.first)
            {
                count+=it.second/2;
            }
            else if(mp.find(k-it.first)!=mp.end()){
                mini=min(it.second,mp[k-it.first]);
                
                count+=mini;
                mp[it.first]-=mini;
                mp[k-it.first]-=mini;

            }
        }
        return count;
        
    }
};