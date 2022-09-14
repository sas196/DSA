class Solution {
public:
    void dfs(vector<vector<char>>&board,int m,int n,int i,int j){
        if(i<0 or i>=m or j<0 or j>=n or board[i][j]=='1' or board[i][j]=='X'){
            return ;
        }
        board[i][j]='1';
        dfs(board,m,n,i+1,j);
        dfs(board,m,n,i-1,j);
        dfs(board,m,n,i,j-1);
        dfs(board,m,n,i,j+1);
        return ;
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
             if(board[i][0]=='O'){
                    dfs(board,m,n,i,0);
                }
        }
        for(int i=0;i<n;i++){
             if(board[0][i]=='O'){
                    dfs(board,m,n,0,i);
                }
        }
        for(int i=0;i<m;i++){
             if(board[i][n-1]=='O'){
                    dfs(board,m,n,i,n-1);
                }
        }
        for(int i=0;i<n;i++){
             if(board[m-1][i]=='O'){
                    dfs(board,m,n,m-1,i);
                }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='1'){
                    board[i][j]='O';
                }
                
            }
        }
        return ;
    }
};