class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        
        string ans="";
        
        int h[26]={0};
        
        for(int i=0;i<n;i++){
            h[s[i]-'a']++;
        }
        
        priority_queue<pair<int,char>>pq;
        
        for(int i=0;i<26;i++){
            if(n%2==0 && h[i]>n/2){
                return "";
            }
            if(n%2==1 && h[i]>n/2+1){
                return "";
            }
            if(h[i]>0){
                pq.push({h[i],i+'a'});
            }
        }
        
        char c;
        int count;
        char c2;
        int count2;
        while(!pq.empty()){
            c=pq.top().second;
            count=pq.top().first;
            pq.pop();
            
            if(ans.size()==0){
                 ans+=c;
                count--;
                
                if(count>0){
                    pq.push({count,c});
                }
            }
            else if(ans.size()>0 && c!=ans[ans.size()-1]){
                ans+=c;
                count--;
                
                if(count>0){
                    pq.push({count,c});
                }
            }
            else{
                if(!pq.empty()){
                    c2=pq.top().second;
                    count2=pq.top().first;
                
                    pq.pop();
                    ans+=c2;
                    count2--;
                    if(count2>0){
                    pq.push({count2,c2});
                    }
                }
                else{
                    
                    return ans;
                }
              
                if(count>0){
                    pq.push({count,c});
                }
            }
            
           
            
        }
        return ans;
    }
};