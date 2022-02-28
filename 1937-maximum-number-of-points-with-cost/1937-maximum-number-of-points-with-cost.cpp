class Solution {
public:
    
    long long maxPoints(vector<vector<int>>& p) {
        
        int n=p.size();
        int m=p[0].size();
        
        vector<vector<long long>>ans(n,vector<long long>(m,0));
        for(int i=0;i<m;i++){
            ans[0][i]=p[0][i];
        }
        
        for(int i=1;i<n;i++){
            vector<long long> left(m), right(m);
            
            left[0] = ans[i-1][0];
            for(int c = 1 ; c < m ; c++) {
                left[c] = max(left[c-1], ans[i-1][c] + c);
            }
            
            right[m-1] = ans[i-1][m-1] - (m-1);
            for(int c = m-2 ; c >= 0 ; c--) {
                right[c] = max(right[c+1], ans[i-1][c] - c);
            }
            
            for(int c = 0 ; c < m ; c++) {
                ans[i][c] = p[i][c] + max(left[c] - c, right[c] + c);
            }
        }
        return *max_element(ans[n-1].begin(),ans[n-1].end());
    }
};