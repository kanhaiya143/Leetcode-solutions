class Solution {
public:
    string removeKdigits(string s, int k) {
        
        int n=s.size();
        
        stack<char>st;
        
        int i=0;
        
        
        while(i<n){
            while(!st.empty() && st.top()>s[i] && k>0){
                st.pop();
                k--;
            }
            if(!st.empty() || s[i]!='0'){
                st.push(s[i]);
            }
            i++;
        }
        string ans="";
        
        while(!st.empty() && k>0){
            k--;
            st.pop();
        }
        if(st.empty())
            return "0";
        else{
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
        
    }
};