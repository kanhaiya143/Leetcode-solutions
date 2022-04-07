class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ret;
        
        ret.push_back(nums);
        for(int i=1;i<n;i++){
            vector<int>ans(n-i);
            
            for(int j=0;j<n-i;j++){
                
                ans[j]=(ret[i-1][j]+ret[i-1][j+1])%10;
                //cout<<ans[j]<<" ";
            }
            //cout<<endl;
            ret.push_back(ans);
        }
        return ret[n-1][0];
    }
};