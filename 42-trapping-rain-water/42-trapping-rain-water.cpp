class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        
        int water=0;
        
        int low=0;
        int high=n-1;
        int lmaxi=0;
        int rmaxi=0;
        
        while(low<=high){
            lmaxi=max(lmaxi,height[low]);
            rmaxi=max(rmaxi,height[high]);
            
            if(height[low]<height[high]){
                water+=min(lmaxi,rmaxi)-height[low];
                low++;
            }
            else{
                water+=min(lmaxi,rmaxi)-height[high];
                high--;
                
            }
        }
        return water;
        
    }
};