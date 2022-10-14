class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        int pre=1,post=1;
        for(int i=0;i<nums.size();i++){
            if(i>=0){
                ans[i]=pre*ans[i];
                pre=pre*nums[i];
            }
           
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(i<nums.size()){
                ans[i]=ans[i]*post;
                post=post*nums[i];
            }
        }
        return ans;
    }
};