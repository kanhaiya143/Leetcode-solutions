class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        
        vector<int>dp(amount+1, INT_MAX);
        dp[0]=0;
        
        for(int j=1;j<=amount;j++){
            for(int i=0;i<n;i++){
                if(coins[i]<=j){
                    //cout<<j<<" "<<coins[i]<<endl;
                    if(dp[j-coins[i]]!=INT_MAX)
                    dp[j]=min(dp[j],dp[j-coins[i]] + 1);
                }
            }
        }
        if(dp[amount]==INT_MAX)
            return -1;
        
        return dp[amount];
        
    }
};