class Solution {
public:
    void dfs(int curr_row,int curr_col,vector<vector<char>>& grid,int m,int n){
        //int n=grid.size();
        if(curr_row>=n||curr_row<0||curr_col>=m||curr_col<0)return;
        if(grid[curr_row][curr_col]=='0')return;
        grid[curr_row][curr_col]='0';
        dfs(curr_row+1,curr_col,grid,m,n);
        dfs(curr_row-1,curr_col,grid,m,n);
        dfs(curr_row,curr_col+1,grid,m,n);
        dfs(curr_row,curr_col-1,grid,m,n);
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                dfs(i,j,grid,m,n);
                ans++;
                }
            }
        }
        return ans;
    }
};