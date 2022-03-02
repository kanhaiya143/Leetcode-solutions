class Solution {
public:
    int countPrimes(int n) {
        
        int count=0;
        vector<int>dp(n+1,0);
        
       for(int i=2;i<=sqrt(n);i++){
           
           if(dp[i]==0){
                for(int j=i*i;j<=n;j+=i){
                dp[j]=1;
              }
           }
       }
       
        for(int i=2;i<n;i++){
            if(dp[i]==0)
                count++;
        }
        return count;
    }
};