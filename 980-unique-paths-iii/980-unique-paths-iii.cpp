class Solution {
public:
    int xinc[4]={0,0,1,-1};
    int yinc[4]={1,-1,0,0};
    
    void solve(int n, int m, int x, int y, vector<vector<int>>&grid, int &count, int &count1){
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y]==-1)
            return;
        
       // cout<<count1<<endl;
        
        if(grid[x][y]==2){
            if(count1==-1)
            count++;
            
            return;
        }
        
        count1--;
        grid[x][y]=-1;
        
        for(int i=0;i<4;i++){
           
            solve(n,m,x+xinc[i],y+yinc[i],grid,count, count1);
        }
        grid[x][y]=0;
        count1++;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        int count1=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    count1++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    solve(n, m, i, j, grid, count, count1);
                }
            }
        }
        
        return count;
    }
};