class Solution {
public:
    vector<string>mp={"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void combination(int n, string digits, int count, vector<string>&ans, string temp){
        
        if(count==n){
            ans.push_back(temp);
            return;
        }
        //cout<<"LAL"<<endl;
        for(auto c:mp[digits[count]-'0']){
            
            temp.push_back(c);
            combination(n,digits,count+1,ans,temp);
            temp.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
     
        int n=digits.size();
        if(n==0)
            return {};
        
        vector<string>ans;
        string temp="";
        
        combination(n,digits,0,ans,temp);
        
        return ans;
    }
};