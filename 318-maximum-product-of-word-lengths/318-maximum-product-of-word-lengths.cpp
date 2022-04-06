class Solution {
public:
    int maxProduct(vector<string>& str) {
  map<string, vector<int>>mp;
 
    int n=str.size();
    
    for(int i=0;i<n;i++){
        vector<int>temp(26);
        for(int j=0;j<str[i].size();j++){
            temp[str[i][j]-'a']++;
        }
        mp[str[i]]=temp;
      
        temp.clear();
    }
 
    int maxi=0;
    int flag=0;
        
     vector<int>a,b;
    for(int i=0;i<n-1;i++){
       
        for(int j=i+1;j<n;j++){
            flag=0;
            a = mp[str[i]];
            b = mp[str[j]];
            
            for(int k=0;k<26;k++){
                
                if(a[k]>0 && b[k]>0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                if(maxi<(str[i].size())*(str[j].size()))
                maxi=(str[i].size())*(str[j].size());
            }
            
        }
    }
        return maxi;
        
    }
};