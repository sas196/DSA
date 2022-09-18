class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size()+1;
        vector<vector<int>>v(n,vector<int>(2,-1));
        return helper(prices,0,1,v);
        
    }
    int helper(vector<int>& prices,int ci,int flag,vector< vector<int> > &v){
        if(ci>=prices.size()){
            return 0;
        }
        if(v[ci][flag]!=-1){
            return v[ci][flag];
        }
        int ans=0;
        if(flag==1){
            int hold=helper(prices,ci+1,1,v);
            int buy=-prices[ci]+helper(prices,ci+1,0,v);
             ans=max(hold,buy);
        }
        else{
            int hold=helper(prices,ci+1,0,v);
            int sell=prices[ci]+helper(prices,ci+1,1,v);
            ans=max(hold,sell);
        }
        v[ci][flag]=ans;
        return ans;
        
    }
};