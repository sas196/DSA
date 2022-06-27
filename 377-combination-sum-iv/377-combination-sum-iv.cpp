class Solution {
public:
    int helper(vector<int>& nums,vector<int>&pq,int target){
        if(target==0){
            return 1;
        }
        if (target < 0) return 0;
        if(pq[target]!=-1)return pq[target];
        int res = 0;
        for(int it:nums){
            res += helper(nums, pq, target-it);
        }
        return pq[target] = res;
    }
    int combinationSum4(vector<int>& nums, int target) {
        int ans=0;
        vector<int>pq(target+1,-1);
        return helper(nums,pq,target);
        
        
    }
};