class Solution {
public:
    int dp[200][200]{}; // constraints are small enough that we can just set them to MAX
    int maxPath, n, m;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
	    maxPath = 0, n = size(matrix), m = size(matrix[0]);
	    for(int i = 0; i < n; i++)
		    for(int j = 0; j < m; j++)
			    maxPath = max(maxPath, solve(matrix, i, j, -1));            
	    return maxPath;
    }
    
    int solve(vector<vector<int>>& mat, int i, int j, int prev){
	    if(i < 0 || j < 0 || i >= n || j >= m || mat[i][j] <= prev) return 0;
	    if(dp[i][j]) return dp[i][j];
	    return dp[i][j] = 1 + max({ solve(mat, i + 1, j, mat[i][j]),
							    solve(mat, i - 1, j, mat[i][j]),
							    solve(mat, i, j + 1, mat[i][j]),
							    solve(mat, i, j - 1, mat[i][j]) });       
    }
//     int xinc[4]={0,0,1,-1};
//     int yinc[4]={1,-1,0,0};
//     int dp[200][200]={0};
    
    
//     void solve(int x, int y, int n, int m, vector<vector<int>>&mat, int count, int &localMaxi){
        
//         if(x<0 || y<0 || x>=n || y>=m || mat[x][y]<0)
//             return;
        
//         if(dp[i][j]) return dp[i][j];
//         count++;
//         int val=mat[x][y];
//         mat[x][y]*=-1;
        
//         localMaxi=max(localMaxi, count);
//         for(int i=0;i<4;i++){
//             int curx=x+xinc[i];
//             int cury=y+yinc[i];
            
//             if(curx<0 || cury<0 || curx>=n || cury>=m || val>=mat[curx][cury])
//                 continue;
            
//             //cout<<mat[x][y]<<" "<<count<<" "<<localMaxi<<endl;
//             solve(curx, cury, n, m, mat, count, localMaxi);
//         }
//         count--;
//         mat[x][y]*=-1;
//         return;
//     }
//     int longestIncreasingPath(vector<vector<int>>& mat) {
//         int n=mat.size();
//         int m=mat[0].size();
//         int maxi=0;
//         int count=0;
//         int localMaxi=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 count=0;
//                 localMaxi=0;
//                 solve(i,j,n,m,mat,count,localMaxi);
//                 maxi=max(maxi, localMaxi);
//             }
//         }
//         return maxi;
        
//     }
};