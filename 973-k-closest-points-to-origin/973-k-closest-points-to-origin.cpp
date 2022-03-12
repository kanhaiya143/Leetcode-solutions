class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
       vector<pair<int,pair<int,int>>>v;
        
        int n=points.size();
        
        int dis;
        
        for(int i=0;i<n;i++){
            
            dis=points[i][0]*points[i][0] + points[i][1]*points[i][1];
            v.push_back({dis, {points[i][0], points[i][1]}});
           
        }
       
        sort(v.begin(),v.end());
        
        vector<vector<int>>ans;
        
        for(int i=0;i<v.size();i++){
            ans.push_back({v[i].second.first,v[i].second.second});
            
            if(ans.size()==k)
                return ans;
        }
        
        return ans;
    }
};