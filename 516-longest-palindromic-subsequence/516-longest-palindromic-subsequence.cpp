class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        int n=s.size();
        
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
            dp[i][i]=1;
        
        for(int len=2;len<=n;len++){
            
            for(int start=0;start<n-len+1;start++){
                int end=len+start-1;
                
                if(len==2 && s[start]==s[end])
                    dp[start][end]=2;
                else if(s[start]==s[end] && dp[start+1][end-1]>0){
                    dp[start][end]=dp[start+1][end-1]+2;
                }
                else
                    dp[start][end]=max(dp[start+1][end], dp[start][end-1]);
                
            }
        }
        return dp[0][n-1];
    }
};