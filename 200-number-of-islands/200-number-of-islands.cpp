class Solution {
public:
    void dfs(int x, int y, int n, int m, vector<vector<char>>& grid, vector<vector<int>> &vis){
        
        if(x<0 || y<0 || x>=n || y>=m || vis[x][y] || grid[x][y]=='0')
            return;
        vis[x][y]=1;
        grid[x][y]='0';
        
        dfs(x+1,y,n,m,grid,vis);
        dfs(x,y+1,n,m,grid,vis);
        dfs(x,y-1,n,m,grid,vis);
        dfs(x-1,y,n,m,grid,vis);
        return;
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]=='1'){
                    if(vis[i][j]==0)
                    dfs(i,j,n,m,grid,vis);
                    count++;
                }
            }
        }
 
        return count;
    }
};