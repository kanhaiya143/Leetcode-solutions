class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        int dp[n][m];
        int sum=0;
        
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                    dp[i][j]=0;
                else
                    dp[i][j]=1;
                
                if(i==0 || j==0)
                sum+=dp[i][j];
            }
         }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
               
                if(mat[i][j]==1)
                    dp[i][j]=min(dp[i-1][j], min(dp[i-1][j-1],dp[i][j-1])) + 1;
                
                sum+=dp[i][j];
                
            }
        }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
    
                //sum+=dp[i][j];
            }
            
         }
        
        return sum;
    }
};


