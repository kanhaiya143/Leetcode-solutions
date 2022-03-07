class Solution {
public:
    void solve(int start, int n, int k, vector<int>&num, vector<vector<int>>&ans){
        
        if(k==0){
            ans.push_back(num);
            return;
        }
        
        for(int i=start; i<n; i++){
            num.push_back(i+1);
            solve(i+1,n,k-1,num,ans);
            num.pop_back();
        }
       
    }
    vector<vector<int>> combine(int n, int k) {
        
        if(k==0 || n==0)
            return {{}};
        
        vector<int>num;
        vector<vector<int>>ans;
        
        solve(0, n, k, num, ans);
        
        return ans;
    }
};