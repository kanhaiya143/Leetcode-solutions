class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int n=nums.size();
        
        
        int all=pow(2,n);
        vector<int>temp;
        int x;
        for(int i=0;i<all;i++){
            
            x=i;
            for(int j=0;j<n;j++){
                
                if(x&1){
                    temp.push_back(nums[j]);
                }
                x=x>>1;
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};