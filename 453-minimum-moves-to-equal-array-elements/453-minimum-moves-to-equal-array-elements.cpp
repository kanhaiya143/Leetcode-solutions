class Solution {
public:
    int minMoves(vector<int>& nums) {
        
       int n=nums.size();
        
      if(n==1)
          return 0;
        
       int mini = INT_MAX;
      
       int sum=0;
        
       for(int i=0; i<n;i++)
       {
         sum+=nums[i];
         mini=min(mini,nums[i]);
       }
       
        return sum-mini*n;
    }
};