class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        int balanced=0;
        int j=0;
        int count=0;
        j=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='['){
                balanced++;
            }
            else
                balanced--;
            
            if(balanced<0){
                
                while(j>i && s[j]!='['){
                    j--;
                }
                swap(s[i],s[j]);
                count++;
                balanced=1;
            }
        }
     
        return count;
    }
};



    
