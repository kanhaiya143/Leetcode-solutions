class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini=prices[0];
        int n=prices.size();
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            mini=min(mini,prices[i]);
            
            maxi=max(maxi,prices[i]-mini);
        }
        return maxi;
    }
};