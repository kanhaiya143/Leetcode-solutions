class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
     
        int n=nums.size();
        
        int leftMini=nums[0];
        int rightMaxi[n];
        
        rightMaxi[n-1]=nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            rightMaxi[i]=max(rightMaxi[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++){
            
            if(leftMini<nums[i] && nums[i]<rightMaxi[i+1]){
                return true;
            }
            leftMini=min(leftMini,nums[i]);
            
        }
        return false;
    }
};