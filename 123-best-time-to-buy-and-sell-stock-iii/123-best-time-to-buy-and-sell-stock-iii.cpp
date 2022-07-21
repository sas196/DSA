class Solution {
public:
    
    int helper(vector<int>& prices,int ci,int n,int can,int trans,vector<vector<vector<int>>>&pq){
        if(ci>=n||trans==0)return 0;
        if(pq[ci][can][trans]!=-1)return pq[ci][can][trans];
        if(can){
            return pq[ci][can][trans]=max(-prices[ci]+helper(prices,ci+1,n,0,trans,pq),helper(prices,ci+1,n,1,trans,pq));
        }
        else{
            return pq[ci][can][trans]=max(prices[ci]+helper(prices,ci+1,n,1,trans-1,pq),helper(prices,ci+1,n,0,trans,pq));
        }
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>pq(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return helper(prices,0,prices.size(),1,2,pq);
    }
};