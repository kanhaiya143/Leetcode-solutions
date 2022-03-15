class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        
        int end=0,start=0;
        int sum=0;
        int mini=INT_MAX;
        
        while(end<n && start<n){
            
            if(sum>=target){
                //cout<<i<<" "<<j<<endl;
                mini=min(mini,end-start);
                sum-=nums[start];
                start++;
            }
            else
            {
                sum+=nums[end];
                //cout<<i<<" "<<sum<<" "<<endl;
                end++;
            }
            
        }
        while(sum>=target){
            mini=min(mini,end-start);
            sum-=nums[start];
            start++;
            
        }
        if(mini==INT_MAX)
            return 0;
        return mini;
        
    }
};