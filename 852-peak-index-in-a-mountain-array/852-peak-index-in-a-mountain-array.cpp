class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        
        int n=a.size();
        
        int low=0;
        int high=n-1;
        int mid;
        
        while(low<high){
            mid=low+(high-low)/2;
            
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
                return mid;
            }
            else if(a[mid]>a[mid-1])
                low=mid;
            else
                high=mid;
        }
        return 0;
    }
};