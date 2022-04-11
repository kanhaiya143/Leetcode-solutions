class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        int n=hand.size();
        
        if(n%g)
            return false;
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        
        while(mp.size()!=0){
            int start=mp.begin()->first;
            int size=g;
            while(size--){
                //cout<<start<<" ";
                if(mp.find(start)==mp.end())
                    return false;
                
                mp[start]--;
                
                if(mp[start]==0)
                    mp.erase(start);
                start++;
            }
        }
        return true;
        
        
    }
};