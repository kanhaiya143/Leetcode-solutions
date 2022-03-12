class Solution {
public:
    int minSteps(string s, string t) {
        
        int n=s.size();
        int m=t.size();
        
        int h[26]={0};
        
        for(int i=0;i<n;i++){
            h[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            h[t[i]-'a']--;
        }
        
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=abs(h[i]);
        }
        return sum;
    }
};