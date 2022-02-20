class Solution {
public:
    int minFlips(string t) {
        
        int cnt=0;
        
        int n=t.size();
        
        for(int i=0;i<n;i++){
            if(t[i]=='1' && (cnt&1)==0){
                cnt++;
            }
            else if(t[i]=='0' && (cnt&1)==1)
                cnt++;
        }
        return cnt;
    }
};