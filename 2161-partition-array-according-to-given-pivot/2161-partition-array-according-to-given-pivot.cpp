class Solution {
public:
    vector<int> pivotArray(vector<int>& a, int pivot) {
        int n=a.size();
        vector<int>gr;
        vector<int>ls;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            if(a[i]>pivot)
                gr.push_back(a[i]);
            else if(a[i]==pivot)
                cnt++;
            else
                ls.push_back(a[i]);
        }
        int x=0;
        
        for(int i=0;i<ls.size();i++)
            a[x++]=ls[i]; 
        
        while(cnt--)
            a[x++]=pivot;
        
       
        for(int i=0;i<gr.size();i++)
            a[x++] = gr[i];
        
        return a;
    }
};