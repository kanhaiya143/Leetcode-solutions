class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int sum=0;
        priority_queue<pair<int,int>>pq;
        
        for(int i=0;i<n;i++){
            pq.push({(costs[i][1]-costs[i][0]),i});
        }
        for(int i=0;i<n/2;i++){
            sum+=costs[pq.top().second][0];
            pq.pop();
        }
        for(int i=0;i<n/2;i++){
            sum+=costs[pq.top().second][1];
            pq.pop();
        }
        return sum;
        
    }
};