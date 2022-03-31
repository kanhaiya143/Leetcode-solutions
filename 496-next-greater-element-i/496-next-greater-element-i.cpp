class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        int n1=nums1.size();
        int n2=nums2.size();
        
        int dp[n2];
        
        stack<int>st;
    
        for(int i=0;i<n2;i++){
            
           if(st.empty()){
               st.push(i);
               continue;
           }
           if(!st.empty() && nums2[st.top()]>=nums2[i]){
                //cout<<i<<endl;
               st.push(i);
           }
           else{
               while(!st.empty() && nums2[st.top()]<nums2[i]){
                   dp[st.top()]=nums2[i];
                   st.pop();
               }
               st.push(i);
           }
          
        }
        while(!st.empty()){
            
            dp[st.top()]=-1;
            st.pop();
        }
        // for(int i=0;i<n2;i++){
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
        unordered_map<int,int>mp;
        for(int i=0;i<n2;i++){
            mp[nums2[i]]=dp[i];
        }
        vector<int>ans(n1);
        for(int i=0;i<n1;i++){
            ans[i]=mp[nums1[i]];
        }
        
        return ans;
    }
};