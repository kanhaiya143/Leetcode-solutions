class Solution {
public:
    int numSplits(string s) {
        int n=s.size();
        
        int dpl[n];
        int dph[n];
        dpl[0]=1;
        dph[n-1]=1;
        
        unordered_set<char>st;
        
        for(int i=0;i<n;i++){
            
            st.insert(s[i]);
            dpl[i]=st.size();
        }
        st.clear();
        
        for(int i=n-1;i>=0;i--){
            
            st.insert(s[i]);
            dph[i]=st.size();
        }
        
        int count=0;
        for(int i=0;i<n-1;i++){
            if(dpl[i]==dph[i+1])
                count++;
        }
        return count;
    }
};