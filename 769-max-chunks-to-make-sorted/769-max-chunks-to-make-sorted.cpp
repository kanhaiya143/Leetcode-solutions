class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int n=arr.size();
        int maxReach=0;
        int chunk=0;
  
        for(int i=0;i<n;i++){
            maxReach=max(maxReach, arr[i]);
            
            if(i==maxReach){
                chunk++;
            }
        }

        return chunk;
    }
};