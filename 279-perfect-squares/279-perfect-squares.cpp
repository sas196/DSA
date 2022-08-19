class Solution {
public:
    int helper(int n,vector<int>&pq){
        if(n<0)return 10000;
        if(n==0)return 0;
        if(pq[n]!=-1)return pq[n];
        int mini=100001;
        for(int i=sqrt(n);i>0;i--){
            
            int sq=1+helper(n-i*i,pq);
            mini=min(mini,sq);
        }
        return pq[n]=mini;
        
    }
    int numSquares(int n) {
        vector<int>pq(n+1,-1);
        return helper(n,pq);
        
    }
};