class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(t.size()!=s.size())
            return false;
        
        int h[26]={0};
        
        for(int i=0;i<s.size();i++){
            h[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            
            h[t[i]-'a']--;
            
        }
        
        for(int i=0;i<26;i++){
            if(h[i]!=0)
                return false;
        }
        return true;
    }
};