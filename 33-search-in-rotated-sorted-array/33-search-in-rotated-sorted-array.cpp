class Solution {
public:
    int search(vector<int>& a, int target) {
        
        int n=a.size();
        int low=0;
        int high=n-1;
        int mid;
        
        while(low<high){
            mid=low+(high-low)/2;
            
            if(a[mid]==target)
                return mid;
            
            else if(a[mid]>=a[low]){
                
                if(a[low]<=target && target<a[mid])
                high=mid-1;
                else
                low=mid+1;
            }
            else
                if(a[high]>=target && target>a[mid]){
                    low=mid+1;
                }
                else
                    high=mid-1;
        }
        
        if(a[low]==target)
            return low;
        return -1;
    }
};