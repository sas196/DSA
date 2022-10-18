class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0)return 0;
        int left=0,right=0,ans=0;
        int res=1;
        while(left<=right and right<nums.size()){
            res=res*nums[right];
            while(res>=k){
                res=res/nums[left];
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        if(ans<0)return 0;
        return ans;
        
    }
};