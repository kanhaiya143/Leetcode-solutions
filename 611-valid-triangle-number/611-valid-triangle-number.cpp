class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        int count=0;
        for(int i=n-1;i>=2;i--){
            
            int l=0;
            int h=i-1;
            
            while(l<h){
                //cout<<l<<" "<<h<<endl;
                if(nums[l]+nums[h]>nums[i]){
                    //cout<<h<<" "<<l<<endl;
                    count+=h-l;
                    //cout<<count<<endl;
                    h--;
                   
                }
                else{
                    l++;
                }
            }
            
        }
        return count;
        
    }
};

