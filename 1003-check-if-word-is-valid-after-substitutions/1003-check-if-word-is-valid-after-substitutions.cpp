class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        
        stack<char>st;
        

        for(int i=0;i<n;i++){
            if(!st.empty() && st.size()>=2 && s[i]=='c'){
                
                char b=st.top();
                st.pop();
                char a=st.top();
                st.pop();
               
                if(a!='a' || b!='b'){
                    st.push(a);
                    st.push(b);
                    st.push(s[i]);
                }
                
            }
            else{
                st.push(s[i]);
            }

        }
        
        if(st.size()==0)
            return true;
        return false;
        
    }
};