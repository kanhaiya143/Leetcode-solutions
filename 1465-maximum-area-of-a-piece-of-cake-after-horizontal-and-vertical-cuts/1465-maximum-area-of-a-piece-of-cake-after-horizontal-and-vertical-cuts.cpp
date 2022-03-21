class Solution {
public:
    long int mod = 1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        int maxHdiff=0;
        int maxVdiff=0;
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        maxHdiff=max(horizontalCuts[0],h-horizontalCuts[horizontalCuts.size()-1]);
        maxVdiff=max(verticalCuts[0],w-verticalCuts[verticalCuts.size()-1]);
        
        for(int i=0;i<horizontalCuts.size()-1;i++){
            maxHdiff=max(maxHdiff, horizontalCuts[i+1]-horizontalCuts[i]);
        }
        
        for(int i=0;i<verticalCuts.size()-1;i++){
            maxVdiff=max(maxVdiff, verticalCuts[i+1]-verticalCuts[i]);
        }
        
        return (int)(maxHdiff%mod * maxVdiff%mod);
    }
};