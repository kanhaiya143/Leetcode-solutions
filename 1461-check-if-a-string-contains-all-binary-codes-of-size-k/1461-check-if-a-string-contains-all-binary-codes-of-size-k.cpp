class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        unordered_set<string>st;
        
        string temp="";
        for(int i=0;i<n && i<k;i++){
            temp+=s[i];
        }
        st.insert(temp);
        
        for(int i=k;i<n;i++){
            temp=temp.substr(1,temp.size()-1);
            temp+=s[i];
            st.insert(temp);
        }
        int count=pow(2,k);
        if(st.size()==count)
            return true;
        return false;
        
    }
};