class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n=a.size();
        if(n<=2)
            return 0;
        
        vector<int>dpl(n,1);
        vector<int>dpr(n,1);
        
        for(int i=1;i<n;i++){
            if(a[i-1]<a[i]){
                dpl[i]=dpl[i-1]+1;
            }
            
        }
         for(int i=n-2;i>=0;i--){
            if(a[i+1]<a[i]){
                dpr[i]=dpr[i+1]+1;
            }
            
        }
        int maxi=0;
        for(int i=1;i<n-1;i++){
            if(dpr[i]>1 && dpl[i]>1)
           maxi=max(maxi, dpl[i]+dpr[i]-1);
        }
         for(int i=0;i<n;i++){
            cout<<dpl[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<dpr[i]<<" ";
        }
        cout<<endl;
        if(maxi<=2)
            return 0;
        return maxi;
    }
};