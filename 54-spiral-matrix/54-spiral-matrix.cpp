class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        
       
        int left=0,right=m-1;
        int bottom=n-1, top=0;
        int dir=0;
        
        while(left<=right && top<=bottom){
        
            if(dir%4==0){
                for(int k=left;k<=right;k++)
                ans.push_back(mat[top][k]);
                
                top++;
 
            }
            else if(dir%4==1){
                
                for(int k=top;k<=bottom;k++)
                    ans.push_back(mat[k][right]);
                
                right--;
            }
            else if(dir%4==2){
                for(int k=right;k>=left;k--)
                ans.push_back(mat[bottom][k]);
                
                bottom--;
            }
            else if(dir%4==3){
                for(int k=bottom;k>=top;k--)
                ans.push_back(mat[k][left]);
                
                left++;
                
            }
            
            dir++;
        }
        return ans;
        
    }
};