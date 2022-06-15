class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=INT_MIN;
        int life=0;
        for(int i=0;i<nums.size();i++){
            if(candidate==nums[i])
                life++;
            else if(life==0)
            {
                candidate=nums[i];
                life=1;
            }
            else{
                life--;
            }
        }
       return candidate;
        
    }
};