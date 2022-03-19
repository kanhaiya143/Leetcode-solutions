class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<char>st;
        
        string ans="";
        for(int i=0;i<n;i++){
            
            if(s[i]!=']'){
               
                st.push(s[i]);
            }
            
            else{
                string temp="";
                while(!st.empty() && st.top()!='['){
                    temp+=st.top();
                    st.pop();
                }
                //cout<<temp<<endl;
                reverse(temp.begin(),temp.end());
                string num="";
                st.pop();
                while(!st.empty() && st.top()>='0' && st.top()<='9'){
                    num+=st.top();
                    st.pop();
                }
                //cout<<num<<endl;
                reverse(num.begin(),num.end());
                int x=stoi(num);
                
                for(int i=0;i<x;i++){
                    for(int j=0;j<temp.size();j++){
                        st.push(temp[j]);
                    }
                }
                
                
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};