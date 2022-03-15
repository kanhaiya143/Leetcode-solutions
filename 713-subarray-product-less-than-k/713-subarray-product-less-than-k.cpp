class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
    
        int n=nums.size();
        if(k==0)
            return 0;
        if(n==1){
            if(nums[0]>=k)
                return 0;
            return 1;
        }
        int start=0, end=0;
        int product=1;
        int count=0;
        
        while(start < n && end < n){
        
            product*=nums[end];
            
           while(start<=end && product>=k){
               product/=nums[start++];
           }
           count+=end-start+1;
           end++;
            //cout<<"pro "<<product<<endl;
        }
        
        return count;
    }
};