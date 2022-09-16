class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1,i;
        int prev=nums[0];
        for(i=0;i<nums.size();i++){
            if(nums[i]==prev);
            else{
                prev=nums[i];
                nums[j]=nums[i];
               // i++;
                j++;
              
            }
        }
        return j;
    }
};