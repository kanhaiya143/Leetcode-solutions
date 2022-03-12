class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mp;
        
        
        int n=s.size();
        if(n<2)
            return n;
        
        int i=0;
        int j=0;
        int maxi=1;
        
        while(i<n && j<n){
            if(mp.find(s[i])!=mp.end()){
                mp[s[j]]--;

                if(mp[s[j]]==0)
                    mp.erase(s[j]);
                
                j++;
               
            }
            else{
                mp[s[i]]++;
                i++;
            }
            maxi=max(maxi,i-j);
          
        }
        
        return maxi;
    }
};