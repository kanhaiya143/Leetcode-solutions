class Solution {
public:
    void solve(int n, int t, vector<int>c, vector<int>&temp, vector<vector<int>>&ans, int idx){

        if(t==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=idx;i<n && c[i]<=t;i++){
            if(i&&c[i]==c[i-1]&&i>idx) continue;
            
            temp.push_back(c[i]);
            solve(n,t-c[i],c,temp,ans,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        
        vector<vector<int>>ans;
        sort(c.begin(),c.end());
        vector<int>temp;
        int n=c.size();
        
        solve(n,target,c,temp,ans,0);
            
        return ans;
    }
};