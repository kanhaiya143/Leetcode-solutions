class Solution {
public:
    int xinc[4]={0,0,1,-1};
    int yinc[4]={1,-1,0,0};
    
    void dfs(vector<vector<int>>& grid, int i, int j, vector<pair<int,int>>&x, int n, int m){
        
        if(i>=n || i<0 || j>=m || j<0 || grid[i][j]==0)
            return;
        
        grid[i][j]=0;
        x.push_back({i,j});
        
        for(int k=0;k<4;k++){
            dfs(grid,i+xinc[k],j+yinc[k],x,n,m);
        }
        
       return;
    }
    int shortestBridge(vector<vector<int>>& grid) {
     
        int n=grid.size();
        int m=grid[0].size();
        
        vector<pair<int,int>>a,b;
        int flag=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && flag==0){
                    dfs(grid, i, j, a, n, m);
                    flag=1;
                }
                else if(grid[i][j]==1 && flag==1){
                     dfs(grid, i, j, b, n, m);
                }
            }
        }
        
        int mini=INT_MAX;
        
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                mini=min(mini, abs(a[i].first-b[j].first)+abs(a[i].second-b[j].second)-1);
            }
        }
        return mini;
    }
};

