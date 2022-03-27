class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
                cnt++;
        }
        
        int mini=INT_MAX;
        
        int cntZero=0;
        for(int i=0;i<cnt;i++){
            if(nums[i]==0)
                cntZero++;
        }
        
        mini=min(mini,cntZero);
        
        for(int i=1;i<n;i++){
            
            if(nums[i-1]==0){
                cntZero--;
            }
            if(nums[(i+cnt-1)%n]==0){
                cntZero++;
            }
            mini=min(mini,cntZero);
        }
        return mini;
    }
};