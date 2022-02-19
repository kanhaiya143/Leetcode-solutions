class Solution {
public:
    int h[20]={0};
    void dfs(unordered_map<int,vector<int>>mp, vector<vector<int>>& ans, vector<int> &inter, int var, int x)
    {
        
        inter.push_back(var);
        if(var==x)
        {
            ans.push_back(inter);
            inter.pop_back();
            return;
        }
        for(int i=0;i<mp[var].size();i++){
            dfs(mp, ans, inter, mp[var][i], x);
        }
        inter.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        int n = graph.size();
        unordered_map<int,vector<int>>mp;
        
        for(int i=0;i<n;i++)
            for(int j=0;j<graph[i].size();j++)
                mp[i].push_back(graph[i][j]);
        
        vector<vector<int>>ans;
        vector<int>inter;
        
        dfs(mp, ans, inter, 0, n-1);
        
        return ans;
    
    }
};

/*
bfs
0 -> 4, 3, 1
1 -> 3, 2, 4
2 -> 3
3 -> 4
*/


