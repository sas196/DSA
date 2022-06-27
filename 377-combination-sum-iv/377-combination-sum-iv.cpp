class Solution {
public:
    int helper(vector<int>nums,int target,int ci,vector<vector<int>> &dp){
        if(target==0){
            return 1;
            
        }
        if(target<0||ci>=nums.size())return 0;
        
       if(dp[ci][target] != -1) return dp[ci][target];
         int take = helper(nums,target-nums[ci],0,dp);
         int nottake = helper(nums,target,ci+1,dp);
        return dp[ci][target] = take+nottake;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int ans=0,ci=0;
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        return helper(nums,target,ci,dp);
        
        
    }
};