class Solution {
public:
    int xinc[4]={0,0,1,-1};
    int yinc[4]={1,-1,0,0};
    
    void solve(int n, int m, int x, int y, vector<vector<int>>&grid, int &count, int &count0){
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y]==-1)
            return;
        
        if(grid[x][y]==2){
            if(count0==-1)
            count++;
            
            return;
        }
        
        count0--;
        grid[x][y]=-1;
        
        for(int i=0;i<4;i++){
           
            solve(n, m, x+xinc[i], y+yinc[i], grid, count, count0);
        }
        grid[x][y]=0;
        count0++;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        int count0=0;
        int x,y;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    count0++;
                }
                else if(grid[i][j]==1){
                    x=i;
                    y=j;
                }
            }
        }

        solve(n, m, x, y, grid, count, count0);
        return count;
    }
};