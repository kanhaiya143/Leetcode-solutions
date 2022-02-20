class Solution {
public:
    int findPeakElement(vector<int>& a) {
       int n=a.size();
        
        int low=0;
        int high=n-1;
        int mid;
        if(n<=1)
            return 0;
        if(n==2){
            if(a[0]>a[1])
                return 0;
            return 1;
        }
        
        while(low<=high){
            mid=low+(high-low)/2;
            //cout<<low<<" "<<high<<endl;
            //cout<<mid<<" "<<a[mid]<<endl;
            
            if(mid==0){
                if(a[mid]>a[mid+1])
                    return mid;
                return mid+1;
            }
            else if(mid==n-1){
                if(a[mid]>a[mid-1])
                    return mid;
                 return mid-1;
            }
            else if(a[mid]>a[mid-1]&&a[mid]>a[mid+1])
                return mid;
            else if(a[mid]<a[mid-1]){
                high=mid-1;
            }
            else
                low=mid+1;
            
        }
        return 0;
    }
};