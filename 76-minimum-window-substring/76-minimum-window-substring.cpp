class Solution {
public:
    bool check(vector<int>shash, vector<int>hash){
        
        for(int i=0;i<52;i++){
            if(hash[i]>shash[i])
                return false;
        }
        
        return true;
        
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        vector<int>hash(52,0),shash(52,0);
        
        for(int i=0;i<m;i++){
            if(t[i]>='a'&&t[i]<='z'){
                hash[t[i]-'a']++;
            }
            else{
                hash[t[i]-'A'+26]++;
            }
        }
        
        int start=0, end=0;
        string cur="";
        
        int mini=INT_MAX;
        string ans="";

        
        while(start<n && end<n){
            cur+=s[end];
            if(s[end]>='a'&&s[end]<='z'){
                shash[s[end]-'a']++;
                if(hash[s[end]-'a']==0){
                    end++;
                    continue;
                }
            }
            else{
                shash[s[end]-'A'+26]++;
                 if(hash[s[end]-'A'+26]==0){
                    end++;
                    continue;
                }
            }

            while(check(shash, hash)){
               
                if(mini>cur.size()){
                    mini=cur.size();
                    ans=cur;
                }
                //cur=cur.substr(1,cur.size());
                cur.erase(0,1);
                if(s[start]>='a'&&s[start]<='z')
                shash[s[start]-'a']--;
                else
                shash[s[start]-'A'+26]--;
                
                start++;
                
            }
            end++;
            
        }
        return ans;
    }
};