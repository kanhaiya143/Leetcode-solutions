class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
        
        int i=0;
        int flag=0;
        for(i=0;i<n;i++){
            
            if(mat[i][0]<=target && mat[i][m-1]>=target){
                flag=1;
                break;
            }
            
        }
        if(!flag)
            return false;
        
        for(int j=0;j<m;j++){
            if(mat[i][j]==target)
                return true;
        }
        
        return false;
    }
};