class Solution {
public:
    int xinc[4]={1,-1,0,0};
    int yinc[4]={0,0,1,-1};
    bool g_value=false;
    void dfs(int i, int j, vector<vector<int>>&vis, vector<vector<char>>& grid, int n, int m, char parent, int last_x, int last_y){
        
        if(g_value)
            return;
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]!=parent)
            return;
        
        if(vis[i][j]==1){
            g_value=true;
            return;
        }
        vis[i][j]=1;
        
        for(int k=0;k<4;k++){
            
            int x=i+xinc[k];
            int y=j+yinc[k];
            
            if(x!=last_x || y!=last_y)
            dfs(x,y,vis,grid,n,m,grid[i][j], i, j);
        }
        
        return;
        
    }
    bool containsCycle(vector<vector<char>>& grid) {
        
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(vis[i][j]==0){
                    dfs(i, j, vis, grid, n, m, grid[i][j], -1, -1);
                        if(g_value)
                        return true;
                }
            }
        }
        return false;
        
    }
};