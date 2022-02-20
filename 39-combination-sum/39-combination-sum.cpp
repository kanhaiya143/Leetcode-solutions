class Solution {
public:
    void combo(vector<vector<int>>& ans, vector<int>temp, vector<int>& can, int target, int idx)
    {
        //cout<<can[idx]<<" "<<target<<endl;
        if(target==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i = idx; i<can.size() && can[i]<=target; i++){
            temp.push_back(can[i]);
            combo(ans, temp, can, target-can[i], i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
     
        int n=can.size();
        sort(can.begin(), can.end());
        
        vector<vector<int>>ans;
        vector<int>temp;
        
        combo(ans, temp, can, target,0);
        return ans;
    }
};