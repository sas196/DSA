class Solution {
public:
    int helper(int ci,int prev,vector<int>&nums,vector<vector<int>>&pq){
        if(ci==nums.size())return 0;
        if(pq[ci][prev+1]!=-1)return pq[ci][prev+1];
        int notake=helper(ci+1,prev,nums,pq),take=0;
        if(prev==-1||nums[ci]>nums[prev]){
            take=1+helper(ci+1,ci,nums,pq);
        }
        return pq[ci][prev+1]=max(take,notake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>pq(nums.size()+1,vector<int>(nums.size()+2,-1));
        return helper(0,-1,nums,pq);
        
    }
};