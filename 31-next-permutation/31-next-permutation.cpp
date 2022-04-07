class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int i=nums.size()-1;
      while(i>0&&nums[i]<=nums[i-1]){
        i--;
      }
      if(i==0){
        int j=nums.size()-1;
      while(i<=j){
         int temp=nums[i];
      nums[i]=nums[j];
      nums[j]=temp;
        i++;
        j--;
      }
      }
      
      else {
      
      int j=i-1;
        int m=nums.size()-1;
        while(m>j){
          if(nums[m]>nums[j]){
          i=m;
         break;
        }
          m--;
          
        }
      int temp=nums[j];
      nums[j]=nums[i];
      nums[i]=temp;
        i=j+1;
      j=nums.size()-1;
      while(i<=j){
         int temp=nums[i];
      nums[i]=nums[j];
      nums[j]=temp;
        i++;
        j--;
      }
      }
    }
};