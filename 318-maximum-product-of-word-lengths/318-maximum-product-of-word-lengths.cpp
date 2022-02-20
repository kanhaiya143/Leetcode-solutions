class Solution {
public:
    int maxProduct(vector<string>& w) {
        
        int n=w.size();
        int maxi=0;
        unordered_set<char>st;
        int flag=0;
        
        for(int i=0;i<n;i++){
            st.clear();
            for(int k=0;k<w[i].size();k++){
                    st.insert(w[i][k]);
            }
            for(int j=0;j<n;j++){  
                flag=0;
                for(int k=0;k<w[j].size();k++){
                    if(st.find(w[j][k])!=st.end()){
                        flag=1;
                        break;}
                } 
                if(flag==0){
                    if(w[i].size()*w[j].size() > maxi)
                    maxi=w[i].size()*w[j].size();
                }
            }
            
        }
        return maxi;
        
    }
};