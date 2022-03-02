class Solution {
public:
    int numSquares(int n) {
        int dp[101];
        
        for(int i=1;i<=100;i++){
            dp[i]=i*i;
        }
        
        vector<int>ans(n+1,INT_MAX);
        ans[0]=0;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=100;j++){
                if(dp[j]<=i){
                    //cout<<dp[j]<<endl;
                    if(ans[i-dp[j]]!=INT_MAX && ans[i]>ans[i-dp[j]]+1){
                        ans[i]=ans[i-dp[j]]+1;
                        //cout<<ans[i]<<endl;
                    }
                }
            }
        }
        return ans[n];
    }
};