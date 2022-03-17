class Solution {
public:
    int nthUglyNumber(int n) {
        
         
       int dp[n+1];
       dp[1]=1;
        
        int p2 = 1, p3 = 1, p5 = 1;
        
        for(int i=2;i<=n;i++){
            //cout<<p2<<" "<<dp[p2]<<endl;
            int x2 = 2*dp[p2];
            int x3 = 3*dp[p3];
            int x5 = 5*dp[p5];
            
            int mini = min(x2, min(x3,x5));
            dp[i] = mini;
            
            if(mini == x2){
                p2++;
            }
            if(mini == x3){
                p3++;
            }
            if(mini == x5){
                p5++;
            }
            
        }
        return dp[n];
    }
};