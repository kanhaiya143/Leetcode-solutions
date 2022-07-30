class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        
        int n=ans.size();
        
        int start=0, end=0;
        int cnt=0;
        int maxi=0;
        while(start<n && end<n){
            if(ans[end]=='F'){
                cnt++;
            }
            
            while(start<n && cnt>k){
                if(ans[start]=='F')
                    cnt--;
                
                start++;
            }
            maxi=max(maxi, end-start+1);
            end++;
            
        }
        
        start=0, end=0, cnt=0;
        while(start<n && end<n){
            if(ans[end]=='T'){
                cnt++;
            }
            
            while(start<n && cnt>k){
                if(ans[start]=='T')
                    cnt--;
                
                start++;
            }
            maxi=max(maxi, end-start+1);
            end++;
            
        }
        return maxi;
        
    }
};