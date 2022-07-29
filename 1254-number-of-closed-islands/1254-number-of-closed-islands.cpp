class Solution {
public:
    
    
    
     void dfs(int curr_row,int curr_col,vector<vector<int>>& grid,int m,int n){
        //int n=grid.size();
        if(curr_row>=n||curr_row<0||curr_col>=m||curr_col<0)return;
        if(grid[curr_row][curr_col]==1)return;
        grid[curr_row][curr_col]=1;
        dfs(curr_row+1,curr_col,grid,m,n);
        dfs(curr_row-1,curr_col,grid,m,n);
        dfs(curr_row,curr_col+1,grid,m,n);
        dfs(curr_row,curr_col-1,grid,m,n);
        return ;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size(),ans=0;
        if(n==1 and m==1)return 0;
        
            for(int j=0;j<m;j++){
                if(grid[0][j]==0){
                dfs(0,j,grid,m,n);
                }
            }
        for(int j=0;j<m;j++){
                if(grid[n-1][j]==0){
                dfs(n-1,j,grid,m,n);
                }
            }
        for(int j=0;j<n;j++){
                if(grid[j][0]==0){
                dfs(j,0,grid,m,n);
                }
            }
         for(int j=0;j<n;j++){
                if(grid[j][m-1]==0){
                dfs(j,m-1,grid,m,n);
                }
            }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    dfs(i,j,grid,m,n);
                    ans++;
                }
            }
        }
        return ans;
    
        
    }
};