class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        vector<vector<int>>ans;
        if(n<=2)
            return {};
        sort(a.begin(),a.end());
        
        int low=0;
        int high=n-1;
     
        for(int i=0;i<n;i++)
        {
            if(i> 0 && a[i]==a[i-1])
                continue;
            low=i+1;
            high=n-1;
            
            while(low<high){
                if(a[i]+a[low]+a[high]==0){
                    ans.push_back({a[i], a[low], a[high]});
                    
                    while(high>=1 && a[high]==a[high-1])
                    high--;
                    while(low<n-1 && a[low]==a[low+1])
                    low++;
                    
                    low++;
                    high--;
                   
                }
                else if(a[i]+a[low]+a[high] > 0)
                    high--;
                else
                    low++;
            }
        }
        
     
     return ans;
    }
};