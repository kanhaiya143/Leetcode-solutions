class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        
        
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(1001,1));
        
        int maxi=1;
        int diff;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                
                diff = nums[i]-nums[j] + 500;
                
                dp[i][diff]=max(dp[i][diff], dp[j][diff]+1);
                maxi=max(maxi, dp[i][diff]);
            }
        }
        
        return maxi;
    }
};