class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        
        int i=0,j=0;
        int sum=0;
        int mini=INT_MAX;
        
        while(i<n && j<n){
            
            if(sum>=target){
                //cout<<i<<" "<<j<<endl;
                mini=min(mini,i-j);
                sum-=nums[j];
                j++;
            }
            else
            {
                sum+=nums[i];
                //cout<<i<<" "<<sum<<" "<<endl;
                i++;
            }
            
        }
        while(sum>=target){
            mini=min(mini,i-j);
            sum-=nums[j];
            j++;
            
        }
        if(mini==INT_MAX)
            return 0;
        return mini;
        
    }
};