class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        
        vector<int>dp(n+1,INT_MAX);
        dp[0]=INT_MIN;
        
        for(int i=1;i<=n;i++){
            
            int next_greater=upper_bound(dp.begin(),dp.end(),a[i-1])-dp.begin();
            
            if(a[i-1]<dp[next_greater] && a[i-1]>dp[next_greater-1]){
                dp[next_greater]=a[i-1];
            }
        }
        
        for(int i=n;i>=0;i--){
            if(dp[i]!=INT_MAX)
                return i;
        }
        return 0;
    }
};

    