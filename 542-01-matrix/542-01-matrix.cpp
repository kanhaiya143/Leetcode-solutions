class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        queue<pair<int,int>>q;
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                }
                else{
                    mat[i][j]=-1;
                }
            }
        }
      
       
        pair<int,int>temp;
        int x,y;
        
        int xinc[4]={0,0,1,-1};
        int yinc[4]={1,-1,0,0};
        
        while(!q.empty()){
            temp=q.front();
            q.pop();
            x=temp.first;
            y=temp.second;
            
            for(int i=0;i<4;i++){
                
                int cx=x+xinc[i];
                int cy=y+yinc[i];
                
                if(cx<0 || cy<0 || cx>=n || cy>=m || mat[cx][cy]!=-1)
                    continue;
                
                mat[cx][cy]=mat[x][y]+1;
                q.push({cx,cy});
            }
            
        }
        
        return mat;
    }
};