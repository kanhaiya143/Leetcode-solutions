class Solution {
public:
    string shortestPalindrome(string s) {
        
        string r=s;
        reverse(r.begin(),r.end());
        
        string str = s + "#" + r;
        
        int len=str.size();
        
        vector<int>lps(len,0);
        lps[0]=0;
        //cout<<str<<endl;
        int start=0, end=1;
        
        while(end<len){
            
            if(str[start]==str[end]){
                lps[end]=start+1;
                
                end++;
                start++;
                
            }
            else{
                
                if(start==0)
                    end++;
                else{
                    start=lps[start-1];
                }
            }
        }
        //cout<<lps[len-1]<<endl;
        
        //cout<<r<<endl;
        string append=r.substr(0,r.size()-lps[len-1]);
        //cout<<append<<endl;
        
        return append+s;
            
        
    }
};

// abcd

// dcbaabcd

// abcd dcba

// aacecaaa 
// aaacecaa

//aaacecaa aacecaaa 
// aacecaaa  #  aaacecaa
