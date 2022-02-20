class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n=a.size();
        
        int low=0;
        int high=n-1;
        
        while(low<high){
            if(a[low]+a[high]==target)
                return {low+1, high+1};
            
            else if(a[low]+a[high]> target)
                high--;
            else
                low++;
        }
        return {};
    }
};