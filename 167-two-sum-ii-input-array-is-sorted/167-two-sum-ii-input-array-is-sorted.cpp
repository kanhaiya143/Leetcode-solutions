class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            
            if(mp.find(target-a[i])==mp.end())
            mp[a[i]]=i+1;
            else
            return {mp[target-a[i]], i+1};
                
        }
        return {};
    }
};