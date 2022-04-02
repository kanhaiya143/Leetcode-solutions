class Solution {
public:
    int xinc[4]={0,0,1,-1};
    int yinc[4]={1,-1,0,0};
    
    int sumPeri(vector<vector<int>>& grid, int x, int y, int n, int m, int& flag){
        if(x>=n||y>=m||x<0||y<0){
            return 1;
        }
        if(grid[x][y]==1 && flag!=0){
            return 0;
        }
        if(grid[x][y]==0)
            return 1;
       flag=1;
       return  
              (sumPeri(grid,x+1,y,n,m,flag) 
              + sumPeri(grid,x-1,y,n,m,flag) 
              + sumPeri(grid,x,y+1,n,m,flag) 
              + sumPeri(grid,x,y-1,n,m,flag));
        
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    flag=0;
                    count+=sumPeri(grid,i,j,n,m,flag);
                    //cout<<count<<endl;
                }
            }
        }
        
        return count;
    }
};