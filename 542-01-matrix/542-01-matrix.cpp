class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>q;
       
        int m=mat.size();
        int n=mat[0].size();
         vector<vector<int>>visited(m,vector<int>(n,-1));
        vector<pair<int,int>>pq={{-1,0},{1,0},{0,1},{0,-1}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    visited[i][j]=0;
                    q.push({i,j});
                }
            }
        }
       while(!q.empty()){
           pair<int,int>p=q.front();
           int row=p.first;
           int col=p.second;
           q.pop();
           for(auto it:pq){
               int nr=row+it.first;
               int nc=col+it.second;
               if(nr>=0 and nr<m and nc>=0 and nc<n and visited[nr][nc]==-1){
                   visited[nr][nc]=visited[row][col]+1;
                   q.push({nr,nc});
               }
               
           }
       } 
        return visited;
        
    }
};