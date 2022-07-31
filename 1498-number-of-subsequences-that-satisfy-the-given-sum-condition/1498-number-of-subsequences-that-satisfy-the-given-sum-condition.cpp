class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int ans=0;
        int mod=1000000007;
        int n=nums.size();
        
        int low=0, high=n-1;
        vector<int> pows(n, 1);
        
        for (int i = 1 ; i < n ; ++i)
            pows[i] = pows[i - 1] * 2 % mod;
        
        while(low<=high){
            if(nums[low]+nums[high]<=target){
                int diff=high-low;
                ans=(ans+pows[diff])%mod;
                low++;

            }
            else if(nums[low]+nums[high]>target){
                high--;
            }
        }
        return ans;
        
    }
};