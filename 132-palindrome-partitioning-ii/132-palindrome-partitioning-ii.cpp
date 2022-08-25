class Solution {
public:
    bool isp(string &s, int start, int end) {
        
        while(start < end) {
            
            if(s[start] != s[end]) return false;
            
            start += 1;
            end -= 1;
            
        }
        
        return true;
        
    }
    int solve (string &s,int i,int j,vector<vector<int>>&pq){
        if(pq[i][j]!=-1)return pq[i][j];
        if(i>=j)return pq[i][j]=0;
        if(isp(s,i,j))return pq[i][j]=0;
       
        int mini=INT_MAX;
        for(int k=i;k<j;k++){
            if(isp(s,i,k)==false)continue;
            int temp=solve(s,i,k,pq)+1+solve(s,k+1,j,pq);
            mini=min(mini,temp);
        }
        return pq[i][j]=mini;
    }
    int minCut(string &s) {
        int n=s.size();
        vector<vector<int>>pq(n+1,vector<int>(n+1,-1));
        return solve(s,0,n-1,pq);
        
    }
};