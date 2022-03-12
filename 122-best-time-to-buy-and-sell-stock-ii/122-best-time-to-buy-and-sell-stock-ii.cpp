class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int localmini=a[0];
        int localmaxi=a[0];
        int n=a.size();
        int sum=0;
        
        for(int i=0;i<n-1;i++){
            
            if(a[i]<a[i+1]){
                sum+=a[i+1]-a[i];
            }
           
        }
        return sum;
        
    }
};