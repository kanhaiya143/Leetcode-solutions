class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        int i=1;
        while(1){
            if(mp.find(i)==mp.end()){
                return i;
            }
            i++;
        }
        return 0;
    }
};