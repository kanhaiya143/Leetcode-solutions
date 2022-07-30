class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]%2;
        }
        int sum=0;
        int count=0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(sum==k)
                count++;
            
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            
            mp[sum]++;
            
        }
        
        return count;
    }
};