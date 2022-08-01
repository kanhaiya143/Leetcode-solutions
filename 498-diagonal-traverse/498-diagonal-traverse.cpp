class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans(n*m);
        int k=0;
        
        for(auto it:mp){
            if(it.first%2==0){
                reverse(it.second.begin(), it.second.end());
                for(int j=0;j<it.second.size();j++){
                    ans[k++]=it.second[j];
                }
            }
            else{
               
                for(int j=0;j<it.second.size();j++){
                    ans[k++]=it.second[j];
                }
            }
        }
        return ans;
    }
};