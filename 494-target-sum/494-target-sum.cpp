class Solution {
public:
    unordered_map<int,unordered_map<int,int>> dp;
    
    int all(vector<int>& nums, int &count, int n, int target, int begin, int sum){
        
        if(begin==n){
            if(target==sum){
            count++;
                return 1;
            }
          return 0;
        }
        
        if(dp[begin].count(sum))
            return dp[begin][sum];
 
        return dp[begin][sum]=all(nums,count,n,target,begin+1, sum+nums[begin]) + all(nums,count,n,target,begin+1, sum-nums[begin]);
        
        
       
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int count=0;
        int sum=0;
        return all(nums,count,n, target,0,sum);
        
       
    }
};