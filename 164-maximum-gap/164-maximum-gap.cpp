class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int n=nums.size();
        
        int maxi=*max_element(nums.begin(), nums.end());
        int mini=*min_element(nums.begin(), nums.end());
        
        int bucketsize=(int)ceil((double)(maxi-mini)/(n-1));
        if(bucketsize==0)
            return 0;
        
        
        vector<int>mn(n-1, INT_MAX);
        vector<int>mx(n-1, INT_MIN);
        
        for(int i=0;i<n;i++){
            if(nums[i]==maxi || nums[i]==mini)
                continue;
            
            int backetindex=(nums[i]-mini)/bucketsize;
            
            mn[backetindex]=min(mn[backetindex], nums[i]);
            mx[backetindex]=max(mx[backetindex], nums[i]);
            
        }

        int maxgap=0;
        for(int i=0;i<n-1;i++){
            if(mx[i]==INT_MIN)
                continue;
            
            maxgap=max(maxgap, mn[i]-mini);
            mini=mx[i];
            
        }
        maxgap=max(maxgap, maxi-mini);

        return maxgap;
    }
};
