class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high=nums.size()-1;
      int low=0;
      int mid;
      if(high==0){
        return high;
      }
      if(high==1){
        if(nums[low]>nums[high])
          return low;
        else
          return high;
      }
      while(low<=high){
        if(low==high){
          return low;
        }
        mid=(low+high)/2;
        if((mid==0||nums[mid]>=nums[mid-1])&&(mid==nums.size()-1||nums[mid]>=nums[mid+1])){
          return mid;
        }
        else if(mid>0&&nums[mid-1]>nums[mid]){
          high=mid-1;
        }
        else{
        low=mid+1;
        }
      }
      return -1;
    }
};