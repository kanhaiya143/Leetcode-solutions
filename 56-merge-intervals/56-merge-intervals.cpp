class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& itr) {
        int n=itr.size();
        vector<int>start(n), end(n);
        
        for(int i=0;i<n;i++){
            start[i]=itr[i][0];
            end[i]=itr[i][1];
        }
        
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        vector<vector<int>>ans;
        int stIdx, enIdx;
        int i=0;
        for(i=0;i<n-1;i++){
            
            stIdx=i;    
            while(i<n-1 && end[i]>=start[i+1]){
                i++;
            }
            enIdx=i;
            ans.push_back({start[stIdx],end[enIdx]});
                
        }
        if(i<n){
            ans.push_back({start[n-1],end[n-1]});
        }
        return ans;
    }
};