class Solution {
public:
    int jump(vector<int>& a) {
        
        int n=a.size();
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(i<=j+a[j])
                    dp[i]=min(dp[i],dp[j]+1);
            }
        }
        return dp[n-1];
    }
};