class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
            int sum=0;
            int i=0,j=0,ans=INT_MAX;
            while(j<nums.size()){
                    sum+=nums[j];
                    if(sum>=target){
                           
                            while(sum>=target){
                                    sum=sum-nums[i];
                                    ans=min(ans,j-i+1);
                                    i++;
                            }
                    }
                    j++;
                    
            }
            
          ans=min(ans,j-i+1);
            if(ans>nums.size())return 0;
        return ans;
    }
};