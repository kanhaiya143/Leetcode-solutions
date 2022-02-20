class Solution {
public:
    int cnt(int val){
        
        if(val<2){
            return 0;
        }
        
        if(val&1)
            return 1+cnt(val*3+1);
        return 1+cnt(val/2);
    }
    int getKth(int lo, int hi, int k) {

        vector<pair<int,int>>v;
        
        int val;
        for(int i=lo;i<=hi;i++){
            
            v.push_back({cnt(i),i});
        }
       
        sort(v.begin(),v.end());
        
        return v[k-1].second;
    }
};