class Solution {
public:
    int longestValidParentheses(string s) {
        
        int n=s.size();
        
        stack<int>st;
        st.push(-1);
        
        int maxi=0;
        for(int i=0;i<n;i++){
            
            if(s[i]=='(')
                st.push(i);
            
            else{
                if(st.top()!=-1 && s[st.top()]=='(' && s[i]==')')
                {
                    st.pop();
                    maxi=max(maxi, i-st.top());
                    
                }
                else
                    st.push(i);
              
            }
        }
        return maxi;
    }
};