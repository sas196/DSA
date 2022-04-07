class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int m,int n,int s1,int s2,vector<vector<int>>&pq){
        if(s1==m-1 && s2==n-1&&obstacleGrid[s1][s2]!=1){
            return 1;
        }
           if(s1>=m ||s2>=n||obstacleGrid[s1][s2]==1){
               return 0;
           }
        if(pq[s1][s2]!=-1){
            return pq[s1][s2];
        }
         pq[s1][s2]=helper(obstacleGrid,m,n,s1+1,s2,pq)+helper(obstacleGrid,m,n,s1,s2+1,pq);
        return pq[s1][s2];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
         vector<vector<int>>pq(m+1,vector<int>(n+1,-1));
         if(obstacleGrid[m-1][n-1]==1||obstacleGrid[0][0]==1){
            return 0;
        }
        return helper(obstacleGrid,m,n,0,0,pq);
        
        
        
    }
};