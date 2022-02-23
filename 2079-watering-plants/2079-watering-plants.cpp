class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        
        int n=p.size();
        int count=0;
        int cap=c;
        for(int i=0;i<n;i++){
            
            if(p[i]>cap){
                cap = c;
                count+=i;
                count+=i+1;
                
                cap-=p[i];
            }
            else{
                count++;
                cap -= p[i];
            }
            
        }
        return count;
    }
};