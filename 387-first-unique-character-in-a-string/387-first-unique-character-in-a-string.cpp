class Solution {
public:
    int firstUniqChar(string s) {
        
        int n=s.size();
        unordered_map<char,int>st;
        int h[26]={0};
        
        for(int i=0;i<n;i++){
            st[s[i]]=i;
            h[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(h[s[i]-'a']==1){
                return st[s[i]];
            }
        }
        
        return -1;
    }
};