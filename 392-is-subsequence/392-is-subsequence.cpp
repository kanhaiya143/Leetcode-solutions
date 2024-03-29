class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        vector<vector<int>>dp(n+1,vector(m+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==0||j==0){
                    dp[i][j]=1;
                    continue;
                }
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        if(n==dp[n][m])
            return true;
        
        return false;
        
    }
};