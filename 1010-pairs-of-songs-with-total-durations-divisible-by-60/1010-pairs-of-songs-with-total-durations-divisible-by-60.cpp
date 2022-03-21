class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        
        int n=time.size();
        
        unordered_map<int,long>mp;
        for(int i=0;i<n;i++){
            time[i]=time[i]%60;
            mp[time[i]]++;
        }
        
        
        long count=0;
        
        for(int i=0;i<n;i++){
            
            if(time[i]!=30 && mp.find(60-time[i])!=mp.end()){
                //cout<<time[i]<<" "<<mp[60-time[i]]<<endl;
                count+=mp[time[i]]*mp[60-time[i]];
                mp.erase(60-time[i]);
                mp.erase(time[i]);
            }
        }
        //cout<<count<<endl;
        count+=((mp[30] * (mp[30]-1))/2);
        //cout<<mp[0]<<endl;
        count+=((mp[0] * (mp[0]-1))/2);
        return count;
        
    }
};

// 30 20 30 40 40
    
// 20 30 30 40 40