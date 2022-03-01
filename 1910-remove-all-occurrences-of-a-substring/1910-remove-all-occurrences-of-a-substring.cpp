class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int n=s.size();
        int m=part.size();
        string temp;
        int i=0;
        while(i<s.size()){
            temp=s.substr(i,m);
            if(temp==part){
                s.erase(i,m);
                i=-1;
            }
            
            i++;
        }
        return s;
    }
};