class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int n=c.size();
        
        int sum=0;
        int totalSum=0;
        
        for(int i=0;i<n;i++){
            totalSum+=c[i];
        }
        
        for(int i=0;i<n-k;i++){
            sum+=c[i];
        }
        int maxi=0;
        
        maxi=max(maxi,totalSum-sum);
        
        cout<<sum<<" ";
        
        for(int i=1;i<k+1;i++){
             
            
            sum-=c[i-1];
            sum+=c[i+n-k-1];
            cout<<sum<<" ";
            
            maxi=max(maxi,totalSum-sum);
        }
        
        return maxi;
    }
};