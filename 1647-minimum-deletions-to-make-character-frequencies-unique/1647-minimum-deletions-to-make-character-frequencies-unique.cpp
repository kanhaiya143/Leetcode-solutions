class Solution {
public:
    int minDeletions(string s) {
        
        int n=s.size();
        int h[26]={0};
        for(int i=0;i<n;i++){
            h[s[i]-'a']++;
        }
        int count=0;
        sort(h,h+26);
        unordered_map<int,int>mp;
       
        
        for(int i=0;i<26;i++){
            if(h[i]!=0){
               mp[i]=h[i];
            }
        }
        unordered_set<int>st;
        for(auto it:mp){
            //cout<<it.second<<endl;
            while(st.find(it.second)!=st.end()){
                count++;
                it.second--;
            }
            
            if(it.second>0)
                st.insert(it.second);
        }
        
       
        return count;
    }
};