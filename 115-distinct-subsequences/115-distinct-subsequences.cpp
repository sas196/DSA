class Solution {
public:
     int helper(string s,string t,int i,int j,vector<vector<int>>&dp){
        
        if(j<0)return 1;
        if(i<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(s[i]==t[j])return dp[i][j]=(helper(s,t,i-1,j-1,dp)+helper(s,t,i-1,j,dp))%1000000007;
        else return dp[i][j]=helper(s,t,i-1,j,dp)%1000000007;
    }
    int numDistinct(string S, string T)
    {
        vector<vector<int>>dp(S.size()+1,vector<int>(T.size()+1,-1));
        return helper(S,T,S.size()-1,T.size()-1,dp);
        
    }
};