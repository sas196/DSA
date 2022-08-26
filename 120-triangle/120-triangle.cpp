class Solution {
public:
    int solve(vector<vector<int>>& triangle,int i,int j,int m,int n,vector<vector<int>>&pq){
        // if(i>=m||j>=n)return 1e9;
        if(pq[i][j]!=-1)return pq[i][j];
        if(i==m-1)return triangle[i][j];
        
        return pq[i][j]=triangle[i][j]+min(solve(triangle,i+1,j,m,n,pq),solve(triangle,i+1,j+1,m,n,pq));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>pq(triangle.size()+1,vector<int>(triangle.size()+1,-1));
        
        return solve(triangle,0,0,triangle.size(),triangle[0].size(),pq);
        
    }
};