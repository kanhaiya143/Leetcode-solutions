class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int n=nums.size();
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2)
            return false;
        
        
        
        int s=sum/2;
        int dp[n+1][s+1];
        
       for(int i=0;i<=n;i++){
           dp[i][0]=1;
       }
       for(int i=1;i<=s;i++){
           dp[0][i]=0;
       }
        
        for(int i=1;i<=n;i++){
           for(int j=1;j<=s;j++){
                if(nums[i-1]<=j)
                dp[i][j]=(dp[i-1][j] || dp[i-1][j-nums[i-1]]);
               else
                   dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][s])
            return true;
        
        return false;
    }
};