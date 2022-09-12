class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size(),rot=0,fresh=0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)fresh++;
                if(!visited[i][j] and grid[i][j]==2){
                    q.push({i,j});
                    visited[i][j]=1;
                }
            }
        }
        if(fresh==0)return 0;
        int ans=-1;
        vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        while(!q.empty()){
            int s=q.size();
            
            for(int i=0;i<s;i++){
            pair<int,int>p=q.front();
            int row=p.first;
            int col=p.second;
            
            q.pop();
            for(auto it:dirs){
                int nrow=row+it.first;
                int ncol=col+it.second;
                if(nrow>=0 and nrow<m and ncol>=0 and ncol<n and grid[nrow][ncol]==1 and !visited[nrow][ncol]){
                    visited[nrow][ncol]=1;
                    grid[nrow][ncol]=2;
                    q.push({nrow,ncol});
                }
            }    
         
        }
            fresh-=q.size();
            ans++;
        } 
        return fresh==0?ans:-1;
    }
};