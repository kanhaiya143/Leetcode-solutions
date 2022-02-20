class Solution {
public:
    int getKth(int lo, int hi, int k) {

        vector<pair<int,int>>v;
        int cnt=0;
        int val;
        for(int i=lo;i<=hi;i++){
            val=i;
            cnt=0;
            while(ceil(log2(val))!=floor(log2(val))){
    
                    if(val&1)
                    val = val*3 + 1;
                    else
                    val=val/2;
                    
                    cnt++;
            } 
            
            cnt += log2(val);
            
           
            v.push_back({cnt,i});
        }
       
        sort(v.begin(),v.end());
        
        return v[k-1].second;
    }
};