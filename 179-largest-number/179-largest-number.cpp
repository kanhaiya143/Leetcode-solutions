class Solution {
public:
    
    static bool comp(int a, int b){
        
        string x=to_string(a);
        string y=to_string(b);
        
        return x+y>y+x;
        
    }
    
    string largestNumber(vector<int>& nums) {
        
        int n=nums.size();
        string ans="";
        sort(nums.begin(),nums.end(), comp);
        string x, y;
       
        for(int i=0;i<n;i++){
            //cout<<nums[i]<<" ";
            ans+=to_string(nums[i]);
            if(ans[0]=='0'&& nums[i]==0)
                break;
        }
        return ans;
        
    }
};