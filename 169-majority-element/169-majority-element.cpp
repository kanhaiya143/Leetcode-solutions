class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        unordered_map<int,int>mp;
        int n=a.size();
        int maxi=0;
        int ele;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            
            if(maxi<mp[a[i]]){
                maxi=mp[a[i]];
                ele=a[i];
            }
            
        }
        
        return ele;
    }
};