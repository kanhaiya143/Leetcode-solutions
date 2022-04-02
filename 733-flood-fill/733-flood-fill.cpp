class Solution {
public:
    int xinc[4]={0,0,1,-1};
    int yinc[4]={1,-1,0,0};
    void flood(vector<vector<int>>& image, int sr, int sc, int newColor, int n, int m, int oldColor){
        
        if(sr<0||sc<0||sr>=n||sc>=m||image[sr][sc]!=oldColor)
            return;
        //cout<<image[sr][sc]<<endl;
        image[sr][sc]=newColor;
        
        for(int i=0;i<4;i++){
            flood(image,sr+xinc[i],sc+yinc[i],newColor,n,m,oldColor);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int n=image.size();
        int m=image[0].size();
        
        int oldColor=image[sr][sc];
        
        if(oldColor!=newColor)
        flood(image,sr,sc,newColor,n,m,oldColor);
     
        
        return image;
    }
};