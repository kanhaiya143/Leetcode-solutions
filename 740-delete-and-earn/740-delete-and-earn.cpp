class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(10001);
        
        int h[10001]={0};
        
        for(int i=0;i<n;i++){
            h[nums[i]]++;
        }
        dp[0]=0;
        dp[1]=h[1];
        
        for(int i=2;i<=10000;i++){
            dp[i]=max(dp[i-1], dp[i-2]+h[i]*i);  
        }
        return dp[10000];
    }

};