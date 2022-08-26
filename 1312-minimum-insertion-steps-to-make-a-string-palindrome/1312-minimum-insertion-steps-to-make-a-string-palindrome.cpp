class Solution {
public:
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp(x+1,vector<int>(y+1,0));
        
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[x][y];
        // your code here
    }
    int minInsertions(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        return s.size()-lcs(s.size(),s.size(),s,s1);
        
    }
};