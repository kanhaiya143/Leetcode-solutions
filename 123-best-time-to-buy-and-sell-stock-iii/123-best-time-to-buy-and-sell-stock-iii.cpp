class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int fbuy=INT_MAX, sbuy=INT_MAX, fprof=0, sprof=0;
        int n=a.size();
        
        for(int i=0;i<n;i++){
            
            fbuy=min(fbuy,a[i]);
            fprof=max(fprof, a[i]-fbuy);
            
            sbuy=min(sbuy,a[i]-fprof);
            sprof=max(sprof, a[i]-sbuy);
        }
        
        return sprof;
    }
};