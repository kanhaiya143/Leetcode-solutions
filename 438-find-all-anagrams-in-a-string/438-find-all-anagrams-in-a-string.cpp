class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n=s.size();
        int m=p.size();
        
        if(m>n)
            return {};
        
        vector<int>hp(26,0);
        vector<int>hs(26,0);
        
        
        for(int i=0;i<m;i++){
            hp[p[i]-'a']++;
            hs[s[i]-'a']++;
        }
        
        
        vector<int>ans;
        //string temp=s.substr(0,m);
        if(hp==hs){
           ans.push_back(0);
        }
        
        for(int i=1;i<n-m+1;i++){
            
            hs[s[i-1]-'a']--;
            hs[s[i+m-1]-'a']++;
            if(hp==hs){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};