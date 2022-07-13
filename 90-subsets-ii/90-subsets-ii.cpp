class Solution {
public:
        void helper(int ci,vector<vector<int>>&ans,vector<int>pq,vector<int>nums){
            //if(ci>=nums.size())return 
          ans.push_back(pq);
            for(int i=ci;i<nums.size();i++){
                if(i>ci&&nums[i]==nums[i-1])continue;
               pq.push_back(nums[i]);
               helper(i+1,ans,pq,nums);
                pq.pop_back();
                
            }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>pq;
        helper(0,ans,pq,nums);
        return ans;
        
    }
};