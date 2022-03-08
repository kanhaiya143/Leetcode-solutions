class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int x, int y, int n, int m){
        
        //cout<<vis[x][y]<<endl;
        if(x<0||y<0||x>=n||y>=m || board[x][y]!=word[0])
            return false;
        
        
        
        if(word.size()==1){
            
            return true;
        }
        
        char ch=board[x][y];
        board[x][y]='*';
        
        string s=word.substr(1,word.size()-1);
        bool ret = dfs(board, s, x+1, y, n, m) |
        dfs(board, s, x-1, y, n, m) |
        dfs(board, s, x, y+1, n, m) |
        dfs(board, s, x, y-1, n, m);
         
        board[x][y]=ch;
        return ret;

    }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=board.size();
        int m=board[0].size();
     
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){      
                if(board[i][j]==word[0]){
                        if(dfs(board, word, i, j, n, m))
                        return true;
                }
            }
        }
        
        return false;
    }
};