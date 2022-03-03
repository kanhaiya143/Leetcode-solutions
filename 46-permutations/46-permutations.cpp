class Solution {
public:
    
    void per(vector<int>nums, vector<vector<int>>&ans, int begin){
        
        if(begin>nums.size()){
            return;
        }
        if(begin==nums.size()){
            ans.push_back(nums);
        }
        
        for(int i=begin;i<nums.size();i++){
            //cout<<begin<<" "<<nums[begin]<<" "<<i<<" "<<nums[i]<<endl; 
            swap(nums[begin],nums[i]);
            per(nums,ans,begin+1);
            swap(nums[begin],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        
        per(nums,ans,0);
        return ans;
    }
};