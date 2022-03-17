class Solution {
public:
    string frequencySort(string s) {
        
        int n=s.size();
        
        priority_queue<pair<int,char>>pq;
        
        int h[62]={0};
        
        for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){
                h[s[i]-'a']++;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                h[s[i]-'A'+26]++;
            }
            else{
                h[s[i]-'0'+52]++;
            }
        }
        
        for(int i=0;i<62;i++){
            if(i<26)
            pq.push({h[i], i+'a'});
            else if(i>=52){
                pq.push({h[i], i+'0'-52});
            }
            else{
                pq.push({h[i], i+'A'-26});
            }
        }
        string ans="";
        
        while(!pq.empty()){
            
            int count=pq.top().first;
            while(count--){
                ans+=pq.top().second;
            }
            
            pq.pop();
            
        }
        return ans;
    }
};