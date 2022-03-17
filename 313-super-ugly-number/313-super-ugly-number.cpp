class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
        int dp[n+1];
        dp[1]=1;
        
        int l=primes.size();
        
        vector<int>counter(l,1);
        
        int mini=INT_MAX;
        
        for(int i=2;i<=n;i++){
            
            mini=INT_MAX;
            for(int j=0;j<l;j++){
                mini=min(mini, primes[j]*dp[counter[j]]);
            }
            
            dp[i] = mini;
            //cout<<mini<<endl;
            for(int j=0;j<l;j++){
                if(mini == primes[j]*dp[counter[j]]){
                    counter[j]++;
                }
                //cout<<counter[j]<<" ";
            }
            //cout<<endl;
        }
        return dp[n];
        
    }
};