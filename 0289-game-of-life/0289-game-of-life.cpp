class Solution {
public:
    int count_live(int i,int j,int m,int n,vector<vector<int>>& board){
        int ct=0;
        int arr[]={-1,0,1};
        for(int k=0;k<3;k++){
            for(int l=0;l<3;l++){
                int nr=i+arr[k];
                int nc=j+arr[l];
                if(nr>=0 and nr<m and nc>=0 and nc<n and board[nr][nc]==1)ct++;
            }
        }
        return ct-board[i][j];
    }
    void gameOfLife(vector<vector<int>>& board) {
       // vector<vector<int>>& temp;
        
        
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=board[i][j];
            }
        }
       // cout<<count_live(,2,m,n,board);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==0){
                    int c=count_live(i,j,m,n,ans);
                    if(c==3){
                      board[i][j]=1;  
                    }
                }
                else{
                 int c=count_live(i,j,m,n,ans);
                    if(c<2 or c>3){
                        board[i][j]=0;
                    }
                     else board[i][j]=1;
                    
                }
            }
        }
        //return board;
        
    }
};