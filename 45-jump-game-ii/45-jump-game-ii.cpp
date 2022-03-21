class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n=nums.size();
       
        int maxReach=0;
        int curReach=0;
        int jump=0;
        
        for(int i=0;i<n-1;i++){
           
            if(i+nums[i]>maxReach){
                maxReach=i+nums[i];
            }
            if(i==curReach){
                jump++;
                curReach=maxReach;
            }
            
        }
        return jump;
    }
};