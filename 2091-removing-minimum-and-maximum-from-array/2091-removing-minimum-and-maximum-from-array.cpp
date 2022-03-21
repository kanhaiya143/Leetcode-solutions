class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n=nums.size();
        
        int miniIdx=min_element(nums.begin(),nums.end())-nums.begin();
        int maxiIdx=max_element(nums.begin(),nums.end())-nums.begin();
        
        cout<<miniIdx<<" "<<maxiIdx<<endl;
        int sum1=max(miniIdx,maxiIdx)+1;
        int sum2=miniIdx+1+(n-maxiIdx);
        int sum3=(n-miniIdx)+maxiIdx+1;
        int sum4=max(n-miniIdx,n-maxiIdx);
        
        return min(sum1,min(sum2,min(sum3,sum4)));
    }
};