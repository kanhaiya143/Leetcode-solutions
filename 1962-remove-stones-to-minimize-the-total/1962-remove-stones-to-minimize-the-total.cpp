class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        int n=piles.size();
        priority_queue<int>pq;
        
        int tsum=0;
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
            tsum+=piles[i];
        }
        
        while(!pq.empty() && k>0){
            int value=pq.top();
            pq.pop();
            
            tsum-=value/2;
            k--;
            
            if((value+1)/2){
                pq.push((value+1)/2);
            }
        }
        
        return tsum;
    }
};