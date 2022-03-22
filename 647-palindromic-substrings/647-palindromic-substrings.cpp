class Solution {
public:
    int countSubstrings(string s) {
        
        int n=s.size();
        
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        int ans=n;
        int end;
        
        for(int len=2;len<=n;len++){
            for(int start=0;start<n-len+1;start++){
                
                end=start+len-1;
                
                if(len==2 && s[start]==s[end]){
                    ans++;
                    dp[start][end]=2;
                }
                else if(s[start]==s[end] && dp[start+1][end-1]!=0){
                    dp[start][end]=dp[start+1][end-1]+1;
                    ans++;
                }
            }    
        }
        return ans;
    }
};