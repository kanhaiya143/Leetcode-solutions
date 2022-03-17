class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        
        int n=score.size();
        
        vector<string>ans(n);
        
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        
        
       
           
           ans[pq.top().second]="Gold Medal";
           pq.pop();
        if(n==1)
            return ans;
           ans[pq.top().second]="Silver Medal";
           pq.pop();
        if(n==2)
            return ans;
           ans[pq.top().second]="Bronze Medal";
           pq.pop();
        if(n==3)
            return ans;
            
           int i=4;
           while(!pq.empty()){
               ans[pq.top().second]=to_string(i);
               pq.pop();
               i++;
           }
       
        return ans;
        
    }
};