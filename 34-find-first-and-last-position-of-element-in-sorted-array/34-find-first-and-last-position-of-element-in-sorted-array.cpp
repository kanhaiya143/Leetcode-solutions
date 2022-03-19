class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int l=0, r=n-1;
        int mid;
        
        int idxL,idxR;
        int ansL, ansR;
        while(l<=r){
            
            mid=(r+l)/2;
            //cout<<l<<" "<<mid<<" "<<r<<endl;
            
            if(nums[mid]==target){
                
                idxL=mid,
                idxR=mid;
                
                while(idxL>=0 && nums[idxL]==target){
                    ansL=idxL;
                    idxL--;
                    
                }
                while(idxR<n && nums[idxR]==target){
                    ansR=idxR;
                    idxR++;
                }
                
                return {ansL, ansR};
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else
                l=mid+1;
            
        }
        return {-1,-1};
    }
};