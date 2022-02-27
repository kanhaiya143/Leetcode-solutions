class Solution {
public:
    void dfs(int x, int n, vector<int>& vis, vector<vector<int>>&cont){
        if(x<0 || x>=n || vis[x])
            return;
        
        vis[x]=1;
        
        for(int i=0;i<cont[x].size();i++){
            dfs(cont[x][i],n,vis,cont);
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n=isConnected.size();
        int m=isConnected[0].size();
        
        vector<vector<int>>cont(n);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i!=j){
                    if(isConnected[i][j]==1){
                        cont[i].push_back(j);
                        cont[j].push_back(i);
                    }
                }
            }
        }
        vector<int>vis(n,0);
        int count=0;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,n,vis,cont);
                count++;
            }
        }
        return count;
    }
};