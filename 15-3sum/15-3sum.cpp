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
     
        set<vector<int>>st;
        for(int i=0;i<n-2;i++)
        {
            low=i+1;
            high=n-1;
            
            while(low<high){
                if(a[i]+a[low]+a[high]==0){
                    if(st.find({a[i], a[low], a[high]}) == st.end())
                    ans.push_back({a[i], a[low], a[high]});
                    
                    st.insert({a[i], a[low], a[high]});
                    
                    high--;
                    low++;
                    if(a[low]==0 &&a[high] ==0)
                    {
                        break;
                    }
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