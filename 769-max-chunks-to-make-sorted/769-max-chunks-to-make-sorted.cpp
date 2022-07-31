class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int n=arr.size();
        int maxReach=0;
        int currReach=0;
        int jump=0;
  
        for(int i=0;i<n;i++){
            maxReach=max(maxReach, arr[i]);
            
            if(i==maxReach){
                jump++;
            }
        }

        return jump;
    }
};