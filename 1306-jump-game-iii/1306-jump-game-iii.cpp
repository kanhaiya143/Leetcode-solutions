class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        
        queue<int>q;
        q.push(start);
        
        
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            
            int idx=temp;
            int val=arr[idx];
            
            arr[idx]*=-1;
            if(val==0)
                return true;
            if(val<0){
                continue;
            }
           
            if(idx+val<n)
                q.push(idx+val);
            
            if(idx-val>=0)
                q.push(idx-val);
            
        }
        return false;
    }
};