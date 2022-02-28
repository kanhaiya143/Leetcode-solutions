class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n=a.size();
        
        int maxi=0;
        
        int i=0;
        
        while(i<n){
            maxi=max(maxi,i+a[i]);
            
            if(maxi>=n-1)
                return true;
            
            if(maxi<=i && a[i]==0)
                return false;
            
            i++;
        }
        return false;
       
    }
};