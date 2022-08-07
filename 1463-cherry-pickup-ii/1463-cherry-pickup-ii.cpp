class Solution {
public:
    int dp[80][80][80];
    
    int solve(vector<vector<int>>&grid, int row, int col, int r1, int r2, int r){
        
        if(row==r)
            return 0;
        
        if(dp[r1][r2][r]!=-1){
            return dp[r1][r2][r];
        }
        int sum=0;
        
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int cr1=r1+i;
                int cr2=r2+j;
                if(cr1>=0 && cr2>=0 && cr1<col && cr2<col)
                sum=max(sum, solve(grid, row, col, cr1, cr2, r+1));
            }
        }
        
        if(r1==r2){
            sum+=grid[r][r1];
        }
        else{
            sum+=grid[r][r1]+grid[r][r2];
        }
        
        dp[r1][r2][r]=sum;
        return dp[r1][r2][r];
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        
        memset(dp, -1, sizeof(dp));
        
        
        return solve(grid, row, col, 0, col-1, 0);
        
    }
};