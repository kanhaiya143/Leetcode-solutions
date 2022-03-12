class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;
        int n=words.size();
        
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        
        vector<vector<string>>bucket(n);
        
        for(auto it:mp){
            bucket[it.second].push_back(it.first);
        }
        
        reverse(bucket.begin(),bucket.end());
        vector<string>ans;
        
        for(auto it:bucket){
            
            sort(it.begin(),it.end());
            
            for(int i=0;i<it.size();i++){
                
                ans.push_back(it[i]);
                
                if(ans.size()==k)
                    return ans;
            }
        }
        return ans;
    }
    
};