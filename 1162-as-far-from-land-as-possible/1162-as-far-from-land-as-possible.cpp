class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,-1));
        vector<vector<int>>dummy(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                    dummy[i][j]=0;
                }
                else {
                    dummy[i][j]=1;
                }
            }
        }
        int maxi=-1;
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            int r=p.first;
            int c=p.second;
            int dx[]={-1,0,1,0};
            int dy[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr>=0 and nr<m and nc>=0 and nc<n and vis[nr][nc]==-1 and grid[nr][nc]==0){
                    vis[nr][nc]=1;
                    dummy[nr][nc]=1+dummy[r][c];
                    maxi=max(maxi,dummy[nr][nc]);
                    q.push({nr,nc});
                }
            }
        }
        return maxi;
    }
};