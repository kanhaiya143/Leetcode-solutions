class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s=to_string(n);
        int l=s.size()-1;
        
        int last;
        
        while(l>=1){
            if(s[l-1]>s[l]){
                s[l-1]-=1;
                last=l;
            }
            
            l--;
        }
        
        for(int i=last;i<s.size();i++){
            //cout<<"i"<<endl;
            s[i]='9';
        }
        return stoi(s);
    }
};

/*
4 6 3 8
4 5 9 9
*/