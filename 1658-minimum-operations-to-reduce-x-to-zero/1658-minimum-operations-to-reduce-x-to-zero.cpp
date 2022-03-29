class Solution {
public:
    void solve(vector<int>& nums, int x, int start, int end, int &mini, int count, int n){
        
        if(start>=n || end<0)
        {
            return;
        }
        
        if(x==0){
            mini=min(mini,count);
            return;
        }
        
        solve(nums, x-nums[start], start+1, end, mini, count+1, n);
        solve(nums, x-nums[end], start, end-1, mini, count+1, n);
        
        return;
    }
    int minOperations(vector<int>& nums, int x) {
        
        int n=nums.size();
        int start=0,end=n-1;
        int mini=INT_MAX;
        int sum=0;
        int count=0;
        //solve(nums,x,start,end, mini, count,n);
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        int target=sum-x;
        
        if(target==0)
            return n;
        unordered_map<int,int>mp;
        
        //cout<<target<<endl;
        int maxi=INT_MIN;
        sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            if(sum==target){
                maxi=max(maxi,i+1);
            }
            
            //cout<<sum<<endl;
            if(mp.find(sum-target)!=mp.end()){
                //cout<<sum<<" "<<i<<" "<<mp[sum-target]<<endl;
                maxi=max(maxi, i-mp[sum-target]);
            }
            //else{
                mp[sum]=i;
            //}
            
            
        }
        //cout<<maxi<<endl;
        if(maxi==INT_MIN)
            return -1;
        return n-maxi;
    }
};