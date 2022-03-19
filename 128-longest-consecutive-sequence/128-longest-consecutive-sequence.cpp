class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        int n=nums.size();
        if(n==0)
            return 0;
       
        unordered_set<int>st;
        
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int count=0;
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            
            if(st.find(nums[i])!=st.end()){
                count++;
                st.erase(nums[i]);
                
                int idxL=nums[i]-1;
                int idxR=nums[i]+1;
                
                while(st.find(idxL)!=st.end()){
                    count++;
                    st.erase(idxL);
                    idxL--;
                }
                while(st.find(idxR)!=st.end()){
                    count++;
                    st.erase(idxR);
                    idxR++;
                }
                maxi=max(maxi,count);
                count=0;
            }
        }
        
        
        return maxi;
        
    }
};