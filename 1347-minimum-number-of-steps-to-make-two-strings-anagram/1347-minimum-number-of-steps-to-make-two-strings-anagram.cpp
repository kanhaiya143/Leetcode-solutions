class Solution {
public:
    int minSteps(string s, string t) {
        
        int h1[26]={0};
        int h2[26]={0};
        
        int n=s.size();
        
        for(int i=0;i<n;i++){
            h1[s[i]-'a']++;
            h2[t[i]-'a']++;
        }
        int c=0;
        for(int i=0;i<26;i++){
            c+=abs(h1[i]-h2[i]);
        }
        return c/2;
    }
};