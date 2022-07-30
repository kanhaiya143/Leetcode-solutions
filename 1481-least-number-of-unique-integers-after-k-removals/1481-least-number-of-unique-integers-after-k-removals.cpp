class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        map<int,int>mp;
        multimap<int,int>mmp;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto it:mp){
            mmp.insert({it.second,it.first});
        }
        int count=0;
        for(auto it:mmp){
 
            if(it.first<=k){
                k-=it.first;
                count++;
            }
            else{
                break;
            }
        }
        
        return mmp.size()-count;
    }
};