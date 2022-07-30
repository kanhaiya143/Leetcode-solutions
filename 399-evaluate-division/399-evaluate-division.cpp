class Solution {
public:
    void solve(string s, string d, double& value, map<string, vector<pair<string,double>>>&mp, set<string>vis, double temp){
        if(vis.find(s)!=vis.end())
            return;
        
        vis.insert(s);
         
        if(s==d){
            value=temp;
            return;
        }
        
        for(auto src:mp[s]){
            //cout<<temp<<" "<<src.second<<endl;
            solve(src.first,d,value,mp,vis,temp*src.second);
        }
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& q) {
        
        int n=e.size();
        //vector<vector<string>>adj;
        map<string, vector<pair<string,double>>>mp;
        
        for(int i=0;i<n;i++){
            mp[e[i][0]].push_back({e[i][1],v[i]});
            mp[e[i][1]].push_back({e[i][0],1/v[i]});
        }
        
        vector<double>ans;
        set<string>vis;
        for(int i=0;i<q.size();i++){
            string s=q[i][0];
            string d=q[i][1];
            
            double t=-1;
            
            if(mp.find(s)!=mp.end() || mp.find(d)!=mp.end()){
                solve(s,d,t,mp,vis,1);
            }
            ans.push_back(t);
        }
        return ans;
    }
};