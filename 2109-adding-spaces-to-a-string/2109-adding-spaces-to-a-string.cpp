class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=spaces.size();
        
        int m=s.size();
        string ans="";
        int i=0,j=0;
        
        while(i<m){
            if(j<n&&i==spaces[j]){
                ans+=' ';
                j++;
            }
            ans+=s[i];
            i++;
        }
        return ans;
    }
};