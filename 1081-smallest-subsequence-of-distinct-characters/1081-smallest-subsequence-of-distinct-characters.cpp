class Solution {
public:
    string smallestSubsequence(string s) {
        int lastOcr[26]={0};
        int vis[26]={0};
        
        int n=s.size();
        
        for(int i=0;i<n;i++){
            lastOcr[s[i]-'a']=i;
        }
        
        stack<char>st;
        
        for(int i=0;i<n;i++){
            if(vis[s[i]-'a'])
                continue;
            
//             if(st.empty()){
//                 st.push(s[i]);
//                 vis[s[i]-'a']=1;
//             }
            while(!st.empty() && lastOcr[st.top()-'a']>i && st.top()>s[i]){
                vis[st.top()-'a']=0;
                st.pop();
   
            }
            st.push(s[i]);
            vis[s[i]-'a']=1;
            
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
    }
};