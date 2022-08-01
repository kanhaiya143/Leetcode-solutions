class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int n=trips.size();
        
        vector<int>table(1001,0);
        
        for(int i=0;i<n;i++){
            table[trips[i][1]]+=trips[i][0];
            table[trips[i][2]]-=trips[i][0];
        }
        
        if(table[0]>capacity){
            return false;
        }
        
        for(int i=1;i<=1000;i++){
            table[i]+=table[i-1];
            if(table[i]>capacity){
                return false;
            }
        }
        
        return true;
    }
};