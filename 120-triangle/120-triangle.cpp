class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
    
        
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=triangle[n-1][i];
            
        }
        for(int i=1;i<n;i++){
          
            for(int j=0;j<triangle[i].size();j++){
                if(j==0){
                    triangle[i][j]+=triangle[i-1][0];
                }
                else if(j==triangle[i].size()-1){
                    triangle[i][j]+=triangle[i-1][triangle[i-1].size()-1];
                }
                else{
                    //cout<<i<<" "<<j<<endl;
                    triangle[i][j]+=min(triangle[i-1][j-1],triangle[i-1][j]);
                }
                
                    
            }
        }
        
//         for(int i=n-2;i>=0;i--){
//             for(int j=0;j<triangle[i].size();j++)
//             dp[j]=min(dp[j],dp[j+1])+triangle[i][j];
//         }
        
        return *min_element(triangle[n-1].begin(),triangle[n-1].end());
    }
};