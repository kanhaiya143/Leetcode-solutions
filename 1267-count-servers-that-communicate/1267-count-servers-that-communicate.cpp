class Solution {
public:
//     int xinc[4]={0,0,1,-1};
//     int yinc[4]={1,-1,0,0};
//     void solve(int x, int y, int n, int m, vector<vector<int>>& grid, int &count){
//         if(x>=n || y>=m || x<0 || y<0 || grid[x][y]==0)
//             return;
        
//         grid[x][y]=0;
        
//         count++;
//         for(int i=0;i<4;i++){
//             solve(x+xinc[i],y+yinc[i],n,m,grid,count);
//         }
        
//     }
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        vector<int>row(n,0),col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    row[i]++;
                    col[j]++;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] && (col[j]>=2 || row[i]>=2))
                    count++;
            }
        }
        return count;
        
    }
};