class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int n=trips.size();
        
        vector<int>table(1002,0);
        
        for(int i=0;i<n;i++){
            table[trips[i][1]]+=trips[i][0];
            table[trips[i][2]]-=trips[i][0];
        }
        bool ans=true;
        if(table[0]>capacity){
            return false;
        }
        for(int i=1;i<=1001;i++){
            table[i]+=table[i-1];
            //cout<<table[i]<<" ";
            if(table[i]>capacity){
                return false;
            }
        }
        
        return ans;
    }
};