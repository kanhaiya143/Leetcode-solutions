class Solution {
public:
    int checkValid(string s, unordered_map<char,int>&mp, vector<int>score){
        int n=s.size();
        int sum=0;
        
        for(int i=0;i<n;i++){
            if(mp[s[i]]>0){
                sum+=score[s[i]-'a'];
                mp[s[i]]--;
            }
            else{
                return 0;
            }
        }
        return sum;
    }
    int maxScoreWords(vector<string>& w, vector<char>& l, vector<int>& score) {
        int n=w.size();
        int len=l.size();
        
        unordered_map<char,int>mp, mpcopy;
        for(int i=0;i<len;i++){
            mp[l[i]]++;
        }
        
        mpcopy=mp;
        
        int maxi=0;
        int sum=0;
        
        int total=pow(2,n);
        int val;
        
        for(int i=0;i<total;i++){
            val=i;
            sum=0;
            for(int j=0;j<n;j++){
                
                if(val%2){
                    sum+=checkValid(w[j], mp, score);
                }
                val/=2;
            }
            mp=mpcopy;
            maxi=max(maxi, sum);
        }
        return maxi;
        
    }
};