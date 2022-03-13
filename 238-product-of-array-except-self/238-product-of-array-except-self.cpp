class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
        int n=nums.size();
        int dp1[n];
        int dp2[n];
        
        dp1[0]=nums[0];
        dp2[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++){
            dp1[i]=dp1[i-1]*nums[i];
        }
        for(int i=n-2;i>=0;i--){
            dp2[i]=dp2[i+1]*nums[i];
        }
        vector<int>ans(n);
        
        ans[0]=dp2[1];
        ans[n-1]=dp1[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=dp1[i-1]*dp2[i+1];
        }
        return ans;
    }
};