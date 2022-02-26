class Solution {
public:
    map<string,vector<string>>mp;
    void preGroup(string str)
    {
        string lstr=str;
        sort(lstr.begin(),lstr.end());
        
        mp[lstr].push_back(str);
        
    }
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        
        int n=s.size();
        int hash[26]={0};
        
        for(int i=0;i<n;i++){
            preGroup(s[i]);
        }
        vector<vector<string>>ans;
        
        vector<string>temp;
        for(auto it:mp){
            for(int i=0;i<it.second.size();i++){
                temp.push_back(it.second[i]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};