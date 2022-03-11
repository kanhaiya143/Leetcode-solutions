class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        
        int n=arr.size();
        unordered_map<int,int>mp;
        int maxi=1;
        for(int i=0;i<n;i++){
            
            int diff=arr[i]-difference;
            mp[arr[i]]=mp[diff]+1;
            maxi=max(maxi,mp[arr[i]]);
            
        }
        return maxi;
    }
};