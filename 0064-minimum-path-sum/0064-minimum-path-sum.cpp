class Solution {
public:
    int helper(vector<vector<int>>& grid,int i,int j,int n,int m,vector<vector<int>>& pq){
        if(i>=n or j>=m)return INT_MAX;
         if(i==n-1 and j==m-1)return grid[i][j];
        if(pq[i][j]!=-1)return pq[i][j];
       return pq[i][j]=grid[i][j]+min(helper(grid,i+1,j,n,m,pq),helper(grid,i,j+1,n,m,pq));
        
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid[0].size();
        int n=grid.size();
        vector<vector<int>>pq(n+1,vector<int>(m+1,-1));
        return helper(grid,0,0,n,m,pq);
        
    }
};