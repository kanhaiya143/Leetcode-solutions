class Solution {
public:
    void gen(vector<string>& v, string str, int x, int y, int n){
        
        if(str.size()==2*n)
        {
            v.push_back(str);
            return;
        }
        if(x<n)
            gen(v, str+'(', x+1, y, n);
        if(y<x)
            gen(v, str+')', x, y+1, n);
    }
    vector<string> generateParenthesis(int n) {
     
        vector<string>v;
        gen(v, "" , 0, 0, n);
        return v;
    }
};