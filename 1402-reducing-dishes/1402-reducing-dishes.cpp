class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        int n=sat.size();
        sort(sat.begin(), sat.end());
        
        int sum=0;
        int start;
        for(start=n-1;start>=0;start--){
            sum+=sat[start];
            if(sum<0)
                break;
            
        }
        start++;
        int k=1;
        sum=0;
        
        for(int i=start;i<n;i++){
            sum+=(k++)*sat[i];
        }
        return sum;
        
    }
};
// -9 -8 -1 0 5