class Solution {
public:
    bool dfs(int n,int m,int i,int j,string &word,vector<vector<char>>&board,int ci){
        if(ci>=word.length())return true;
        if(i>=n||i<0||j>=m or j<0 or board[i][j]!=word[ci])return false ;
        
        char temp=board[i][j];
        board[i][j]='.';
        bool found=dfs(n,m,i+1,j,word,board,ci+1) or dfs(n,m,i-1,j,word,board,ci+1) or dfs(n,m,i,j-1,word,board,ci+1) or dfs(n,m,i,j+1,word,board,ci+1) ;
        board[i][j]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]&&dfs(n,m,i,j,word,board,0)){
                    return true;
                }
            }
        }
        
        return false;
        
    }
};