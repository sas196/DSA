class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
         int candidate1=INT_MIN;
        int candidate2=INT_MIN;
        int life1=0,life2,count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(candidate1==nums[i])
                life1++;
            else if(candidate2==nums[i])
                life2++;
            else if(life1==0)
            {
                candidate1=nums[i];
                life1=1;
            }
            else if(life2==0)
            {
                candidate2=nums[i];
                life2=1;
            }
            else{
                life1--;
                life2--;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(candidate1==nums[i])count1++;
            if(candidate2==nums[i])count2++;
        }
       int n=nums.size();
        if(count1>n/3){
            ans.push_back(candidate1);
        }
         if(count2>n/3){
            ans.push_back(candidate2);
        }
        return ans;
    }
};