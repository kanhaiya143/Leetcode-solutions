class Solution {
public:
    string longestPalindrome(string s) {
     
        int n=s.size();
        if(n==0)
            return "";
        
        string ans="";
        ans+=s[0];
        
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        
        
        for(int cl=2;cl<=n;cl++){
            for(int i=0;i<n-cl+1;i++){
                int j=i+cl-1;
                
                if(cl==2 && s[i]==s[j]){
                    dp[i][j]=1;
                    ans=s.substr(i,cl);
                }
                else if(s[j]==s[i] && dp[i+1][j-1]>0){
                    dp[i][j]=1;
                    if(cl > ans.size())
                    ans=s.substr(i,cl);
                }
                else
                    dp[i][j]=0;
                    
            }
        }
        
        return ans;
        
    }
};