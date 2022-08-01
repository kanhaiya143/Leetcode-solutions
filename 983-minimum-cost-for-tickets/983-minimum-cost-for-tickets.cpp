class Solution {
public:
    
    int solve(int n, vector<int>& days, vector<int>& costs, vector<int>dp){
       
        
        for(int k=n-1;k>=0;k--){
        
            int day1=costs[0]+dp[k+1];

            int i;
            for(i=k; i<n && days[i]<days[k]+7; i++);
            int day7=costs[1]+dp[i];

            for(i=k; i<n && days[i]<days[k]+30; i++);
            int day30=costs[2]+dp[i];

            dp[k]=min(day1, min(day7, day30));
        }
        return dp[0];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        int n=days.size();
        vector<int>dp(n+1, INT_MAX);
        dp[n]=0;
        
        return solve(n, days, costs, dp);
    }
};