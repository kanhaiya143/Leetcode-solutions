class Solution {
public:
    vector<int> partitionLabels(string s) {
        int hash[26]={0};
        
        int n=s.size();
        
        for(int i=0;i<n;i++){
            hash[s[i]-'a']=i;
        }
        vector<int>ans;
        int maxIdx=INT_MIN;
        int i=0;
        int j=0;
        for(i=0;i<n;i++){
            
            maxIdx=INT_MIN;
            for(j=i;j<n;j++){
                maxIdx=max(maxIdx,hash[s[j]-'a']);
            
                if(j==maxIdx){
                    //cout<<i<<" "<<maxIdx<<endl;
                    ans.push_back(j-i+1);
                    i+=(j-i);
                    break;
                }
            }
            
        }
       
        return ans;
    }
};