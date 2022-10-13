class Solution {
public:
    int helper(vector<int>&nums,int ci,int n,int prev,vector<vector<int>>&pq){
        if(ci>=n)return 0;
        if(pq[ci][prev+1]!=-1)return pq[ci][prev+1];
        if(prev==-1 or nums[ci]>nums[prev]){
            int take=1+helper(nums,ci+1,n,ci,pq);
            int notake=helper(nums,ci+1,n,prev,pq);
            return pq[ci][prev+1]=max(take,notake);
        }
        else return pq[ci][prev+1]=helper(nums,ci+1,n,prev,pq);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>pq(nums.size()+1,vector<int>(nums.size()+2,-1));
        return helper(nums,0,nums.size(),-1,pq);
        
    }
};