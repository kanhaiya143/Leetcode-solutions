class Solution {
public:
    long long smallestNumber(long long num) {
        
        string s=to_string(num);
        if(num==0)
            return num;
        
        int n=s.size();
        
        if(s[0]=='-'){
            string k=s.substr(1,s.size());
            sort(k.begin(),k.end(),greater<int>());
            
            long long x=stoll(k);
            return -1*x;
        }
        else{
            sort(s.begin(),s.end());
            
            int idx=0;
            while(idx<n && s[idx]=='0'){
                idx++;
            }
            if(s[0]=='0')
            swap(s[0],s[idx]);
            
            long long x=stoll(s);
            return x;
        }
        
        return 0;
        
    }
};