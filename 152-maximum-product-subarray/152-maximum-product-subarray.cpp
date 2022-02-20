class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        
        int lmax=1;
        int rmax=1;
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            ans=max(lmax*a[i], ans);
            lmax=lmax*a[i];
            if(lmax==0)
                lmax=1;
            
                
        }
        cout<<ans<<endl;
        for(int i=n-1;i>=0;i--){
            
            ans=max(rmax*a[i], ans);
            rmax=rmax*a[i];
            if(rmax==0)
                rmax=1;
                
        }
        
        return ans;
    }
};