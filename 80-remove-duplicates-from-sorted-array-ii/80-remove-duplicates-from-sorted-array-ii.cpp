class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n<3)
            return n;
        
        int i=2;
        int j=0;
        
        
        while(i<n && j<n){
         
            if(nums[i]!=nums[j]){
                nums[j+2]=nums[i];
                j++;
            }
            i++;
            
        }
        return j+2;
    }
};