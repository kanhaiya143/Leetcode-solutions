class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(n,vector<int>(m,1));
        
        dp[0][0]=1;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]=(dp[i][j-1]%2000000000+(dp[i-1][j])%2000000000)%2000000000;
            }
        }
        return dp[n-1][m-1];
        
    }
};