class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int ans=-1;
        int n=gas.size();
        int fuel;
        int tIdx;
        int count=0;
        int k=0;
        int j=0;
        for(int i=0;i<n;i+=j+1){
            
            fuel=0;
            count=0;
            for(j=0;j<n;j++){
                k=(i+j)%n;
                
                fuel+=gas[k]-cost[k];
                
                if(fuel<0)
                    break;
                
                count++;
            }
            if(count==n)
                return i;
        }
        
        return ans;
    }
};