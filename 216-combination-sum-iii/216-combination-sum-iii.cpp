class Solution {
public:
    void solve(vector<int>nums, int k, int target, vector<int>temp, vector<vector<int>>&ans, int idx){
        
        if(target==0 && k==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=idx;i<nums.size() && nums[i]<=target;i++){
            temp.push_back(nums[i]);
            solve(nums, k-1, target-nums[i], temp, ans, i+1);
            temp.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>nums;
        vector<int>temp;
        
        for(int i=1;i<=9;i++)
        {
            nums.push_back(i);
        }
        
        solve(nums, k, n, temp, ans, 0);
        return ans;
    }
};