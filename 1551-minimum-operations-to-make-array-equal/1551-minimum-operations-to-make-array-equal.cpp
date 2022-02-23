class Solution {
public:
    int minOperations(int n) {
        
        if(n&1){
            return (n/2 * (n/2+1));
           
        }
        else
             return (n/2 * (n/2-1)) + n/2;
        
        return 0;
    }
};