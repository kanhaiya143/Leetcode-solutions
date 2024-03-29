class Solution {
public:
//     void solve(vector<int>& nums, int x, int start, int end, int &mini, int count, int n){
        
//         if(start>=n || end<0)
//         {
//             return;
//         }
        
//         if(x==0){
//             mini=min(mini,count);
//             return;
//         }
        
//         solve(nums, x-nums[start], start+1, end, mini, count+1, n);
//         solve(nums, x-nums[end], start, end-1, mini, count+1, n);
        
//         return;
//     }
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        int target=sum-x;
        
        if(target==0)
            return n;
        
        unordered_map<int,int>mp;
        
        int maxi=INT_MIN;
        sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(sum==target){
                maxi=max(maxi,i+1);
            }
            
            
            if(mp.find(sum-target)!=mp.end()){
                maxi=max(maxi, i-mp[sum-target]);
            }
           
            mp[sum]=i;

        }
      
        if(maxi==INT_MIN)
            return -1;
        return n-maxi;
    }
};