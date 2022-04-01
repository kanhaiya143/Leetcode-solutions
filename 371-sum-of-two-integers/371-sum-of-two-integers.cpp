class Solution {
public:
    int getSum(int a, int b) {
        int f=0;
        if(b<0)
            f=1;
        b=abs(b);
        while(b--){
            if(f==0)
            a++;
            else
                a--;
        }
        return a;
    }
};