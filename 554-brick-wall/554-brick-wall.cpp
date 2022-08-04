class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n=wall.size();
        unordered_map<int,int>mp;
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<wall[i].size()-1;j++){
                sum+=wall[i][j];
                mp[sum]++;
            }
        }
        int maxi=0;
        for(auto it:mp){
            maxi=max(maxi,it.second);
        }
        
        return n-maxi;
    }
};