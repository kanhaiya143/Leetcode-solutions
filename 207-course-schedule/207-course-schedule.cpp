class Solution {
public:
    bool loop(int val, vector<vector<int>>& adj, int n, vector<int>&vis){
        
        if(vis[val]==1)
            return true;
        if(vis[val]==2)
            return false;
        
        vis[val]=1;
        
        for(int i=0;i<adj[val].size();i++){
            if(loop(adj[val][i], adj, n, vis)){
                return true;
            }
        }
        vis[val]=2;
        return false;
    }
    bool detectCycle(vector<vector<int>>& adj, int n){
        
       vector<int>vis(n,0);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(loop(i,adj,n,vis)){
                    return true;
                }
            }
        }
        
        return false;
        
    }
    void topo(int val, vector<vector<int>>& adj, int n, vector<int>&vis)
    {
        vis[val] = 1;
        
        for(int i=0; i<adj[val].size(); i++){
            if(!vis[adj[val][i]])
            topo(adj[val][i], adj, n, vis);
        }
        //vis[val]=0;
        //return true;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<int>vis(n,0);
        //stack<int>st;
        vector<vector<int>>adj(n);
        
        for(int i=0;i<pre.size();i++){
            adj[pre[i][1]].push_back(pre[i][0]);
        }
    
        if(detectCycle(adj, n)){
            return false;
        }
        
        
        for(int i=0; i<n; i++){
            if(!vis[i])
                topo(i, adj, n, vis);
                    
        }
        for(int i=0;i<n;i++){
            if(vis[i]==false)
                return false;
        }
        
        return true;
        
        
    }
};