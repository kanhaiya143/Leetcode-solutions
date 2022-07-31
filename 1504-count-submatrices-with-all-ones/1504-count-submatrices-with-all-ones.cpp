class Solution {
public:
    int solve(vector<vector<int>>& mat, int x, int y){
        
        int count=0;
        int n=mat.size();
        int m=mat[0].size();
        int bound=m;
        for(int i=x;i<n;i++){
            for(int j=y;j<bound;j++){
                if(mat[i][j])
                    count++;
                else
                    bound=j;

            }
        }
        return count;
    }
    int numSubmat(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]){
                    count+=solve(mat,i,j);
                }
            }
        }
        return count;
        
    }
};