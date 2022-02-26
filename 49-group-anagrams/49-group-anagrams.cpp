class Solution {
public:
    unordered_map<string,vector<string>>mp;
    void preGroup(string str)
    {
        string lstr=str;
        sort(lstr.begin(),lstr.end());
        
        mp[lstr].push_back(str);
        
    }
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        
        int n=s.size();
        
        
        for(int i=0;i<n;i++){
            preGroup(s[i]);
        }
        vector<vector<string>>ans;
     
        for(auto it:mp){
           
                ans.push_back(it.second);
            
            
        }
        return ans;
    }
};