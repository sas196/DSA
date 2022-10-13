class Solution {
public:
    int helper(vector<int>& prices,int ci,int n,int canbuy,vector<vector<int>>&pq){
        if(ci==n)return 0;
        if(pq[ci][canbuy]!=-1)return pq[ci][canbuy];
        if(canbuy==0){
            int take=-prices[ci]+helper(prices,ci+1,n,!canbuy,pq);
            int notbuy=helper(prices,ci+1,n,canbuy,pq);
            return pq[ci][canbuy]=max(take,notbuy);
        }
        else{
          int take=prices[ci]+helper(prices,ci+1,n,!canbuy,pq);
            int notbuy=helper(prices,ci+1,n,canbuy,pq);
            return pq[ci][canbuy]=max(take,notbuy);  
        }
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>pq(prices.size()+1,vector<int>(2,-1));
        return helper(prices,0,prices.size(),0,pq);
        
    }
};