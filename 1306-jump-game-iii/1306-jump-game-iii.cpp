class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        
        queue<pair<int,int>>q;
        q.push({start, arr[start]});
        
        
        while(!q.empty()){
            pair<int,int>temp=q.front();
            q.pop();
            
            int idx=temp.first;
            int val=temp.second;
            
            arr[idx]*=-1;
            if(val==0)
                return true;
            if(val<0){
                continue;
            }
           
            if(idx+val<n)
                q.push({idx+val, arr[idx+val]});
            
            if(idx-val>=0)
                q.push({idx-val, arr[idx-val]});
            
        }
        return false;
    }
};