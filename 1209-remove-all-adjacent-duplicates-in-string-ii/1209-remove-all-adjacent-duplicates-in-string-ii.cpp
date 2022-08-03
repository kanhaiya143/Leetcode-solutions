class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.size();
        
        stack<pair<char,int>>st;
        for(int i=0;i<n;i++){
            
            if(!st.empty() && st.top().first==s[i]){
                if(st.top().second+1==k){
                    st.pop();
                }
                else{
                    int count=st.top().second;
                    st.pop();
                    st.push({s[i],count+1});
                }
            }
            else{
                st.push({s[i],1});
            }
        }
        string ans="";
        
        while(!st.empty()){
            int count=st.top().second;
            while(count--)
            ans+=st.top().first;
            
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};