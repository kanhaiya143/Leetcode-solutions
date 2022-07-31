class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int count0=0, count1=0;
        
        
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                count0++;
            }
            else{
                count1++;
            }
            count0=min(count0,count1);
        }
        return count0;
        
    }
};